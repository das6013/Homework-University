#include <stdio.h>
#include <stdlib.h>
struct person
{
    char name[20];
    int age;
};

int save(char* filename, struct person* st, int n);

int main(void)
{
    char filename[29] = "people.txt";
    struct person people[] = { "Tom", 23, "Alice", 27, "Bob", 31, "Kate", 29 };
    int n = sizeof(people) / sizeof(people[0]);

    save(filename, people, n);
    return 0;
}

// запись в файл массива структур
int save(char* filename, struct person* st, int n)
{
    FILE* fp;
    char* c;

    // число записываемых байтов
    int size = n * sizeof(struct person);
    fp = fopen(filename, "w");
    
    // записываем количество структур
    c = (char*)&n;
    for (int i = 0; i < sizeof(int); i++)
    {
        putc(*c++, fp);
    }

    // посимвольно записываем в файл все структуры
    c = (char*)st;
    for (int i = 0; i < size; i++)
    {
        putc(*c, fp);
        c++;
    }
    fclose(fp);
    return 0;
}





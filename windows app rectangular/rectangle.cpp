#include"rectangle.h"
rectangle::rectangle(double c, double d, double e, double f)/*)����������*/
{
	x = c;/*�K�������t�y�~�p���p �V*/
	y = d;/*�K�������t�y�~�p���p �T*/
	a = e;/*�D�|�y�~�p*/
	b = f; /*�Y�y���y�~�p*/
	
}
double rectangle::S()/* ������� ��������������*/
{ 
	double s;
	s = a * b;
	return s;
}
double rectangle::P() /*��������*/
{
	double p;
	p = a *2+ b*2;
	return p;
}
double rectangle::R() /*������ ��������� ����������*/
{
	double ren;
	ren = sqrt(a*a  + b*b)/2;
	return ren;
}
bool rectangle::Kvad()/*�������� �� ������� */
{
	if (a == b) return true;
	return false;
}
void rectangle::Mult(double qq) /*��������� ������*/
{a=a*qq;
b=b*qq;

}
bool rectangle::Rav(rectangle g)/*��������� ���������������*/
{
	if ((a == g.a) && (b == g.b)) return true;
	return false;
}
void rectangle::Center(rectangle g) /*����� ��������� ����������*/
{
	x = g.x + g.a / 2;
	y = g.y - g.b / 2;
	
}
bool rectangle::pot(rectangle g) /*������� ���������������*/
{
	if (a/g.a==b/g.b&&a/g.a!=1) return true;
	return false;
}
bool rectangle::persech(rectangle g) /*�������� ���������� */
{
	double x1,x2,y1,y2;
	x1=x+a;/*������ ������ ���������� ren1*/
	y1=y-b;/*������ ������ ���������� ren1*/
	x2=g.x+g.a;/*�����  ������ ���������� ren2*/
	y2=g.y-g.b;/*�����  ������ ���������� ren2*/
	if (x<=g.x && (x+a)>= g.x && y>=g.y && y-b<=g.y) /*�������� �� ����������� � ������������� */
	{if (g.x+g.a<x+a && g.y-g.b>y-b) return true;}//*�������� �� �����������  � ������������� */
	if ((g.x<=x && g.x+g.a>x && g.y>y && g.y-g.b<y)&& ((g.x+g.a>x+a && g.y-g.b<y-b))) return true;
	if (x < x2 && x1 > g.x && y >y2 && y1< g.y)  /*�������� �� ����������� � ������������� */
		return true;
	return false;

}
void rectangle::kek(rectangle g,rectangle f)


{double s;
s=f.y-f.b;
	if (g.x>f.x&&g.y==f.y) /*����� �������*/
{
	if (g.b<f.b) b=g.b;
	else b=f.b;
	if ((g.a+g.x)>=(f.a+f.x)) a=f.x+f.a-g.x;
	else a=g.a;
	x=g.x;
	y=f.y;
}
else if (g.x>f.x&&g.y>f.y)/*����� ������ �������*/
{
	if ((g.y-g.b)>=(f.y-f.b))  {b=f.y-g.y;b+=g.b;}
	else b=f.b;

	if ((g.a+g.x)>=(f.a+f.x)) a=f.x+f.a-g.x;
	else a=g.a;
	x=f.x+f.a-a;
	y=f.y;
}
else if (g.x>f.x&&g.y<f.y)/*����� ������� �������*/
{   if ((g.y-g.b)>=(f.y-f.b)) b=g.b;
else {b=g.y-f.y;b+=f.b;}
	if ((g.a+g.x)>=(f.a+f.x)) a=f.x+f.a-g.x;
	else a=g.a;
	x=f.x+f.a-a;
	y=g.y;
}
else if (g.x<f.x&&g.y<f.y) /*������ up �������*/
{   if ((g.y-g.b)>=(f.y-f.b)) b=g.b;
else b=g.y-f.y+f.b;
	if (g.x+g.a>f.a+f.x) a=f.a;
	else a=g.x+g.a-f.x;
	x=f.x;
	y=g.y;
}
else if (g.x<f.x && g.y>f.y)/*������ down �������*/
{   
	if ((g.y-g.b)>(f.y-f.b)) {b=f.y-g.y;b+=g.b;}
	else b=f.b;
	if (g.x+g.a>f.a+f.x)a=f.a;
	else a=g.x+g.a-f.x;
	x=f.x;
	y=f.y;
}
else if (g.x<f.x&&g.y==f.y) /*������  �������*/
{   
	if (g.y-g.b<=f.y-f.b) b=g.b;
	else b=f.b;
	if (g.x+g.a>f.a+f.x)a=g.x+g.a-g.x;
	else a=f.a;
	x=f.x;
	y=f.y;
}
else if (g.x==f.x&&g.y>f.y) /*������ �������*/
{   
	if (g.y-g.b<=f.y-f.b) b=f.b;
	else b=f.y-g.y+f.b;
	if (g.x+g.a>=f.x+f.a) a=f.a;
	else a=g.a;
	x=f.x;
	y=f.y;
}
else if (g.x==f.x&&g.y<f.y) /*������� �������*/
{   
	if ((g.y-g.b)>=(f.y-f.b)) b=g.b;
else b=g.y-f.y+f.b;
	if (g.x+g.a>=f.x+f.a) a=f.a;
	else a=g.a;
	x=f.x;
	y=g.y;
}
else if  (g.x<=f.x && (g.x+g.a)>= f.x && g.y>=f.y && g.y-g.b<=g.y)
{if (f.x+f.a<g.x+g.a && f.y-f.b>g.y-g.b) {
a=f.a;
b=f.b;
x=f.x;
y=f.y;}}
else if ((f.x<=g.x && f.x+f.a>g.x && f.y>g.y && f.y-f.b<g.y)&& ((f.x+f.a>g.x+g.a && f.y-f.b<g.y-g.b)))
{a=g.a;
b=g.b;
x=g.x;
y=g.y;
}
}

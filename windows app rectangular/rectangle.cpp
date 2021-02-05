#include"rectangle.h"
rectangle::rectangle(double c, double d, double e, double f)/*)констрктор*/
{
	x = c;/*ДKДАДАДВДtДyД~ДpДДДp ДV*/
	y = d;/*ДKДАДАДВДtДyД~ДpДДДp ДT*/
	a = e;/*ДDД|ДyД~Дp*/
	b = f; /*ДYДyДВДyД~Дp*/
	
}
double rectangle::S()/* ѕлощадь пр€моугольника*/
{ 
	double s;
	s = a * b;
	return s;
}
double rectangle::P() /*ѕериметр*/
{
	double p;
	p = a *2+ b*2;
	return p;
}
double rectangle::R() /*–адиус описанной окружности*/
{
	double ren;
	ren = sqrt(a*a  + b*b)/2;
	return ren;
}
bool rectangle::Kvad()/*ѕроверка на квадрат */
{
	if (a == b) return true;
	return false;
}
void rectangle::Mult(double qq) /*”множение сторон*/
{a=a*qq;
b=b*qq;

}
bool rectangle::Rav(rectangle g)/*–авентсво пр€моугольников*/
{
	if ((a == g.a) && (b == g.b)) return true;
	return false;
}
void rectangle::Center(rectangle g) /*÷ентр описанной окружности*/
{
	x = g.x + g.a / 2;
	y = g.y - g.b / 2;
	
}
bool rectangle::pot(rectangle g) /*подобие пр€моугольников*/
{
	if (a/g.a==b/g.b&&a/g.a!=1) return true;
	return false;
}
bool rectangle::persech(rectangle g) /*ѕроверка пересечни€ */
{
	double x1,x2,y1,y2;
	x1=x+a;/*ѕрава€ нижн€€ координата ren1*/
	y1=y-b;/*ѕрава€ нижн€€ координата ren1*/
	x2=g.x+g.a;/*Ћева€  нижн€€ координата ren2*/
	y2=g.y-g.b;/*Ћева€  нижн€€ координата ren2*/
	if (x<=g.x && (x+a)>= g.x && y>=g.y && y-b<=g.y) /*ѕроверка на входисмость в пр€моугольник */
	{if (g.x+g.a<x+a && g.y-g.b>y-b) return true;}//*ѕроверка на пересечение  в пр€моугольник */
	if ((g.x<=x && g.x+g.a>x && g.y>y && g.y-g.b<y)&& ((g.x+g.a>x+a && g.y-g.b<y-b))) return true;
	if (x < x2 && x1 > g.x && y >y2 && y1< g.y)  /*ѕроверка на входисмость в пр€моугольник */
		return true;
	return false;

}
void rectangle::kek(rectangle g,rectangle f)


{double s;
s=f.y-f.b;
	if (g.x>f.x&&g.y==f.y) /*Ћева€ сторона*/
{
	if (g.b<f.b) b=g.b;
	else b=f.b;
	if ((g.a+g.x)>=(f.a+f.x)) a=f.x+f.a-g.x;
	else a=g.a;
	x=g.x;
	y=f.y;
}
else if (g.x>f.x&&g.y>f.y)/*Ћева€ нижн€€ сторона*/
{
	if ((g.y-g.b)>=(f.y-f.b))  {b=f.y-g.y;b+=g.b;}
	else b=f.b;

	if ((g.a+g.x)>=(f.a+f.x)) a=f.x+f.a-g.x;
	else a=g.a;
	x=f.x+f.a-a;
	y=f.y;
}
else if (g.x>f.x&&g.y<f.y)/*Ћева€ верхн€€ сторона*/
{   if ((g.y-g.b)>=(f.y-f.b)) b=g.b;
else {b=g.y-f.y;b+=f.b;}
	if ((g.a+g.x)>=(f.a+f.x)) a=f.x+f.a-g.x;
	else a=g.a;
	x=f.x+f.a-a;
	y=g.y;
}
else if (g.x<f.x&&g.y<f.y) /*права€ up сторона*/
{   if ((g.y-g.b)>=(f.y-f.b)) b=g.b;
else b=g.y-f.y+f.b;
	if (g.x+g.a>f.a+f.x) a=f.a;
	else a=g.x+g.a-f.x;
	x=f.x;
	y=g.y;
}
else if (g.x<f.x && g.y>f.y)/*права€ down сторона*/
{   
	if ((g.y-g.b)>(f.y-f.b)) {b=f.y-g.y;b+=g.b;}
	else b=f.b;
	if (g.x+g.a>f.a+f.x)a=f.a;
	else a=g.x+g.a-f.x;
	x=f.x;
	y=f.y;
}
else if (g.x<f.x&&g.y==f.y) /*права€  сторона*/
{   
	if (g.y-g.b<=f.y-f.b) b=g.b;
	else b=f.b;
	if (g.x+g.a>f.a+f.x)a=g.x+g.a-g.x;
	else a=f.a;
	x=f.x;
	y=f.y;
}
else if (g.x==f.x&&g.y>f.y) /*Ќижн€€ сторона*/
{   
	if (g.y-g.b<=f.y-f.b) b=f.b;
	else b=f.y-g.y+f.b;
	if (g.x+g.a>=f.x+f.a) a=f.a;
	else a=g.a;
	x=f.x;
	y=f.y;
}
else if (g.x==f.x&&g.y<f.y) /*¬ерхн€€ сторона*/
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

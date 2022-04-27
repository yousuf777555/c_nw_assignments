#include<stdio.h>
#define PI 3.14
int main()
{
    int r;
    float area,circumference;
    printf("enter the radius of circle\n");
    scanf("%d",&r);
    area=PI*(r*r);
    circumference=2*(PI*r);
    printf("area of circle is %0.2f\n",area);
    printf("circumference of circle %0.2f\n",circumference);
}

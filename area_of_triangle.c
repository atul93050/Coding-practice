#include<stdio.h>
#include<math.h>
int main(){
   float a,b,c,s;
    float Area_of_triangle;
    printf("Enter three edges of triangle ");
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    Area_of_triangle=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of triangle is %f",Area_of_triangle);
    return 0;
}
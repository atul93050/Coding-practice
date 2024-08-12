
#include <stdio.h>
int convert(double c){
    double f;
    
    f=(c*9/5)+32;
    printf("farehnheight %lf",f);
}
int main() {
   
    double c;
    printf("Covert celcius to Farenhieght:");
    scanf("%lf",&c);
    convert(c);

    return 0;
}
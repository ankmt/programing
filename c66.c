#include<stdio.h>
// #define PI 3.14
int main(){
    int radius=5;
    const double PI=3.14;
    double cir=2*radius*PI;
    PI=3.14;
    printf("r:%d,circumference:%lf\n",radius,cir);
    return 0;
}
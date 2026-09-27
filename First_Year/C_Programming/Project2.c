#include<stdio.h>
int main(){
    float fees, percentmarks, schship, netfees;
    printf("Enter your College annual fees and percentage marks :");
    scanf ("%f %f", &fees,&percentmarks);
    if (percentmarks>=85)
        schship=(fees/10);
    netfees=fees-schship;
    printf ("Your net fees is : %f", netfees);
    return 0;
}
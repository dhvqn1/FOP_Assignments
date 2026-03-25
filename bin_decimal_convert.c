#include <stdio.h>
#include <math.h>

int main(){
    int bin_no, decimal=0,m=0,rem;
    printf("enter binary number");
    scanf("%d",&bin_no);

    while(bin_no != 0)
    {
        rem=bin_no%10;
        decimal=decimal+(rem*pow(2,m));
        bin_no=bin_no/10;
        m++;
    }
    printf("%d",decimal);
    return 0;
}
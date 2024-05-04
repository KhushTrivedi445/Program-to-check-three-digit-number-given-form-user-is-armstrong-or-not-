#include<stdio.h>

int main () {
    
    int n,a,b,c;
    printf("Enter three digit number:");
    scanf("%d",&n);
a=n/100;
b=(n/10)%10;
c=n%10;

int sum = (a*a*a) + (b*b*b) + (c*c*c);
     if(sum==n) {
        printf("%d is armstrong",n);
     }else {
        printf("%d is not an armstrong",n);
     }

    return 0;
}
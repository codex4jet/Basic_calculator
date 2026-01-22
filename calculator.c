#include <stdio.h>

int main() {
    
    float a,b,c,d;
    printf("1 for multiplication, 2 for division, 3 for sum , 4 for difference\n");
    printf("Enter first number: ");
    scanf("%f",&a);
    printf("Enter second number: ");
    scanf("%f",&b);
    printf("Enter operation: ");
    scanf("%f",&c);
    
    if(c == 1 ){
        d = a*b;
        printf("The product is %f", d);
    }
    else if(c == 2){
        d = a/b;
        printf("The quotient is %f", d);
    }
    else if(c == 3){
        d = a+b;
        printf("The sum is %f", d);
    }
    else{
        d = a-b;
        printf("The difference is %f", d);
    }
}

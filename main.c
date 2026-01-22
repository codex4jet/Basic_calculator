#include <stdio.h>
#include <math.h>

int main() {

    
    float a,b,d;
    int c;
    printf("1 for multiplication, 2 for division, 3 for sum , 4 for difference , 0 for exit \n ");
    printf("Enter first number: ");
    scanf("%f",&a);
    printf("Enter second number: ");
    scanf("%f",&b);
    
    while (c!=0){
    printf("Enter operation: ");
    scanf("%d",&c);

    
    if(c == 1 ){
        d = a*b;
        printf("The product is %f\n", d);
        
    }
    else if(c == 2){
        d = a/b;
        printf("The quotient is %f\n", d);
        
    }
    else if(c == 3){
        d = a+b;
        printf("The sum is %f\n", d);
        
    }
    else if(c==4){
        d = a-b;
        printf("The difference is %f\n", d);
        
    }
}
}

       
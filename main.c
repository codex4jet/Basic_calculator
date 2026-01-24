#include <stdio.h>
#include <math.h>

int main() {

    
    float a,b,d,e,f;
    int c=-7;
    printf("1 for multiplication\n, 2 for division\n, 3 for sum\n , 4 for difference\n 5 square\n 6 for cube \n ,7 log base 10 \n , 0 for exit \n ");
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
        printf("The division is %f\n", d);
        
    }
    else if(c == 3){
        d = a+b;
        printf("The sum is %f\n", d);
        
    }
    else if(c==4){
        d = a-b;
        printf("The difference is %f\n", d);
        
    }
    else if(c==5){
        printf("Square of %f is %f\n",a,sqrt(a));
        printf("Square of %f is %f",b,sqrt(b));

    }
    else if(c==6){
        printf("Cube of %f is %f\n",a,cbrt(a));
        printf("cube of %f is %f\n",a,cbrt(b));

    }
    else if(c==7){
        printf("log  of %f is %f\n",a,log10(a));
        printf("log  of %f is %f\n",a,log10(b));

    }
    
    else {
        printf("Enter valid choice  ! \n ");
    }
}
}

       
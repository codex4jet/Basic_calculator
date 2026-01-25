#include <stdio.h>
#include <math.h>

int main() {

    
    float a,b,d,e,f,x;
    int c=-1;
    printf("-----------Simple Calculator---------- \n");
    printf(" 1 for multiplication\n 2 for division\n 3 for sum\n 4 for difference\n 5 square\n 6 for cube \n 7 log base 10 \n 0 for exit \n ");
    while(c!=0){
    printf("Enter opration : ");
    scanf("%d",&c);

    if(c==5 || c==6 || c==7){
        printf("Enter the number :");
        scanf("%f",&x);
    }
    else if(c<5 && c>0){
        printf("Enter first number: ");
        scanf("%f",&a);
        printf("Enter second number: ");
        scanf("%f",&b);
    }
    else {
        printf("Enter valid choice  ! \n ");
    }
    
    
    
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
        printf("Square of %f is : %f\n",x,x*x);
        
    }
    else if(c==6){
        printf("Cube of %f is %f\n",x,x*x*x);
        
    }
    else if(c==7){
        printf("log  of %f is %f\n",x,log10(x));
        
    }
}
    
    
}

       
//
//  Calculator.c
//  
//
//  Created by Varun on 29/05/17.
//
//

#include <stdio.h>
int main()
{
    int opt = 0, num = 0, a = 0, b = 0, res = 0;
    int addition(int, int);
    int substraction(int, int);
    int multiplication(int, int);
    int division(int, int);
    int square (int);
    int squareb (int);
    
    while (1) {
        
        printf("\n******Menu******\n1) Enter data\n2) Addition\n3) Substraction\n4) Multiplication\n5) Division\n6) Square a\n7) Square b\n0) Exit\nEnter option: ");
        scanf("%d",&opt);
        
        if (opt == 0) {
            break;
        }
        
        switch (opt) {
                
            case 1:
                printf("enter first operand :");
                scanf("%d",&a);
                printf("enter second operand :");
                scanf("%d",&b);
                break;
                
            case 2:
                res = addition(a,b);
                break;
                
            case 3:
                res = substraction(a,b);
                break;
                
            case 4:
                res = multiplication(a,b);
                break;
                
            case 5:
                res = division(a,b);
                break;
            case 6:
                res = square(a);
                break;
                
            case 7:
                res = squareb(b);
                break;
                
            default:
                printf("Enter correct option\n");
                break;
        }
        
        printf("Result : %d\n",res);
    }

    return 0;
}

int addition (int a, int b) {
    
    return a + b;
}
int substraction (int a, int b) {
    
    return a - b;
}
int multiplication (int a, int b) {
    
    return a * b;
}
int division (int a, int b) {
    
    return a / b;
}
int square (int a) {
    
    return a * a;
}
int squareb (int b) {
    
    return b * b;
}




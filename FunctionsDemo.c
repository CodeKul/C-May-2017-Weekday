//
//  FunctionsDemo.c
//  
//
//  Created by Varun on 28/05/17.
//
//

#include <stdio.h>

int main() {
    
    int add(int, int);     //function decleration
    int sub(int, int);
    int mul(int, int);
    int div(int, int);
    int square(int);
    void f(int , int);
    int a = 10;
    int b = 20;
    int i = 0;
    int j=0;
    int c = 0;

    c = add(a,b);               //function call
    printf("Result : %d\n",c);

    c = sub(a,b);
    printf("Result : %d\n",c);
    
    c = mul(a,b);
    printf("Result : %d\n",c);
    
    c = div(a,b);
    printf("Result : %d\n",c);
    
    c = square(a);
    printf("Result : %d\n",c);
    

    f(i,j);
    
    return 0;
}

//function definations
int add (int x, int y) {
    
    int c = 0;

    c = x + y;

    return c;
}

int sub (int x, int y) {
    
    int c = 0;
    
    c = x - y;
    
    return c;
}
int mul (int x, int y) {
    
    int c = 0;
    
    c = x * y;
    
    
    return c;
}
int div (int x, int y) {
    
    int c = 0;
    
    c = y / x;
    
    
    return c;
}

int square (int x) {
    
    int c = 0;
    
    c = x * x;
    
    
    return c;
}
void f (int x, int y) {
    for (x=0 ; x < 5; x++) {        for (y=0 ; y < 5 - x  ; y++){
        if (x == 0 || x == 2 || y == 0)
            printf("*");
        else
            printf(" ");
        }
        printf("\n");
    }
    return ;
}
void f (int x, int y) {
    for (x=0 ; x < 5; x++){
        for (y=0; y < x + 1 ; y++)
            printf ("*");
    }
    printf("\n");
}

return ;
}

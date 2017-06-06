//
//  Operators.c
//  
//
//  Created by Varun on 06/05/17.
//
//

#include <stdio.h>

int main() {
    
    int a = 10;
    int b = 20;
    float c = 0;
    
    // Arithmetic
    c = a + b;
    printf("Addition : %f\n",c);
    
    c = a - b;
    printf("Substraction : %f\n",c);
    
    c = a * b;
    printf("Multiplication : %f\n",c);
    
    c = a / b;
    printf("Division : %f\n",c);
    
    c = a % b;
    printf("Reminder : %f\n",c);
    
    // Incr / Decr
    
    printf("a : %d\n",a++); // post increment
    
    printf("a : %d\n",++a); // pre increment
    
    printf("a : %d\n",a--); // post decrement
    
    printf("a : %d\n",--a); // pre decrement
    
    //Assignment
    
    a = c;
    printf("a : %d\n",a);
    
    // Compound Assignment
    
    c += b;     // c = c + b;
    printf("c : %f\n",c);
    
    // Relational
    
    /*
     
    ==
     
    !=
     
     <
     
     >
     
     <=
     
     >=
     
     */
    
    // Logical
    
    /*
     
     &&
     
     ||
     
     !
     
    p   q   &&  ||  !p
    0   0   0   0   1
    0   1   0   1   1
    1   0   0   1   0
    1   1   1   1   0
     
     */
    
    c = a < b && a == 10 ? 10 : 20;
    printf("bool c : %f\n",c);

    c = a > b || b == 10 ? 20 : 40;
    printf("bool c : %f\n",c);

    c = a <= b || a == 10 ? 30 : 15;
    printf("bool c : %f\n",c);

    c = a >= b && a == 10? 45 : 10;
    printf("bool c : %f\n",c);
    
    
    return 0;
    
}

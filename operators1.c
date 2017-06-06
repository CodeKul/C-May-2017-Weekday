//
//  operators1.c
//  
//
//  Created by Varun on 06/05/17.
//
//

#include <stdio.h>

int main()
{
    int a,b;
    float c;
    a=25;
    b=15;
    c=10;
    
    // Arithmetic

    c = a + b;
    printf("c : %f\n",c);
    
    c = a - b;
    printf("c : %f\n",c);
    
    c = a * b;
    printf("c : %f\n",c);
    
    c= a / b;
    printf("c : %f\n",c);
    
    c= a % b;
    printf("c : %f\n",c);
    
    // increment and decrement
    
    printf("%d\n",a++);
    printf("%d\n",++b);
    printf("%d\n",a--);
    printf("%f\n",--c);
    
    
    // Compound
    
    a +=c;
    printf("a : %d\n",a);
    c-=b;
    printf("c : %f\n",c);
    
    // Relational
    
    
    
    
    
    
    
    
    return 0;

}


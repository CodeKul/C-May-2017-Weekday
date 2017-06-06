//
//  ReverseNumber.c
//  
//
//  Created by Varun on 30/05/17.
//
//

#include <stdio.h>

int main() {
    
    int num = 0;
    int digit1 , digit2 ,digit3, digit = 0;
    int sum = 0, mult = 1;
    int temp = 0;
    
    printf("Enter digit number: ");
    scanf("%d",&num);
    
    temp = num;
    
    while (1) {
        temp /= 10;
        if (temp == 0) {
            break;
        }
        mult *= 10;
    }
    
    while (num) {
        
        digit = num % 10;
        
        sum += digit;// revNum = revNum + (digit * mult)
        
        mult /= 10;
        num /= 10;
        
    }
    
    printf("Sum : %d\n",sum);
    
    /*
    printf("enter a number");
    scanf("%d",&num);
    while (num) {
        digit1 = num % 10;
        digit2 = num % 10;
        digit3 = num % 10;
        digit4 = num % 10;
        sum = digit1 + digit2 + digit3 + digit4;
    }
    printf("sum of number %d\n", sumnum);
     */
    return 0;
    
}

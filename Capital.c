//
//  Capital.c
//  
//
//  Created by Varun on 24/06/17.
//
//

#include <stdio.h>
int main()
{
    int i, count = 0;
    char str[20];
    printf("Enter a message :\n");
    scanf("%s", str);
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 97 && str[i] <= 122)
        {
            str[i] -= 32;
        }
    }
    printf("%s", str);
    return 0;
    
}

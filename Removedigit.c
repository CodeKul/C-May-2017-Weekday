//
//  Removedigit.c
//  
//
//  Created by Varun on 24/06/17.
//
//

#include <stdio.h>
int main()
{
    int i, j;
    char arr[30], temp;
    printf("Enter a string :\n");
    scanf("%[^\n]s", arr);
    for(i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] >= 48 && arr[i] <= 57)
        {
            i--;
            for(j = i; arr[j] != '\0' ;j++)
            {
             arr[j] = arr[j+1];
            }
            arr[j] = '\0';
        }
        
    }
    printf("Display string : %s\n", arr);
    return 0;
    
}

//
//  Count.c
//  
//
//  Created by Varun on 24/06/17.
//
//

#include <stdio.h>
int main()
{
    int i, count = 0;
    char arr[100];
    printf("Enter a message :\n");
    scanf("%[^\n]s", arr);
    for(i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == ' ')
            count++;
    }
    printf("Number of words in a string is : %d\n", count);
    return 0;
}

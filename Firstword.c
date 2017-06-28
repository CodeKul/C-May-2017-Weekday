//
//  Firstword.c
//  
//
//  Created by Varun on 28/06/17.
//
//

#include <stdio.h>
int main()
{
    int i;
    char arr[20];
    printf("Enter a string\n");
    scanf("%[^\n]", arr);
    int spaceIndex = -1;
    for(i = 0; arr[i] != '\0'; i++)
    {
        if(arr[i] >= 65 && arr[i] <= 90)
        {
            arr[i] += 32;
        }
        if(arr[spaceIndex + 1] >= 97 && arr[spaceIndex + 1] <= 122)
        {
            arr[spaceIndex + 1] -= 32;
        }
        if (arr[i] == 32) {
            spaceIndex = i;
        }
    }
    printf("%s\n", arr);
    return 0;
}

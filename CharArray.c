//
//  CharArray.c
//  
//
//  Created by Varun on 24/06/17.
//
//

#include <stdio.h>
int main() {
    
    char name[20];
    int i = 0, uppercase = 0, lowercase = 0, number = 0, symbol = 0;
    printf("Enter a message : \n");
    scanf("%s", name);
    for(i = 0; name[i] != '\0'; i++)
    {
        if(name[i] >= 65 && name[i] <= 90)
        {
            uppercase++;
        }
        else if(name[i] >= 97 && name[i] <= 122)
        {
            lowercase++;
        }
        else if(name[i] >= 48 && name[i] <= 57)
        {
            number++;
        }
        else {
            symbol++;
        }
    }
    printf("number of uppercase char : %d\n", uppercase);
    printf("number of lowercase char : %d\n", lowercase);
    printf("number of numbers : %d\n", number);
    printf("number of symbols : %d\n", symbol);

    return 0;
}

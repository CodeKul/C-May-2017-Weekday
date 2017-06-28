//
//  stuinfo.c
//  
//
//  Created by Varun on 17/06/17.
//
//

#include <stdio.h>
int main()
    {
        int arr[5];
        char ch[30];
        float per = 0, totalmks = 0, submks = 0, maxmks = 100;
        int i = 0;
        printf("Name of the student\n");
        scanf("%s", ch);
        for (i = 0; i < 5; i++)
        {
            printf("Marks of sub\n");
            scanf("%f", &submks);
            totalmks = totalmks + submks;
        }
        per = (totalmks/maxmks)*100;
        if (per < 40)
            {
                printf("%s is failed\n",ch);
            }
        else
            {
                printf("%s is passed\n", ch);
            }
        return 0;
    }

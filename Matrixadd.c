//
//  Matrixadd.c
//  
//
//  Created by Varun on 28/06/17.
//
//

#include <stdio.h>

int main() {
    
    int arr1[3][3];
    int arr2[3][3];
    int arrres[3][3];
    int arrres1[3][3];
    
    int i = 0, j = 0;
    
    for (i = 0; i < 3; i++) {
        
        for (j = 0; j < 3; j++) {
            
            scanf("%d",&arr1[i][j]);
        }
    }
    for (i = 0; i < 3; i++) {
        
        for (j = 0; j < 3; j++) {
            
            scanf("%d",&arr2[i][j]);
        }
    }
    
    
    for (i = 0; i < 3; i++) {
        
        for (j = 0; j < 3; j++) {
            
            printf("%d\t",arr1[i][j]);

        }
        printf("\n");
    }
    
    printf("\n");
    for (i = 0; i < 3; i++) {
        
        for (j = 0; j < 3; j++) {
            
            printf("%d\t",arr2[i][j]);
            
        }
        printf("\n");
    }
    printf("\n");

    for (i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            arrres[i][j] = arr1[i][j] + arr2[i][j];
            printf("%d\t", arrres[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            arrres1[i][j] = arr1[i][j] - arr2[i][j];
            printf("%d\t", arrres1[i][j]);
        }
        printf("\n");
    }

    return 0;
}

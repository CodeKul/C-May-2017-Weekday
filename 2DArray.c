//
//  2DArray.c
//  
//
//  Created by Varun on 28/06/17.
//
//

#include <stdio.h>

int main() {
    
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int arr1[3][3];
    int i = 0, j = 0;
    
    for (i = 0; i < 3; i++) {
        
        for (j = 0; j < 3; j++) {
            
            scanf("%d",&arr[i][j]);
        }
    }
    for (i = 0; i < 3; i++) {
        
        for (j = 0; j < 3; j++) {
            
            scanf("%d",&arr[i][j]);
        }
    }
    return 0;
}

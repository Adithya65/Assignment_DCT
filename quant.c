#include<stdio.h>
#include<math.h>
#define pi 3.142857
int main()
{ int q[8][8];
    int matrix[8][8] = { { 25, 10, 100, 255, 255, 255, 255, 255 },
                         { 255, 255, 255, 255, 255, 255, 255, 255 },
                         { 255, 255, 255, 255, 255, 255, 255, 255 },
                         { 255, 255, 255, 255, 255, 255, 255, 255 },
                         { 255, 255, 255, 255, 255, 255, 255, 255 },
                         { 255, 255, 255, 255, 255, 255, 255, 255 },
                         { 255, 255, 255, 255, 255, 255, 255, 255 },
                         { 255, 255, 255, 255, 255, 255, 255, 255 } };
        int i, j, k, l;
 
    // dct will store the discrete cosine transform
     
 
     
 
    
 
             
             
 
            
             
            for (k = 0; k < 8; k++) {
                for (l = 0; l < 8; l++) {
                    q[l][k] =1+((k+l+1)*25);
                    
                }
            }
         
        
    
 
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            printf("%d\t", q[i][j]);
        }
        printf("\n");
    }}

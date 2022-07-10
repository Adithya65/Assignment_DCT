#include<stdio.h>
#include<math.h>
#define pi 3.142857
int main()
{
    int matrix[8][8] = { { 255, 255, 255, 255, 255, 255, 255, 255 },
                         { 255, 255, 255, 255, 255, 255, 255, 255 },
                         { 255, 255, 255, 255, 255, 255, 255, 255 },
                         { 255, 255, 255, 255, 255, 255, 255, 255 },
                         { 255, 255, 255, 255, 255, 255, 255, 255 },
                         { 255, 255, 255, 255, 255, 255, 255, 255 },
                         { 255, 255, 255, 255, 255, 255, 255, 255 },
                         { 255, 255, 255, 255, 255, 255, 255, 255 } };
        int i, j, k, l;
 
    // dct will store the discrete cosine transform
    float dct[8][8];
 
    float cu, cv, dct1, sum;
 
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
 
             
            if (i == 0)
                cu = 1;
            else
                cu = 0.707;
            if (j == 0)
                cv = 1 ;
            else
                cv = 0.707;
 
            // sum will temporarily store the sum of
            // cosine signals
            sum = 0;
            for (k = 0; k < m; k++) {
                for (l = 0; l < n; l++) {
                    dct1 = matrix[k][l] *cos((2 * k + 1) * i * pi / (2 * m)) *cos((2 * l + 1) * j * pi / (2 * n));
                    sum = sum + dct1;
                }
            }
            dct[i][j] = cu * cv * sum;
        }
    }
 
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%f\t", dct[i][j]);
        }
        printf("\n");
    }
}

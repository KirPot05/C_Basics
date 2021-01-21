#include <stdio.h>
#include<math.h>


int main()
{
    int m, n, arr[10][10], trace = 0, norm = 0;
    
    scanf("%d%d", &m, &n);

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &arr[i][j]);

        }
    }

    

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            
            if(i == j){
                trace += arr[i][j];
            }
            norm += arr[i][j] * arr[i][j];

            
        }
    }

    
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d ",arr[i][j]);

        }
        printf("\n");
    }
    norm = sqrt(norm);

    printf("\n");
    printf("Trace: %d", trace);
    printf("Norm: %d", norm);

    return 0;
}
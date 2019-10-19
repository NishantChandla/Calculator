#include <stdio.h>
int main()
{
    int A[50][50], transpose[50][50], r,c,i,j;
    printf("Enter number of rows and columns.");-      
    scanf("%d %d", &r, &c);

    printf("\nEnter respective elements of the matrix");
    for(i=0;i<r; ++i)
        for(j=0;j<c; ++j)
        {
            printf("Enter element A(%d%d)-",i+1, j+1);
            scanf("%d", &A[i][j]);
        }

    printf("\n\nThe entered Matrix is\n");
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            printf("%d", A[i][j]);
            if (j==c-1)
                printf("\n\n");
        }

    for(i=0; i<r; ++i)
        for(j=0;j<c; ++j)
        {
            transpose[j][i] = A[i][j];
        }

    printf("\nThe Transpose of Matrix will be\n");
    for(i=0; i<c; ++i)
        for(j=0;j<r; ++j)
        {
            printf("%d  ",transpose[i][j]);
            if(j==r-1)
                printf("\n\n");
        }
    return 0;
}
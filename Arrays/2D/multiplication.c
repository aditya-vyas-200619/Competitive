#include <stdio.h>
int main()
{
    int r1,r2,c1,c2;
    printf("------FOR MATRIX_1------\n");
    printf("Enter no. of rows: \n");
    scanf("%d",&r1);
    printf("Enter no. of columns: \n");
    scanf("%d",&c1);
    printf("Enter elements of Matrix 1: \n");
    int m1[r1][c1];
    int m2[r2][c2];
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            scanf("%d",&m1[i][j]);
        }
    }
    pritnf("------FOR MATRIX_2------\n");
    printf("Enter no. of rows: \n");
    scanf("%d",&r2);
    printf("Enter no. of columns: \n");
    scanf("%d",&c2);
    printf("Enter elements of Matrix 2: \n");
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            scanf("%d",&m2[i][j]);
        }
    }

    if(c1==r2)
    {
      int res[r1][c2];
      for(int i=0;i<r1;i++)
      {
        for(int j=0;j<c2;j++)
        {
            res[i][j] = 
        }
      }
    }
    else
    {
      printf("Multiplication not possible.");
    }
    return 0;
}
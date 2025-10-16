#include <stdio.h>
int main()
{
    int r1,r2,c1,c2;
    printf("FOR MATRIX 1: \n");
    printf("Enter no. of rows: ");
    scanf("%d",&r1);
    printf("Enter no. of columns: ");
    scanf("%d",&c1);
    int arr1[r1][c1];
    printf("FOR MATRIX 2: \n");
    printf("Enter no. of rows: ");
    scanf("%d",&r2);
    printf("Enter no. of columns: ");
    scanf("%d",&c2);
    int arr2[r2][c2];

    if((r1==r2)&&(c1==c2))
    {
      printf("Enter elements of Matrix 1: \n");
      for(int i=0;i<r1;i++)
      {
        for(int j=0;j<c1;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
      }
      printf("Enter elements of Matrix 2: \n");
      for(int i=0;i<r2;i++)
      {
        for(int j=0;j<c2;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
      }

      for(int i=0;i<r1;i++)
      {
        for(int j=0;j<c1;j++)
        {
            printf("%d ",(arr1[i][j]+arr2[i][j]));
        }
        printf("\n");
      }
    }
    
    else
    {
      printf("Please enter matrices of equal sizes!");
    }
    return 0;
}
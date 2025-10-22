#include <stdio.h>
int main()
{
  int r1,r2,c1,c2;
  printf("------FOR MATRIX 1------\n");
  printf("Enter r1: ");
  scanf("%d",&r1);
  printf("Enter c1: ");
  scanf("%d",&c1);
  int arr1[r1][c1];
  printf("Enter the elements: \n");
  for(int i=0;i<r1;i++)
  {
    for(int j=0;j<c1;j++)
    {
      scanf("%d",&arr1[i][j]);
    }
  }
  printf("------FOR MATRIX 2------\n");
  printf("Enter r2: ");
  scanf("%d",&r2);
  printf("Enter c2: ");
  scanf("%d",&c2);
  printf("Enter the elements: \n");
  int arr2[r2][c2];
  for(int i=0;i<r2;i++)
  {
    for(int j=0;j<c2;j++)
    {
      scanf("%d",&arr2[i][j]);
    }
  }
  if(c1!=r2)
  {
    printf("Matrix multiplication not possible.");
  }
  else
  {
    int cr = r2;
    int res[r1][c2];
    for(int i=0;i<r1;i++)
    {
      for(int j=0;j<c2;j++)
      {
        res[i][j]=0;
        for(int k=0;k<cr;k++)
        {
          res[i][j]+=arr1[i][k]*arr2[k][j];
        }
      }
    }
  printf("Resultant Matrix: \n");
  for(int i=0;i<r1;i++)
  {
    for(int j=0;j<c2;j++)
    {
      printf("%d ",res[i][j]);
    }
    printf("\n");
  }
  }
  return 0;
}
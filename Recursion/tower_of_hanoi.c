// minimum no. of moves = 2^n - 1.
// This program doesn't use this formula. It shows the way to solve the tower of hanoi.
#include <stdio.h>
void tower_of_hanoi(int n, char s, char h, char d)
{
  if(n==0) return;
  tower_of_hanoi(n-1,s,d,h);
  printf("%c --> %c\n",s,d);
  tower_of_hanoi(n-1,h,s,d);
  return;
}
int main()
{
    int n;
    printf("Enter the no. of discs: ");
    scanf("%d",&n);
    tower_of_hanoi(n,'A','B','C');
    return 0;
}
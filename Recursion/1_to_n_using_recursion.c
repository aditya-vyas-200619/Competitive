//Parameterised Way

// #include <stdio.h>
// void print(int x, int n)
// {
//     if(x>n)
//     return;
//     printf("%d \n",x);
//     print(x+1,n);
// }
// int main()
// {
//     int n;
//     printf("Enter the value of n: ");
//     scanf("%d",&n);

//     print(1,n);
// }


//Non-Parameterised Way

#include <stdio.h>

void increasing(int n)
{
    if(n==0)
    return;
    increasing(n-1);
    printf("%d \n",n);
}
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);   
    increasing(n);  // The line after it won't work until the purpose of the recursion is not completed.
    return 0;
}
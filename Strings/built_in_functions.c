#include <stdio.h>
#include <string.h>
int main()
{
   char str1[7]="Aditya";
   int x = strlen(str1);
   printf("%d\n",x);
   char str2[11];
   strcpy(str2,str1);    //deep copy
   printf("%s\n",str2);
   char str3[6] = " Vyas";
   strcat(str1,str3);
   printf("%s\n",str1);
   return 0;
}
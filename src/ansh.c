#include<stdio.h>
#include "./ansh.h"

int main(char *line1, const char *line2, int n)
{

   
 printf("%s", line1);

 for(int i=0; i<n;i++)
  {
     printf("%c", line2[i]);
  }
  return 0;
}
 
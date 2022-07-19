
#include <stdio.h>
#include<conio.h>
int main() {
   int i, space, rows, k = 0;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i) {
        k=0;
      for (space = 1; space <= rows - i; ++space) {
         printf("  ");
      }

      for(space=i-1;space>0;space--)
      {
          printf("%d ",space);
      }
      printf("\n");
   }
   return 0;
}

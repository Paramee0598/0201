#include <stdio.h>
int main() {
    int i, space, rows, k = 0;
    int n = 1 ;
   printf("Enter the number of rows: ");
   scanf_s("%d", &rows);
   if (rows >= 0) {
       for (i = 1; i <= rows; ++i, k = 0) {
           for (space = 1; space <= rows - i; ++space) {
               printf("  ");
           }

           while (k != 2 * i - 1) {

               printf("%d ", n);
               ++n;
               if (n > 9) {
                   n = 1;
               }
               ++k;
           }
           printf("\n");
       }
   }
   else printf("Error");
   return 0;
}
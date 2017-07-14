#include <time.h>
#include <stdio.h>
#include <stdlib.h>
void sort(long *array)
{
   int i = 0;
   char sorted;

   do {
      sorted = 1;
      for (i = 0; i < 31; i++) {
         long *item_one = &array[i];
         long *item_two = &array[i + 1];
         long swap_store;

         if (*item_one <= *item_two) {
            continue;
         }

         sorted = 0;
         swap_store = *item_two;
         *item_two = *item_one;
         *item_one = swap_store;
      }
   } while (!sorted);
}

int main()
{
   long array[32];
   int i = 0;
   srand(time(0));
   for (i = 0; i < rand() % sizeof array; i++) {
      array[i] = rand();
   }
   return 0;
}

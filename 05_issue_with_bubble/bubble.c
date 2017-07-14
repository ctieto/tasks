#include <stdio.h>
#include <stdlib.h>

void sort(unsigned int* array, int const size) {
   char changed = 1;
   while (changed) {
      changed = 0;
      for (unsigned int index = 0; index < (size - 1); index++) {
         if (array[index] > array[index + 1]) {
            unsigned int temp = array[index];
            array[index] = array[index + 1];
            array[index + 1] = temp;
            changed = 1;
         }
      }
   }
}

void create_array_and_sort(int const size)
{
   unsigned int the_array[size];
   for (int index = 0; index < sizeof(the_array); index++) {
      the_array[index] = rand() * rand();
   }
   sort(the_array, size);
}

int main(int argc, const char* argv[]) {
   create_array_and_sort(10);
   return 0;
}

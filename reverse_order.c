#include <stdio.h>

void fill_with_data(int * array, int size) {
   for(int index = 0; index < size; index++)
      array[index] = 10 * index;
}

void reverse(int * array, int size) {
   int left = 0;
   int right = (size - 1);
   for (; left < (size / 2); left++, right--) {
      int temp = array[left];
      array[left] = array[right];
      array[right] = temp;
   }
}

void print(int * array, int size) {
   for(int index = 0; index < size; index++)
      printf("%d ", array[index]);
}

int main(int argc, const char* argv[]) {
   int const size = 10;
   int array[size];
   fill_with_data(array, size);
   print(array, size);
   printf("\n");
   reverse(array, size);
   print(array, size);
   return 0;
}

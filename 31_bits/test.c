#include "count_set_bits.h"
#include "invert_bits.h"
#include "rotate.h"
#include "convert_to_str.h"

#include <assert.h>
#include <string.h>

int main(int argc, const char* argv[]) {
   unsigned int const size = 256;
   char str[size];

   assert(count_set_bits(0xF) == 4);
   assert(count_set_bits(0xFF) == 8);
   assert(count_set_bits(0xF0F0F0F0F0F) == 24);

   assert(invert_bits(0xF) == 0xF000000000000000);
   assert(invert_bits(0xF000000000000000) == 0xF);
   assert(invert_bits(0x8000000000000000) == 0x1);
   assert(invert_bits(0xFFFFFFFF) == 0xFFFFFFFF00000000);

   assert(rotate(LEFT, 4, 0xF) == 0xF0);
   assert(rotate(RIGHT, 4, 0xF) == 0xF000000000000000);
   assert(rotate(RIGHT, 32, 0xFFFFFFFF) == 0xFFFFFFFF00000000);
   assert(rotate(LEFT, 32, 0x1) == 0x8000000000000000);

   assert(convert_to_str(0xF, str, size) == 0);
   assert(0 == strcmp(str, "0000000000000000000000000000000000000000000000000000000000001111"));
   assert(convert_to_str(0xFFFFFFFFFFFFFFFF, str, size) == 0);
   assert(0 == strcmp(str, "1111111111111111111111111111111111111111111111111111111111111111"));
   assert(convert_to_str(0x8000000000000001, str, size) == 0);
   assert(0 == strcmp(str, "1000000000000000000000000000000000000000000000000000000000000001"));

   return 0;
}

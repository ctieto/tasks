#include <stdio.h>
#include <assert.h>

#define sqrt(x) (x * x)

#define sum(x, y) (x) + (y)

#define ptrace(sts, str) \
   if (sts) printf("%s\n", str)

int main(int argc, char** argv) {
   int const three = 3;
   int value;

   value = sqrt(three);
   assert(9 == value);
   value = sqrt(three + 3);
   assert(36 == value);

   value = sum(three, three);
   assert(6 == value);
   value = 2 * sum(three, three);
   assert(12 == value);

   value = 1;
   assert(1 == argc);
   assert(1 == value);
   if (argc > 1)
      ptrace(value, "argv > 1");
   else
      ptrace(value, "argv == 1");
}

#include "gen_num.h"

#define START_POSSITION 2
#define SUCCESS 0
#define FAILURE 1

#define CALC_RET_VAL(value) \
   (((value) > START_POSSITION) ? SUCCESS : FAILURE)

int main(int argc, const char *argv[])
{
   int value;

   gen_num_seed = START_POSSITION;

   value = gen_num();

   return CALC_RET_VAL(value);
}

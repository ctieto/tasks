int gen_num_seed = 0x2;

static int internal_counter = 0; 

int gen_num()
{
   internal_counter++;
   return (gen_num_seed + internal_counter);
}

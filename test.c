#include "types.h"
#include "user.h"

int stdout = 1;
int stderr = 2;

int
main(int argc, char *argv[])
{

  printf(stdout, "%d\n", virt2real("10000000"));

  exit();
}
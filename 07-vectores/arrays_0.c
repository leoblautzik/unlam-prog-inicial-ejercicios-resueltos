#include <stdio.h>

int main() {
  int i;
  int vectorcito[5] = {0};

  vectorcito[0] = 30;
  vectorcito[1] = -3;
  vectorcito[2] = 13;
  vectorcito[3] = -1;
  vectorcito[4] = -10;

  for (i = 0; i < 5; i++)
    printf("vectorcito[%d]=%d\n", i, vectorcito[i]);

  return 0;
}

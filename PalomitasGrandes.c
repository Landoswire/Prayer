#include <stdio.h>

int main()
{
  int pmpg, mad;
  printf("Dame el numero de mes en el que se compraron Palomitas Grandes: [1-4]");
  scanf_s("%d", &pmpg);
  printf("Dame el numero de mes que deseas determinar que se compra: [1-12]");
  scanf_s("%d", &mad);

  while (mad <= pmpg)
  {
    mad = mad + 4; //Cada 4 meses sucede exactamente lo mismo
  }
  if (((mad - pmpg) % 4) == 0)
  {
    printf("Palomitas Grandes\n");
  }
  else if (((mad - pmpg) % 4) == 2)
  {
    printf("Palomitas Medianas\n");
  }
  else
  {
    printf("Nada\n");
  }

}

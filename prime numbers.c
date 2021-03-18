#include <stdio.h>
#include <math.h>

#define MAX_ITEMS 40

void asals(int *asal_array, int *n) {
  //Kullanıcıdan numarayı çekeriz
  int max;
  printf("Kaca kadar asal sayi aramak istiyorsunuz?\n");
  scanf("%d",&max);

  int i = 0;
  while(i < max){
    //i nin asal olup olmadýðýna bakarýz
    int j = 2;
    int sqrtnum = sqrt(i + 1);
    int valid = 1;
    while (j <= sqrtnum && valid){
      if ((i + 1) % j == 0){
        valid = 0;
      }
      j++;
    }
    //Eðer i asalsa diziye ekleriz
    if (valid == 1){
      asal_array[*n] = i + 1;
      *n+=1;
    }
    i++;
  }
}

int main(void) {
  int asal_array[MAX_ITEMS];
  int n = 0;
  asals(asal_array, &n);
  for (int i = 0; i < n; i++) printf("%d\t",asal_array[i]);
  return 0;
}

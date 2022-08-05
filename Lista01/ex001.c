#include <stdio.h>

int primo(int valor1){
  int mult = 0;
  int i = 2;
  for(i; i<valor1; i++){
    if (valor1 % i == 0){
      mult++;
    }
  }
  if(mult == 0){
    return 1;
  } else{
    return 0;
  }
}

int main(){
  int num = 10;
  int resultado = primo(num);
  printf("%d\n", resultado);
}
  
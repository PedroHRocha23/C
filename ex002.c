int primo(int valor){
  int mult = 0;
  int i = 2;
  for(i; i < valor; i++){
    if(valor % i == 0){
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
  int n1 = 6;
  int n2 = 20;

  for(n1;n1<=n2;n1++){
      if (primo(n1) == 1){
        printf("O número %d é primo\n", n1);
      } else{
        printf("O número %d não é primo\n", n1);
      }
  }
  
}
#include <stdio.h>

// Função que ira subtituir todas as letras 'a' por 'b'
char substitution(char *str){
  while(*str != '\0'){
    if(*str == 'a'){
      *str = 'b';
    }
    str++;
  }
  
}

// Função Principal 
int main() {
  char str[100];
  
  printf("Digite algo: ");
  fgets(str, 100, stdin);
  substitution(str);
  printf("\n\nString modificada: %s", str);
  
  return 0;
}


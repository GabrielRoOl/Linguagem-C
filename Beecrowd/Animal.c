#include <stdio.h>
#include <stdlib.h>

int main(){
  char primeira_palavra[20], segunda_palavra[20], terceira_palavra[20];

  scanf("%s %s %s", primeira_palavra, segunda_palavra, terceira_palavra);

  if(strcmp(primeira_palavra, "vertebrado") == 0){
    if(strcmp(segunda_palavra, "ave") == 0){
      if(strcmp(terceira_palavra, "carnivoro") == 0){
        printf("aguia\n");
      } else if(strcmp(terceira_palavra, "onivoro") == 0){
        printf("pomba\n");
      } 
    } else if(strcmp(segunda_palavra, "mamifero") == 0){
      if(strcmp(terceira_palavra, "onivoro") == 0){
        printf("homem\n");
      } else if(strcmp(terceira_palavra, "herbivoro") == 0)
        printf("vaca\n");
    }
  } 
  
  else if(strcmp(primeira_palavra, "invertebrado") == 0){
    if(strcmp(segunda_palavra, "inseto") == 0){
      if(strcmp(terceira_palavra, "hematofago") == 0){
        printf("pulga\n");
      } else if(strcmp(terceira_palavra, "herbivoro") == 0){
        printf("lagarta\n");
      }       
    } else if(strcmp(segunda_palavra, "anelideo") == 0){
      if(strcmp(terceira_palavra, "hematofago") == 0){
        printf("sanguessuga\n");
      } else if(strcmp(terceira_palavra, "onivoro") == 0){
        printf("minhoca\n");
      }
    }
  }
  return 0;
}

#include <stdio.h>

int main(){
  int placar_gremio, placar_inter, novo;
  int gremio = 0, inter = 0, empate = 0, grenais = 1;
  do{
    scanf("%d %d", &placar_inter, &placar_gremio);
    if(placar_inter == placar_gremio)
      empate++;
    if(placar_inter > placar_gremio)
      inter++;
    if(placar_inter < placar_gremio)
      gremio++;
    printf("Novo grenal (1-sim 2-nao)\n");
    scanf("%d", &novo);
    if(novo == 2)
      break;  
    grenais++;
  }while(1);
  printf("%d grenais\n", grenais);
  printf("Inter:%d\n", inter);
  printf("Gremio:%d\n", gremio);
  printf("Empates:%d\n", empate);
  if(inter < gremio)
    printf("Gremio venceu mais\n");
  else if(inter > gremio)
    printf("Inter venceu mais\n");
  else
    printf("Não houve vencedor\n");
  return 0;  
}

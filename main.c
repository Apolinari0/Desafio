#include "my_structure.h"

int main(void) {
  FILE *arq;



  estrutura list;
  estrutura2 lista;
  char str[80];
  int x;




 // printf("entre com o nome do arquivo:\n");
  //scanf("%s",str);

  arq=fopen("arquivo.txt","r");
  if(arq==NULL){ printf("erro com a leitura do arquivo, verifique se digitou o nome do arquivo corretamente...\n");
  exit(1);}
  printf("scaneando numeros:\n");;
  while(!feof(arq)){
    fscanf(arq,"%d",&x);
    printf("%i\n",x);
    if(checkList(&list,x)==0)
        insere(&list,x);
    else
        insertRep(&lista,x);
  }
  fclose(arq);
  imprime(&list);
  imprime2(&lista);

  printf("\nCodigo executado com sucesso!\n");
  return 0;

}

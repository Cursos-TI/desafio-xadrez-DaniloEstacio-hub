#include <stdio.h>



int main() {
   
    int bispo=0; 
//Bispo: 5 casas na diagonal superior direita
 while(bispo < 5)
 {
printf("Bispo Superior direita \n");

bispo++;
 }

 printf("\n");

//Torre: 5 casas para a direita
int torre=0;
do

{
    printf("Torre a direita\n");

    torre++;
} while (torre < 5);

printf("\n");

//Rainha: 8 casas para a esquerda

for(int rainha=0; rainha < 8; rainha++)

{
    printf("Rainha a esquerda\n");

}

printf("\n");
 
  // movimento cavalo 
  for(int i=1;i <=1; i++){

int j=1;    
   while (j<=2)

   {
    printf("Cavalo cima\n");
    j++;
   }
   
printf("Cavalo Direita\n");
  }

   






    return 0;
}

#include <stdio.h>

 void bispo(int b){
if (b>0)
   {
       printf(" Bispo superior Direita. \n");

    bispo(b-1);
   }
}
//Torre a direita
void torre(int t){
if (t>0)
   {
       printf(" Torre a direita. \n");

    bispo(t-1);
   }
}

// rainha
void rainha(int r){
if (r>0)
   {
       printf(" Rainha a direita. \n");

    rainha(r-1);
   }
}


int main() {
  
bispo (5);
 
 printf("\n");

torre (5);

printf("\n");

rainha(5);

printf("\n");
 
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

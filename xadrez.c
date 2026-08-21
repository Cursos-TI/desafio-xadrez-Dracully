#include <stdio.h>

int main () {
// mover a torre 5 casas para a direita - for
for (int i = 0; i < 5; i++ ) {
    printf("direita\n"); // imprime a direção do movimento
}

// mover o bispo - do - while
int i = 0;
do{
        printf("diagonal esquerda\n");
        i++;        
    
    } while (i <=4);
// mover o rainha while
    i = 0;
    while (i<=5)
    {
        printf("Frente\n", i);
        i++;

    }

  
    return 0;
}


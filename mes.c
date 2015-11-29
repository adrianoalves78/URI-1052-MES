#include <stdio.h>
 
int main()
 
{
 
    int x; //comando para descrever as variaveis
 
    scanf("%d", &x); //comando para armazenar a variavel
 
    switch (x){ //comando para puxar o que esta no scanf
 
    case 1: printf("January\n");
 
    break; //comando para parar a ação, pois se ele não estiver no codigo, a proxima linha sera executada
 
    case 2: printf("February\n");
 
    break;
 
    case 3: printf("March\n");
 
    break;
 
    case 4: printf("April\n");
 
    break;
 
    case 5: printf("May\n");
 
    break;
 
    case 6: printf("June\n");
 
    break;
 
    case 7: printf("July\n");
 
    break;
 
    case 8: printf("August\n");
 
    break;
 
    case 9: printf("September\n");
 
    break;
 
    case 10: printf("October\n");
 
    break;
 
    case 11: printf("November\n");
 
    break;
 
    case 12: printf("December\n");
 
    break;
 
 
 
    }
 
return 0;
 
}

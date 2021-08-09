#include <stdio.h>

int main()
{
    float num[10];
    float nummax;
    int cont=0;

    printf("\n\tCalcula que numero es mas grande\n");

    for( int i = 0; i < 10; i++){
        printf("\nIngresa el munero %d : ",i+1);
        scanf("%f", &num[i]);}
        num[0]=nummax;
    for( int i = 0; i < 10; i++){
        if(num[i]>nummax || nummax==num[i]){nummax=num[i];cont=cont+1;
        }

    }

    printf("\n");
printf("el numero mayor es %.f \n" ,nummax);
printf("el numero se repite %.i",cont);

return 0;

}

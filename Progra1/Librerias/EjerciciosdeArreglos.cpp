#include <stdio.h>

int main() {

int calificaciones[4],promedio;


for(int x=0;x<4;x++){
printf("Dame el valor numero %d \n",x+1);
scanf("%d",&calificaciones[x]);
}

for(int x=0;x<4;x++){
    promedio+=calificaciones[x];
}
promedio/=4;
printf("%d",promedio);

return 0;

}

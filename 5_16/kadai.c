#include<stdio.h>
float chohokei(float tate,float yoko);

int main(void){
   float s = chohokei(6.0,4.0);
   printf("%f\n",s);
    return 0;
}
float chohokei(float tate,float yoko){
float s;
s=tate*yoko;
return s;
}
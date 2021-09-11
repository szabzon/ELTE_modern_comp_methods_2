//Ez az amit ki tudtam hozni, sajnos nincs semmi áttörés, csak tömören írtam le a kódot. Interneten is kerestem, nem találtam nagyon rövidebb algoritmust, pedig biztos van.
#include <stdio.h>
#include <stdlib.h>
int main(){int x=6,i;for(i=x-1;i>1;i--){x=x*i;}if(x==0){x=1;}printf("%d",x);return 0;}

#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
int ano, anobissexto, mesfevereirobissexto, i, len;
char mes[15];

scanf("%s",mes);
scanf("%d",&ano);

for(i = 0, len = strlen(mes); i < len; i++) {
  mes[i] = toupper(mes[i]);
}

if (ano % 4==0 ) {
anobissexto = 366;
mesfevereirobissexto = 29;
}

else {
anobissexto = 365;
mesfevereirobissexto = 28;
}

if (strcmp(mes,"JANEIRO") == 0){
printf("DIAS = 31\n");
printf("DIAS NO ANO = %d\n",anobissexto);
}

else if (strcmp(mes,"FEVEREIRO") == 0){
printf("DIAS = %d\n",mesfevereirobissexto);
printf("DIAS NO ANO = %d\n",anobissexto);
}

else if (strcmp(mes,"MARCO") == 0){
printf("DIAS = 31\n");
printf("DIAS NO ANO = %d\n",anobissexto);
}

else if (strcmp(mes,"ABRIL") == 0){
printf("DIAS = 30\n");
printf("DIAS NO ANO = %d\n",anobissexto);
}

else if (strcmp(mes,"MAIO") == 0){
printf("DIAS = 31\n");
printf("DIAS NO ANO = %d\n",anobissexto);
}

else if (strcmp(mes,"JUNHO") == 0){
printf("DIAS = 30\n");
printf("DIAS NO ANO = %d\n",anobissexto);
}

else if (strcmp(mes,"JULHO") == 0){
printf("DIAS = 31\n");
printf("DIAS NO ANO = %d\n",anobissexto);
}

else if (strcmp(mes,"AGOSTO") == 0){
printf("DIAS = 31\n");
printf("DIAS NO ANO = %d\n",anobissexto);
}

else if (strcmp(mes,"SETEMBRO") == 0){
printf("DIAS = 30\n");
printf("DIAS NO ANO = %d\n",anobissexto);
}

else if (strcmp(mes,"OUTUBRO") == 0){
printf("DIAS = 31\n");
printf("DIAS NO ANO = %d\n",anobissexto);
}
else if (strcmp(mes,"NOVEMBRO") == 0){
printf("DIAS = 30\n");
printf("DIAS NO ANO = %d\n",anobissexto);
}
else if (strcmp(mes,"DEZEMBRO") == 0){
printf("DIAS = 31\n");
printf("DIAS NO ANO = %d\n",anobissexto);
}
return 0;

}
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int wynik = 0,i,liczbaa,liczbab;
  char rzymska[24],zawartosc[24],rzymskaa[24];
  for(i=0;i<24;i++){
                    rzymska[i]=0;
                    rzymskaa[i]=0;
                    zawartosc[i]=0;

                    }
    printf("Podaj liczby, ktore chcesz dodac.\n");
  while(scanf("%s %s",&rzymska,&rzymskaa)!=EOF){
  wynik=0;
  for(i = 0; i <= 24; i++){zawartosc[i]=rzymska[i];}
  for(i = 0; i <= 24; i++){
    if(zawartosc[i] == 'I' && zawartosc[i+1] == 'V'){
        wynik+=4;
        i++;
    }
    else if(zawartosc[i] == 'I' && zawartosc[i+1] == 'X'){
        wynik+=9;
        i++;
    }
    else if(zawartosc[i] == 'X' && zawartosc[i+1] == 'L'){
        wynik+=40;
        i++;
    }
    else if(zawartosc[i] == 'X' && zawartosc[i+1] == 'C'){
        wynik+=90;
        i++;
    }
    else if(zawartosc[i] == 'C' && zawartosc[i+1] == 'D'){
        wynik+=400;
        i++;
    }
    else if(zawartosc[i] == 'C' && zawartosc[i+1] == 'M'){
        wynik+=900;
        i++;
    }
    else if(zawartosc[i] == 'I'){wynik++;}
    else if(zawartosc[i] == 'V'){wynik+=5;}
    else if(zawartosc[i] == 'X'){wynik+=10;}
    else if(zawartosc[i] == 'L'){wynik+=50;}
    else if(zawartosc[i] == 'C'){wynik+=100;}
    else if(zawartosc[i] == 'D'){wynik+=500;}
    else if(zawartosc[i] == 'M'){wynik+=1000;}
    else if(!(zawartosc[i])){break;}
    liczbaa=wynik;
  }
  wynik=0;
  for(i = 0; i <= 24; i++){zawartosc[i]=rzymskaa[i];}
  for(i = 0; i <= 24; i++){
    if(zawartosc[i] == 'I' && zawartosc[i+1] == 'V'){
        wynik+=4;
        i++;
        }
    else if(zawartosc[i] == 'I' && zawartosc[i+1] == 'X'){
        wynik+=9;
        i++;
        }
    else if(zawartosc[i] == 'X' && zawartosc[i+1] == 'L'){
        wynik+=40;
        i++;
        }
    else if(zawartosc[i] == 'X' && zawartosc[i+1] == 'C'){
        wynik+=90;
        i++;
        }
    else if(zawartosc[i] == 'C' && zawartosc[i+1] == 'D'){
        wynik+=400;
        i++;
        }
    else if(zawartosc[i] == 'C' && zawartosc[i+1] == 'M'){
        wynik+=900;
        i++;
        }
    else if(zawartosc[i] == 'I'){wynik++;}
    else if(zawartosc[i] == 'V'){wynik+=5;}
    else if(zawartosc[i] == 'X'){wynik+=10;}
    else if(zawartosc[i] == 'L'){wynik+=50;}
    else if(zawartosc[i] == 'C'){wynik+=100;}
    else if(zawartosc[i] == 'D'){wynik+=500;}
    else if(zawartosc[i] == 'M'){wynik+=1000;}
    else if(!(zawartosc[i])){break;}
    liczbab=wynik;
  }
    wynik=liczbaa+liczbab;
    //printf("%i\n",wynik);
    for(i=0;i<24;i++){
                      rzymska[i]=0;
                      rzymskaa[i]=0;
                      zawartosc[i]=0;
                      }
    i=0;
    while(wynik > 0){

                   if(wynik>=1000){
                                  wynik=wynik-1000;
                                  rzymska[i]='M';
                                  i++;
                                  }

                   else if(wynik>=900){
                        wynik=wynik-900;
                        rzymska[i]='C';
                        i++;
                        rzymska[i]='M';
                        i++;
                        }

                   else if(wynik>=500){
                                 wynik=wynik-500;
                                 rzymska[i]='D';
                                 i++;
                                 }

                   else if(wynik>=400){
                        wynik=wynik-400;
                        rzymska[i]='C';
                        i++;
                        rzymska[i]='D';
                        i++;
                        }

                   else if(wynik>=100){
                                 wynik=wynik-100;
                                 rzymska[i]='C';
                                 i++;
                                 }
                  else if(wynik>=90){
                       wynik=wynik-90;
                       rzymska[i]='X';
                       i++;
                       rzymska[i]='C';
                       i++;
                       }

                   else if(wynik>=50){
                                wynik=wynik-50;
                                rzymska[i]='L';
                                i++;
                                }

                   else if(wynik>=40){
                        wynik=wynik-40;
                        rzymska[i]='X';
                        i++;
                        rzymska[i]='L';
                        i++;
                        }

                   else if(wynik>=10){
                                wynik=wynik-10;
                                rzymska[i]='X';
                                i++;
                                }

                  else if(wynik>=9){
                       wynik=wynik-9;
                       rzymska[i]='I';
                       i++;
                       rzymska[i]='X';
                       i++;
                       }

                   else if(wynik>=5){
                               wynik=wynik-5;
                               rzymska[i]='V';
                               i++;
                               }

                   else if(wynik>=4){
                        wynik=wynik-4;
                        rzymska[i]='I';
                        i++;
                        rzymska[i]='V';
                        i++;
                        }

                   else if(wynik>=1){
                               wynik--;
                               rzymska[i]='I';
                               i++;
                               }

                  }

  for(i=0;rzymska[i]!=0;i++){
                             printf("%c",rzymska[i]);
                             }
  printf("\n");

}
  system("PAUSE");
  return 0;
}

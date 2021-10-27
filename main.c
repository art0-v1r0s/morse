// gcc -Wall -O2 -Wextra -fanalyzer -g main.c -o morseF
//by Art0v1r0s
//read sentence by scanf and convert in morse alpha
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#define MAX 1000

int main(int argc,char *argv[])
{
  char *alphamorse[] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---",
                        "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-",
                        "...-", ".--", "-..-", "-.--", "--.."};
  char *nummorse[] = {"-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----."};

  time_t t = time(NULL); /* t contient maintenant la date et l'heure courante */

  int i = 0;

  if(argc != 2){
    printf("usage ./morse your sentence in \" ");
    return EXIT_FAILURE;
  }
  char str[MAX];
  strcpy(str,argv[1]);

  printf("Welcome in your morse convertissor :\n");
  printf("your sentence :\n%s\n",str);

  while (str[i] != '\0')
  {
    if (str[i] != ' ' && (!isdigit(str[i])))
    {
      printf("%s ", alphamorse[toupper(str[i]) - 65]);
    }
    if (str[i] == ' ')
    {
      printf(" ");
    }
    if (isdigit(str[i]) && str[i] != ' ')
    {
      printf("%s ", nummorse[str[i] - 48]);
    }

    i++;
  }
  printf("\n");

  printf("%s\n", ctime(&t));
  return EXIT_SUCCESS;
}

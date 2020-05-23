#include "header.h"

int main(int nb, char **str)
{
    int x = 0, y = 0, i = 0;

    printf("Quelle est la taille du carre :\n");
    scanf("%d" ,&x);

    char *first_line  = malloc(sizeof(char) * (x + 1 + (x - 1)));

    for (; i < (x + (x -1)); i++)
    {
        
         if (i % 2 == 0)
             first_line[i] = '*';
         else	
             first_line[i] = ' ';
    }

    first_line[i] = '\0';
      for (i = 0; i < 1; i++){
          printf ("%s\n", first_line);
      }
  return (0);   
}


#include "header.h"

int main(int nb, char **str)
{
    int x = 0, y = 0, i = 0;

    printf("Quelle est la taille du carre :\n");
    scanf("%d" ,&x);

    char *carre  = malloc(sizeof(char) * (x + 1 + (x - 1)));
    char *first_line  = malloc(sizeof(char) * (x + 1 + (x - 1)));

    int count = 0;

    for (; i < (x + (x -1)); i++)
    {

        if (i % 2 == 0)
             first_line[i] = '*';
         else	
             first_line[i] = ' ';
             
        
        if (i == 0 || i == (x + (x -1)) -1  )
            carre[i] = '*';

        

        else
            carre[i] = ' ';


    }
    carre[i] = '\0';

      for (i = 0; i < x; i++){
        if (i == (x-1)  || i == 0)
          printf ("%s\n", first_line);
        else
          printf ("%s\n", carre);
      }

  return (0);   
}


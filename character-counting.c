#include <stdio.h>
/* count characters in input; 1st version */
main()
{
 long nc;
 nc=0;
 while(getchar()!=EOF)
  ++nc;
 printf("%d\n", nc);
}

/*limitation this will count space as character tho we need to solve see C-C-mod.c*/

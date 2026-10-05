#include <stdio.h>
main()
{
  int c;
  int blanks=0;
  int tabs=0;
  int newlines=0;

  printf("Enter text (press Ctrl+D on Linux/mac or ctrl+Z on windows to finish\n");

  while ((c=getchar())!=EOF){
    if (c=='')
      ++blanks;
  } else if (c=='\t'){
    ++tabs;
  } else if (c=='\n'){
    ++newlines;
  }
}
 printf("\n--- Result ---\n");
 printf("Blanks: %d\n", blanks);
 printf("Tabs: %d\n", tabs);
 printf("Newlines: %d\n", newlines);

return 0;
}

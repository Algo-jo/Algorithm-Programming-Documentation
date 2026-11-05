#include <stdio.h>
int main(){

  char sentence[101];

  scanf("%[^\n]", &sentence); 

  printf("#include <stdio.h>\n");
  printf("int main()\n");
  printf("{\n");
  printf("\tprintf(\"%%s\", \"%s\");\n", sentence);
  printf("\treturn 0;\n");
  printf("}\n");
  
    return 0;
}
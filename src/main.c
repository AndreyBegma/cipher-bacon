#include <stdio.h>
#include "my_strlen.c"
#include "cipher_transform.c"

int main(int argc, char *argv[])
{
  for (int i=1;i<argc;i++)
  {
    char* str = argv[i];
    int count_str = my_strln(argv[i]);
    printf("%d\n",count_str);
    transform_str(str,count_str);
  }
}

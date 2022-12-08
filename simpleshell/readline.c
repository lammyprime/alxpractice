#include <stdio.h>
#include <stdlib.h>

int main()
{
  char *buffer;
  size_t bufsize = 1024;
 

  buffer = malloc(bufsize);
  if( buffer == NULL)
    {
      perror("Unable to allocate buffer");
      exit(1);
    }

  printf("$ ");
  getline(&buffer,&bufsize,stdin);
  printf("%s\n",buffer);

  return(0);
}

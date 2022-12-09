#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
  char *buffer;
  size_t bufsize = 1024;
  char *token;
  buffer = (char *)malloc(bufsize);
  if( buffer == NULL)
    {
      perror("Unable to allocate buffer");
      exit(1);
    }

  printf("$ ");
  getline(&buffer, &bufsize, stdin);
  printf("buffer getline: %s", buffer);
  
   token = strtok(buffer, " ");
  // loop through the string to extract all other tokens
  while( token != NULL ) {
    printf( " %s\n", token ); //printing each token
    token = strtok(NULL, " ");
  }
  return 0;
}

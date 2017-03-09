#include <cstdio>

int main(int argc, char** argv)
{
  printf("Licznik argumentów wynosi %i\n", argc);
  for(int i=0 ; i<argc ; i++)
  {
    char* argument = argv[i];
    printf("[%i] %s\n", i, argument);
  }
}

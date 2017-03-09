#pragma GCC diagnostic ignored "-Wformat"
#include <cstdio>

int main(int argc, char** argv)
{
  int variable = 646;
  int* pointer = &variable;
  int& reference = variable;

  printf("(a) %x | %i\n", variable, variable);
  printf("(b) %x | %i\n", &variable, &variable);
  printf("(c) %x | %i\n", pointer, pointer);
  printf("(d) %x | %i\n", *pointer, *pointer);
  printf("(e) %x | %i\n", &pointer, &pointer);
  printf("(f) %x | %i\n", reference, reference);
  printf("(g) %x | %i\n", &reference, &reference);
}

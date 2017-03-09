#pragma GCC diagnostic ignored "-Wformat"
#include <cstdio>

int main(int argc, char** argv)
{
  int table[6];
  for(int i = 0 ; i < 6 ; i++) table[i] = i * 10;

  int* pointerA = table;
  int* pointerB = &table[2];
}

# Laboratorium 1

> `Hello, World!`, kompilacja z poziomu wiersza poleceń, funkcje, wskaźniki, referencje i flagi formatujące.

## 1. `Hello, World!`

    #include <cstdio>

    int main(int argc, char** argv)
    {
      printf("Hello, World!\n");
    }

## 2. Kompilacja z poziomu wiersza poleceń

Kompilacja.

    g++ main1.cpp -o main1

Uruchomienie

    ./main1

## 3. Argumenty wiersza poleceń

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


## 4. Wskaźniki i referencje

## 5. Tablice dynamiczne

## 6. Flagi i łańcuchy formatujące

# Laboratorium 1

> `Hello, World!`, kompilacja z poziomu wiersza poleceń, funkcje, wskaźniki, referencje i flagi formatujące.

## 1. `Hello, World!`


```c++
#include <cstdio>

int main(int argc, char** argv)
{
  printf("Hello, World!\n");
}
```

## 2. Kompilacja z poziomu wiersza poleceń

Kompilacja.

```
g++ -std=c++0x main1.cpp -o main1
```  

Uruchomienie

```
./main1
```

## 3. Argumenty wiersza poleceń

```c++
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
```


## 4. Wskaźniki i referencje

```c++
int variable = 646;
int* pointer = &variable;
int& reference = variable;
```

Wyjaśnij, jakie wartości pojawiają się na ekranie. Co dokładnie oznaczają?
```c++
printf("(a) %x | %i\n", variable, variable);
printf("(b) %x | %i\n", &variable, &variable);
printf("(c) %x | %i\n", pointer, pointer);
printf("(d) %x | %i\n", *pointer, *pointer);
printf("(e) %x | %i\n", &pointer, &pointer);
printf("(f) %x | %i\n", reference, reference);
printf("(g) %x | %i\n", &reference, &reference);
```

## 5. Tablice dynamiczne

## 6. Flagi i łańcuchy formatujące

- [http://www.cplusplus.com/reference/cstdio/printf/](http://www.cplusplus.com/reference/cstdio/printf/)

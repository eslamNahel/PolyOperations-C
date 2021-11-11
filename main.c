#include <stdio.h>
#include <stdlib.h>


typedef struct Element
{
    int coefficient;
    int exponent;
} Element;


typedef struct Term
{
    Element element;
    struct Term *next;
} Term, *TermPointer;


typedef TermPointer Poly;


int main()
{

    return 0;
}
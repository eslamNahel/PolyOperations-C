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

void addElementToPoly(Poly poly, int coef, int exp);

int main()
{

    return 0;
}


void addElementToPoly(Poly poly, int coef, int exp)
{
    TermPointer newTerm;
    newTerm = (TermPointer)malloc(sizeof(struct Term));

    if (newTerm)
    {
        newTerm->element.coefficient = coef;
        newTerm->element.exponent = exp;
        newTerm->next = poly->next;
        poly->next = newTerm;
        poly = newTerm;
    }
}
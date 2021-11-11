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
Poly createNewPoly();

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
        TermPointer last;
        last = poly;
        while (last->next)
        {
            last = last->next;
        }
        newTerm->next = last->next;
        last->next = newTerm;
    }
}


Poly createNewPoly()
{
    Poly newPoly;
    newPoly = (Poly)malloc(sizeof(struct Term));

    int size, coef, exp;
    printf("Please enter the size of your poly: ");
    scanf("%d", &size);

    TermPointer polyHead;
    if (newPoly)
    {
        newPoly->next = NULL;
        polyHead = newPoly;

        for (int i = 0; i < size; i++)
        {
            printf("Enter the coefficent and exponent of element %d: ", i+1);
            scanf("%d %d", &coef, &exp);
            addElementToPoly(polyHead, coef, exp);
        }
    }
    return newPoly;
}



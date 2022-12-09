#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int coeff;
    int pow;
    class Node *next;
};

void create_node(int x, int y, class Node **temp)
{
    class Node *r, *z;
    z = *temp;

    if (z == NULL)
    {
        r = new class Node;
        r->coeff = x;
        r->pow = y;
        *temp = r;
        r->next = new class Node;
        r = r->next;
        r->next = NULL;
    }
    else
    {
        r->coeff = x;
        r->pow = y;
        r->next = new class Node;
        r = r->next;
        r->next = NULL;
    }
}

void polynomialAdd(class Node *poly1, class Node *poly2, class Node *poly) {

    while (poly1->next && poly2->next) {

        if (poly1->pow > poly2->pow)
        {
            poly->pow = poly1->pow;
            poly->coeff = poly1->coeff;
            poly1 = poly1->next;
        }
        else if (poly1->pow < poly2->pow)
        {
            poly->pow = poly2->pow;
            poly->coeff = poly2->coeff;
            poly2 = poly2->next;
        }
        else
        {
            poly->pow = poly1->pow;
            poly->coeff = (poly1->coeff + poly2->coeff);
            poly1 = poly1->next;
            poly2 = poly2->next;
        }
        poly->next = new class Node;
        poly = poly->next;
        poly->next = NULL;
    }
    while (poly1->next || poly2->next)
    {
        if (poly1->next)
        {
            poly->pow = poly1->pow;
            poly->coeff = poly1->coeff;
            poly1 = poly1->next;
        }
        if (poly2->next)
        {
            poly->pow = poly2->pow;
            poly->coeff = poly2->coeff;
            poly2 = poly2->next;
        }
        poly->next =
            new class Node;
        poly = poly->next;
        poly->next = NULL;
    }
}

void show(class Node *node) {

    while (node->next != NULL)
    {
        printf("%dx^%d", node->coeff, node->pow);
        node = node->next;
        if (node->coeff >= 0) {
            if (node->next != NULL)
                printf("+");
        }
    }
}

int main() {

    class Node *poly1 = NULL, *poly2 = NULL, *poly = NULL;
    int x, y;
    cout<<"Enter the number of elements in first polynomial: ";
    cin>>x;
    cout<<"Enter the number of elements in second polynomial: ";
    cin>>y;
    
    for(int i=0; i<x; i++){
        int a,b;
        cout<<"Enter the value of "<< i+1 <<" Variable and its exponent: ";
        cin>>a>>b;
        create_node(a ,b ,&poly1);
    } 
    
    for(int i=0; i<y; i++){
        int a,b;
        cout<<"Enter the value of "<< i+1 <<" Variable and its exponent: ";
        cin>>a>>b;
        create_node(a ,b ,&poly2);
    }

    printf("1st Polynomial: ");
    show(poly1);
    cout<<endl;

    printf("2nd Polynomial: ");
    show(poly2);
    cout<<endl;

    poly = new class Node;

    polynomialAdd(poly1, poly2, poly);

    printf("Added polynomial: ");
    show(poly);

    return 0;
}
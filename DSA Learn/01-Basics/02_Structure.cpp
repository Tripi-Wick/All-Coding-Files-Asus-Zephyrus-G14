#include <iostream>
using namespace std;

typedef struct Parameter{
    int x;
    int y;
} Par;

struct Area{
    int x;
    int y;
};

int main()
{
    struct Area A1; // ---------> If we dont use typedef we have to write this way

    Parameter p1;
    p1.x = 1;
    p1.y = 2;
    cout<<p1.x<<endl;
    cout<<p1.y<<endl;
    

    return 0;
}

// Dynamic Structure 
// Par *dynamic;
// dynamic = (struct Parameter*)malloc(sizeof(struct Parameter));   // {We gotta typecast it as malloc return void pointer}
// dynamic = new Par;
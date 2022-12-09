// Confusing way to find greatest num //created by me
#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{
    int n = a;
    if (n > b)
    {
        if (n > c)
        {
            if (n > d)
            {
                return n;
            }
        }
        else
        {
            n = c;
            if (n > d)
            {
                return n;
            }
            else
            {
                n = d;
                return n;
            }
        }
    }
    else
    {
        n = b;
        if (n > c)
        {
            if (n > d)
            {
                return n;
            }
        }
        else
        {
            n = c;
            if (n > d)
            {
                return n;
            }
            else
            {
                n = d;
                return n;
            }
        }
    }
}

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
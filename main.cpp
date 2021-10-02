#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
double e()
{
    double e = 1.0;
    while(1.0+e>1.0)
    {
        e/=1.1;
    }
    return e;
}

double x()
{
    double x = 1.0;
    while(1.0+x != x)
    {
        x*=1.1;
    }
    return x;
}

double y()
{
    double y = 1.0;
    while(pow(10.0, 20) + y != y)
    {
        y*=1.1;
    }
    return y;
}

int main()
{
	printf("%e\n", e());
	printf("%e\n", x());
	printf("%e\n", y());
}



#include <iostream>
#include <iomanip>
using namespace std;

void getinput (int &, int &);
void getinput (float &, float &);

void swapTwoValues (int &, int &);
void swapTwoValues (float &, float &);


void getinput (int &n1, int &n2)
{
    cin >> n1 >> n2;
}

void swapTwoValues (int &n1, int &n2)
{
    int tmp;
    tmp = n1;
    n1 = n2;
    n2 = tmp;
}

void getinput (float &n1, float &n2)
{
    cin >> n1 >> n2;
}

void swapTwoValues (float &n1, float &n2)
{
    float tmp;
    tmp = n1;
    n1 = n2;
    n2 = tmp;
}
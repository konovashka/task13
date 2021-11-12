// Частотный анализатор

#include <iostream>
using namespace std;
int main()
{
    int a[10] = { 0 };
    int x,ost;
    scanf_s("%d", &x);
    while (x>0)
    {
        ost = x % 10;
        a[ost] += 1;
        x /= 10;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d %d\n", i, a[i]);
    }
}

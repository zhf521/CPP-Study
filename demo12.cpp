#include <iostream>

using namespace std;

int main()
{
    int i = 8;
    cout << "i=" << i << ",i的地址=" << &i << endl;
    int *pi = &i;
    cout << "pi=" << pi << ",pi的地址=" << &pi << ",*pi=" << *pi << endl;
    int **ppi = &pi;
    cout << "ppi=" << ppi << ",ppi的地址=" << &ppi << ",*ppi=" << *ppi << endl;
    cout << "**ppi=" << **ppi << endl;
    system("pause");
}
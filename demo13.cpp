#include <iostream>

using namespace std;

void func(int **pp)
{
    *pp = new int(3);
    cout << "pp=" << pp << ",*pp=" << *pp << endl;
}

int main()
{
    int *p = 0;
    func(&p);
    cout << "p=" << p << ",*p=" << *p << endl;
    system("pause");
}
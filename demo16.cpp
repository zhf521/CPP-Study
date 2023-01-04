#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int ID[] = {3, 6, 1, 7, 4, 3, 5, 6, 7, 8, 666, 2, 3, 9};
    string name[3];
    for (int i = 0; i < sizeof(ID) / sizeof(int); i++)
    {
        cout << "ID[" << i << "]=" << ID[i] << endl;
    }

    int ID1[sizeof(ID) / sizeof(int)];
    memcpy(ID1, ID, sizeof(ID));
    cout << "复制数组ID到数组ID1:\n";
    for (int i = 0; i < sizeof(ID1) / sizeof(int); i++)
    {
        cout << "ID1[" << i << "]=" << ID1[i] << endl;
    }
    memset(ID1, 0, sizeof(ID1));
    cout << "清空数组ID1:\n";
    for (int i = 0; i < sizeof(ID1) / sizeof(int); i++)
    {
        cout << "ID1[" << i << "]=" << ID1[i] << endl;
    }
    system("pause");
}
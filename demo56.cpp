#include <iostream>
using namespace std;

void show(string str)
{
    cout << "普通函数:" << str << endl;
}

class CBoy
{
public:
    void operator()(string str)
    {
        cout << "重载函数:" << str << endl;
    }
};
int main()
{
    show("我爱你！");
    CBoy boy;
    boy("我爱你！");
    system("pause");
}
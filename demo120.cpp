#include <iostream>
#include <deque>
using namespace std;
// deque数据存取
void test()
{
    deque<int> d;
    d.push_back(10);
    d.push_back(20);
    d.push_back(30);
    d.push_front(100);
    d.push_front(200);
    d.push_front(300);
    // 通过[]访问
    for (int i = 0; i < d.size(); i++)
    {
        cout << d[i] << " ";
    }
    cout << endl;
    // 通过at访问
    for (int i = 0; i < d.size(); i++)
    {
        cout << d.at(i) << " ";
    }
    cout << endl;
    cout << "第一个元素:" << d.front() << endl;
    cout << "最后一个元素:" << d.back() << endl;
}
int main()
{
    test();
    system("pause");
    return 0;
}
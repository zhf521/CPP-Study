#include <iostream>
using namespace std;

class CBoy // CBoy类
{
private:
    string m_friends[3]; // CBoy的朋友们
public:
    string m_name; // 姓名
    CBoy()
    {
        m_friends[0] = "李四";
        m_friends[1] = "王五";
        m_friends[2] = "赵六";
    }
    void show()
    {
        cout << m_friends[0] << "、" << m_friends[1] << "、" << m_friends[2] << endl;
    }
    string &operator[](int i)
    {
        return m_friends[i];
    }
    const string &operator[](int i) const
    {
        return m_friends[i];
    }
};

int main()
{
    CBoy boy1; // 创建CBoy对象boy1
    boy1[1] = "张三";
    cout << "第一个好朋友是：" << boy1[1] << endl;
    boy1.show();
    const CBoy boy2 = boy1;
    cout << "第一个好朋友是：" << boy2[1] << endl;
    system("pause");
}
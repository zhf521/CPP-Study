#include <iostream>
using namespace std;

inline void func(int ID, string message);

inline void func(int ID, string message)
{
    cout << "亲爱的:" << ID << "号," << message << endl;
}
int main()
{
    func(3, "I Love You!");
    // 相当于
    /*{
        int ID = 3;
        string message = "I Love You!";
        cout << "亲爱的:" << ID << "号," << message << endl;
    }*/
    func(5, "I Love You!");
    // 相当于
    /*{
        int ID = 5;
        string message = "I Love You!";
        cout << "亲爱的:" << ID << "号," << message << endl;
    }*/
    func(8, "I Love You!");
    // 相当于
    /*{
        int ID = 8;
        string message = "I Love You!";
        cout << "亲爱的:" << ID << "号," << message << endl;
    }*/
    system("pause");
}

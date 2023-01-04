#include <iostream>

using namespace std;

void SendMessage(int *number, string *str)
{
    cout << "亲爱的" << *number << "号:" << *str << endl;
    *number = 6;
    *str = "I Really Love You!";
    cout << "亲爱的" << *number << "号:" << *str << endl;
}

int main()
{
    int ID = 16;
    string message = "I Love You!";
    SendMessage(&ID, &message);
    system("pause");
}
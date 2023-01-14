#include <iostream>

using namespace std;

struct st_boy // 单链表
{
    int ID;              // 编号
    string name;         // 姓名
    struct st_boy *next; // 下一个男孩节点的地址，如果本节点是最后一个，填nullptr
};

int main()
{
    st_boy *head = nullptr;
    st_boy *tail = nullptr;
    st_boy *tmp = nullptr;
    tmp = new st_boy({1, "张三", nullptr}); // 分配第一个节点
    head = tail = tmp;
    tmp = new st_boy({6, "李四", nullptr}); // 分配第二个节点
    tail->next = tmp;                       // 把上一个节点的next指针指向新结点
    tail = tmp;                             // 移动尾指针，让尾指针指向刚分配出来的新节点
    tmp = new st_boy({3, "王五", nullptr}); // 分配第三个节点
    tail->next = tmp;                       // 把上一个节点的next指针指向新结点
    tail = tmp;                             // 移动尾指针，让尾指针指向刚分配出来的新节点
    tmp = head;                             // 从头节点开始
    while (tmp != nullptr)
    {
        cout << "ID=" << tmp->ID << "name=" << tmp->name << "tmp->next=" << tmp->next << endl;
        tmp = tmp->next; // 顺着next指向往后找
    }
    while (head != nullptr)
    {
        tmp = head;        // 让临时节点指向头节点
        head = head->next; // 头节点后移
        delete tmp;        // 删除临时节点
    }
    system("pause");
}
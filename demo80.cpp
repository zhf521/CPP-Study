#include <iostream>
using namespace std;

// 抽象不同零件类
// 抽象CPU类
class CPU
{
public:
    // 抽象的计算函数
    virtual void calculate() = 0;
};
// 抽象显卡类
class VideoCard
{
public:
    // 抽象的显示函数
    virtual void display() = 0;
};
// 抽象内存条类
class Memory
{
public:
    // 抽象的存储函数
    virtual void storage() = 0;
};
// 电脑类
class Computer
{
public:
    Computer(CPU *cpu, VideoCard *vc, Memory *mem)
    {
        m_cpu = cpu;
        m_vc = vc;
        m_mem = mem;
    }
    // 提供工作的函数
    void work()
    {
        // 让零件工作起来，调用接口
        m_cpu->calculate();
        m_vc->display();
        m_mem->storage();
    }
    // 提供析构函数，释放3个电脑零件
    ~Computer()
    {
        // 释放CPU零件
        if (m_cpu != nullptr)
        {
            delete m_cpu;
            m_cpu = nullptr;
        }
        // 释放显卡零件
        if (m_vc != nullptr)
        {
            delete m_vc;
            m_vc = nullptr;
        }
        // 释放内存条零件
        if (m_mem != nullptr)
        {
            delete m_mem;
            m_mem = nullptr;
        }
    }

private:
    CPU *m_cpu;      // CPU的零件指针
    VideoCard *m_vc; // 显卡的零件指针
    Memory *m_mem;   // 内存条的零件指针
};
// 具体厂商
// intel厂商
class IntelCPU : public CPU
{
public:
    virtual void calculate()
    {
        cout << "Intel的CPU开始计算啦" << endl;
    }
};
class IntelVideoCard : public VideoCard
{
public:
    virtual void display()
    {
        cout << "Intel的显卡开始显示啦" << endl;
    }
};
class IntelMemory : public Memory
{
public:
    virtual void storage()
    {
        cout << "Intel的内存条开始存储啦" << endl;
    }
};
// AMD
class AmdCPU : public CPU
{
public:
    virtual void calculate()
    {
        cout << "Amd的CPU开始计算啦" << endl;
    }
};
class AmdVideoCard : public VideoCard
{
public:
    virtual void display()
    {
        cout << "Amd的显卡开始显示啦" << endl;
    }
};
class AmdMemory : public Memory
{
public:
    virtual void storage()
    {
        cout << "Amd的内存条开始存储啦" << endl;
    }
};

void test01()
{
    // 第一台电脑零件
    CPU *intelCPU = new IntelCPU;
    VideoCard *intelVideoCard = new IntelVideoCard;
    Memory *intelMemory = new IntelMemory;
    // 创建第一台电脑
    Computer *computer1 = new Computer(intelCPU, intelVideoCard, intelMemory);
    computer1->work();
    delete computer1;
    // 创建第二台电脑
    Computer *computer2 = new Computer(new AmdCPU, new AmdVideoCard, new AmdMemory);
    computer2->work();
    delete computer2;
}

int main()
{
    test01();
    system("pause");
    return 0;
}
#include <iostream>
#define MAXSIZE 20
using namespace std;
typedef int ElemType;
class sqList
{
private:
    /* data */
    ElemType data[MAXSIZE] = {};
    int length = 0;

public:
    sqList(/* args */);
    ~sqList();
    bool ListInsert(int i, int e);

    void PrintList();

    bool ListDelete(int i);
    void ListDeleteiTok(int i, int k);
};

sqList::sqList(/* args */)
{
}

sqList::~sqList()
{
}

bool sqList::ListInsert(int i, int e)
{
    {

        if (this->length == MAXSIZE)
            return 0;
        if (i < 1 || i > this->length + 1)
            return 0;
        if (i <= this->length)
        {
            for (int k = this->length - 1; k >= i - 1; k--)
                this->data[k + 1] = this->data[k];
        }
        this->data[i - 1] = e;
        this->length++;
        cout << "在" << i << "前添加元素，数值为" << e << endl;
        return 1;
    }
}
void sqList::PrintList()
{
    cout << "输出顺序表：" << endl;
    for (int i = 0; i < this->length; i++)
    {
        if (i == this->length - 1)
            cout << this->data[i] << endl;
        else
            cout << this->data[i] << " ";
    }
}
bool sqList::ListDelete(int i)
{

    if (this->length == 0 || i < 1 || i > this->length)
        return 0;
    // *e = this->data[i-1];
    if (i < this->length)
    {
        for (int k = i - 1; k < this->length; k++)
        {
            this->data[k] = this->data[k + 1];
        }
    }

    this->length--;
    cout << "删除第" << i << "个元素" << endl;
    return 1;
}

void sqList::ListDeleteiTok(int i, int k)
{
    for (int j = 0; j < k; j++)
    {
        this->ListDelete(i);
    }
}
int main()
{
    sqList *l = new sqList();
    for (int i = 0; i < 10; i++)
    {
        l->ListInsert(i, i);
    }
    l->PrintList();
    l->ListDeleteiTok(3, 3);
    l->PrintList();

    delete l;

    return 0;
}
#include <iostream>
using namespace std;
class Stack
{
private:
    enum {MAX = 10};
    int st[MAX];
    int top;
public:
    Stack()
    {
        top = 0;
    }
    void push(int var)
    {
        st[++top] = var;
    }
    int pop()
    {
        return st[top--];
    }
};
int main()
{
    Stack s1;
    s1.push(11);
    s1.push(22);
    s1.push(44);
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop();
    return 0;
}

#include <iostream>
using namespace std;

class Stack
{
    // private:
    int Array[10];
    int top;
    int size;

public:
    // default constructor
    Stack();
    // functions
    void push(int);
    int pop();
    int peek();
    bool isFull();
    bool isEmpty();
    void display();
};
// implementatioon for memeber functions
// default constructor
Stack ::Stack()
{
    top = -1;
    size = 10;
}
// functions
void Stack ::push(int v)
{
    if (isFull())
    {
        cout << "Stack Overflow!" << endl;
    }

    // stack is empty
    else
    {
        top++;
        Array[top] = v;
    }
}
int Stack ::pop()
{
    int v;
    v = Array[top];
    top--;
    return v;
}
bool Stack ::isFull()
{
    if (top == (size - 1))
    {
        return true;
    }
    return false;
}
bool Stack ::isEmpty()
{
    if (top == -1)
    {
        return true;
    }
    return false;
}
int Stack::peek()
{
    int v = Array[top];
    return v;
}
void Stack ::display()
{
    if (!isEmpty())
    {
        cout << "\nStack: ";
        for (int i = top; i > -1; i--)
        {
            cout << Array[i] << " ";
        }
    }

    // isEmpty
    else
    {
        cout << "Stack is Empty!" << endl;
    }
}
int main()
{
    Stack s1;

    s1.push(10);
    s1.push(20);
    s1.push(30);

    s1.display();
    s1.pop();
    s1.display();
    return 0;
}
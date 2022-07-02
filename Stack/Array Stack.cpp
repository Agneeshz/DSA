#include <bits/stdc++.h>
using namespace std;

struct MyStack
{
    int *arr;
    int cap;
    int top;
    MyStack(int c)
    {
        cap = c;
        arr = new int[cap];
        top == -1;
    }
    void push(int x)
    {
        if (top == cap - 1)
        {
            cout << "Stack Overflow";
            return;
        }
        top++;
        arr[top] = x;
    }
    int pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow";
            return INT_MAX;
        }
        int res = arr[top];
        top--;
        return res;
    }
    int peek()
    {
        if (top == -1)
        {
            cout << "Stack Underflow";
            return INT_MAX;
        }
        return arr[top];
    }
    int size() { return (top + 1); }
    bool isEmpty() { return (top == -1); }
};

int main()
{

    return 0;
}
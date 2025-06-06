#include <bits/stdc++.h>
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define ll long long
#define yes "YES\n"
#define no "NO\n"
using namespace std;
void inputOutput()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
class Stack
{
public:
    int *arr;
    int size;
    int top;
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int value)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = value;
        }
        else
        {
            cout << "Stack Overflow\n";
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack Underflow\n";
        }
    }
    int peak()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "Stack is empty\n";
            return -1;
            
        }
    }
    void isEmpty(){
        if(top == -1){
            cout<<"Stack is empty";
        }
        else cout<<"Stack is not empty";
    }
};
int main()
{
    // inputOutput();
    Stack s(5);
    s.push(10);
    s.push(15);
    s.push(12);
    cout<<s.peak()<<endl;
    s.pop();
    cout<<s.peak()<<endl;
    s.pop();
    cout<<s.peak()<<endl;
    s.pop();
    cout<<s.peak()<<endl;
    s.isEmpty();
    return 0;
}

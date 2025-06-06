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
class Node
{
public:
    int data;
    Node *Next;
    Node(int data)
    {
        this->data = data;
        this->Next = nullptr;
    }
};
class Stack
{
public:
    Node *top;
    Stack()
    {
        top = nullptr;
    }
    void push(int data)
    {
        Node *New_Node = new Node(data);
        New_Node->Next = top;
        top = New_Node;
    }
    void pop()
    {
        if (top == NULL)
        {
            cout << "Stack is empty\n";
            return;
        }
        else
        {
            Node *temp = top;
            top = top->Next;
            delete temp;
        }
    }
    void peek()
    {
        if (top == nullptr)
        {
            cout << "Stack is empty\n";
        }
        else
        {
            cout << "Top -> " << top->data << endl;
        }
    }
    void isEmpty()
    {
        if (top == nullptr)
        {
            cout << "Stack is empty \n";
        }
        else
        {
            cout << "Stack is not empty\n";
        }
    }
};
int main()
{
    // inputOutput();
    Stack s;
    s.push(10);
    s.push(20);
    s.peek();
    return 0;
}

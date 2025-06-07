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
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};
class Queue
{
public:
    Node *front;
    Node *back;
    int cnt;
    Queue()
    {
        front = nullptr;
        back = nullptr;
        cnt = 0;
    }
    void push(int value)
    {
        Node *New_Node = new Node(value);
        if (front == nullptr)
        {
            front = New_Node;
            back = New_Node;
        }
        else
        {
            back->next = New_Node;
            back = New_Node;
        }
        cnt++;
    }
    void pop()
    {
        if (front == nullptr)
        {
            cout << "Queue is empty\n";
            return;
        }
        Node *temp = front;
        front = front->next;
        if (front == nullptr)
        {
            back = nullptr;
        }
        delete temp;
        cnt--;
    }
    int frontval()
    {
        if (front == nullptr)
        {
            cout << "Queue is empty\n";
            return -1;
        }
        else
            return front->data;
    }
    int backval()
    {
        if (front == nullptr)
        {
            return -1;
        }
        else
        {
            return back->data;
        }
    }
    bool isEmpty()
    {
        return front == nullptr;
    }
    int size()
    {
        if (front == nullptr)
        {
            return 0;
        }
        else
        {
            return cnt;
        }
    }
};
int main()
{
    inputOutput();
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    cout << "size " << q.size() << endl;
    cout << q.frontval() << endl;
    q.pop();
    cout << "size " << q.size() << endl;

    cout << q.frontval() << endl;
    q.pop();
    q.pop();
    cout << "size " << q.size() << endl;
    q.pop();
    cout << "size " << q.size() << endl;

    cout << q.frontval() << endl;
    if (q.isEmpty())
    {
        cout << "Queue is empty\n";
    }
    else
    {
        cout << "Queue is not empty\n";
    }
    cout << q.backval();
    return 0;
}

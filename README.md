
# 🚀 Stack and Queue Implementation in C++ using Linked List

This repository provides clean and efficient implementations of the **Stack** and **Queue** data structures using singly linked lists in C++. The stack supports operations like `push`, `pop`, `peek`, and `isEmpty`, while the queue supports `push`, `pop`, `frontval`, `backval`, `isEmpty`, and `size`. Both implementations use dynamic memory for flexibility and have no fixed size limits.

---

## 📌 Features

### Stack
- ✅ Stack implemented using linked list (dynamic memory, no size limit)
- ✅ `push()` – Insert an element at the top
- ✅ `pop()` – Remove the top element
- ✅ `peek()` – View the top element
- ✅ `isEmpty()` – Check if the stack is empty

### Queue
- ✅ Queue implemented using linked list (dynamic memory, no size limit)
- ✅ `push()` – Insert an element at the back
- ✅ `pop()` – Remove the front element
- ✅ `frontval()` – View the front element
- ✅ `backval()` – View the back element
- ✅ `isEmpty()` – Check if the queue is empty
- ✅ `size()` – Get the number of elements in the queue

---

## 📂 Code Structure

### Stack Implementation

#### Node Class (Stack)
- Represents a node in the linked list used for the stack.
- Contains:
  - `int data`: Value stored in the node.
  - `Node* Next`: Pointer to the next node in the stack.

#### Stack Class
- Manages the stack operations using a singly linked list.
- Contains:
  - `Node* top`: Pointer to the top element of the stack.
- Methods:
  - `push(int data)`: Inserts a new element at the top of the stack. Time complexity: O(1).
  - `pop()`: Removes the top element from the stack. Time complexity: O(1).
  - `peek()`: Displays the top element without removing it. Time complexity: O(1).
  - `isEmpty()`: Checks if the stack is empty and prints a message. Time complexity: O(1).

### Queue Implementation

#### Node Class (Queue)
- Represents a node in the linked list used for the queue.
- Contains:
  - `int data`: Value stored in the node.
  - `Node* next`: Pointer to the next node in the queue.

#### Queue Class
- Manages the queue operations using a singly linked list.
- Contains:
  - `Node* front`: Pointer to the front element of the queue.
  - `Node* back`: Pointer to the back element of the queue.
  - `int cnt`: Tracks the number of elements in the queue.
- Methods:
  - `push(int value)`: Inserts a new element at the back of the queue. Time complexity: O(1).
  - `pop()`: Removes the front element from the queue and prints "Queue is empty" if empty. Time complexity: O(1).
  - `frontval()`: Returns the front element’s value, or -1 if empty (with a message). Time complexity: O(1).
  - `backval()`: Returns the back element’s value, or -1 if empty. Time complexity: O(1).
  - `isEmpty()`: Returns `true` if the queue is empty, `false` otherwise. Time complexity: O(1).
  - `size()`: Returns the number of elements in the queue. Time complexity: O(1).

---

## 💻 Example Output

### Stack Example
```cpp
s.push(10);
s.push(20);
s.peek();
s.pop();
s.peek();
```
```
Top -> 20
Top -> 10
```

### Queue Example
```cpp
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
cout << q.frontval() << endl;
if (q.isEmpty()) cout << "Queue is empty\n";
cout << q.backval();
```
```
size 3
10
size 2
20
size 0
Queue is empty
Queue is empty
-1
Queue is empty
-1
```

---


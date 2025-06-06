# 🚀 Stack Implementation in C++ using Linked List

This repository provides a clean and efficient implementation of the **Stack** data structure using a singly linked list in C++. It supports basic stack operations such as `push`, `pop`, `peek`, and checking if the stack is empty.

---

## 📌 Features

- ✅ Stack implemented using linked list (dynamic memory, no size limit)
- ✅ `push()` – Insert an element at the top
- ✅ `pop()` – Remove the top element
- ✅ `peek()` – View the top element
- ✅ `isEmpty()` – Check if the stack is empty

---

### 📂 Code Structure

#### Node Class
- Represents a node in the linked list used for stack.
- Contains:
  - `int data`: Value stored in the node.
  - `Node* Next`: Pointer to the next node in the stack.

#### Stack Class
- Manages the stack operations using a singly linked list.
- Contains:
  - `Node* top`: Pointer to the top element of the stack.
- Methods:
  - `push(int data)`: Inserts a new element at the top of the stack.
  - `pop()`: Removes the top element from the stack.
  - `peek()`: Displays the top element without removing it.
  - `isEmpty()`: Checks if the stack is empty and prints a message.


## 💻 Example Output

```cpp
s.push(10);
s.push(20);
s.peek();
s.pop();
s.peak();
```
```
Top -> 20
Top -> 10
```




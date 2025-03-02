/*#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Stack
{
private:
    T* stackArray;
    int stackSize;
    int numElements;

public:
    Stack(int);
    ~Stack();

    void push(T);
    T pop();
    bool isFull() const;
    bool isEmpty() const;
    void display() const;
};

template <typename T >
Stack<T>::Stack(int Size)
{
    stackArray =new T[Size];
    stackSize = Size;
    numElements = 0;
}

template <typename T>
Stack<T>::~Stack()
{
    delete[] stackArray;
}

template <typename T>
void Stack<T>::push(T num)
{
    if (isFull())
        cout << "The stack is full.\n";
    else
    {
        stackArray[numElements] = num;
        numElements++;
    }
}

template <typename T>
T Stack<T>::pop()
{
    if (!isEmpty())
    {
        numElements--;
        return stackArray[numElements];
    }
    cout << "The stack is empty.\n";
    return T(); 
}

template <typename T>
bool Stack<T>::isFull() const
{
    return numElements == stackSize;
}

template <typename T>
bool Stack<T>::isEmpty() const
{
    return numElements == 0;
}

template <typename T>
void Stack< T>::display() const
{
    if (isEmpty())
        cout << "The stack is empty.\n";
    else
    {
        for (int i = 0; i < numElements; i++)
            cout << stackArray[i] << "\t";
        cout << endl;
    }
}

int main()
{
    
    Stack<int> intStack(5);
    intStack.push(5);
    intStack.push(10);
    intStack.push(15);
    intStack.push(20);
    intStack.push(25);
    intStack.display();

    
    Stack<string> stringStack(3);
    stringStack.push("Hello");
    stringStack.push("World");
    stringStack.push("!");
    stringStack.display();

    cout << "Popping from intStack...\n";
    while (!intStack.isEmpty())
    {
        cout << intStack.pop() << endl;
    }

    cout << "Popping from stringStack...\n";
    while (!stringStack.isEmpty())
    {
        cout << stringStack.pop() << endl;
    }

    return 0;
}*/

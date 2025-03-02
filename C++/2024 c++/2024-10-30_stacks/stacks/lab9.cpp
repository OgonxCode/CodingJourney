#include <iostream>
#include <string>
using namespace std;
class IntStack
{
private:
    int* stackArray;
    int stackSize;
    int numElements;
public:
    IntStack(int);
    ~IntStack();

    void push(int);
    int pop();
    bool isFull() const;
    bool isEmpty() const;
    void display() const; 
    IntStack operator=(const IntStack& other);

    IntStack(const IntStack& other) {
        stackArray = other.stackArray;
        stackSize = other.stackSize;
        numElements = other.numElements;
        stackArray = new int[stackSize];
        for (int i = 0; i < other.numElements; i++) {
            stackArray[i] = other.stackArray[i];
        }
        cout << "Stack copied\n";


    }
};



IntStack::IntStack(int Size)
{
    stackArray = new int[Size];
    stackSize = Size;
    numElements = 0;
}
IntStack::~IntStack()
{
    delete[] stackArray;
}
void IntStack::push(int num)
{
    if (isFull())
        cout << "The stack is full.\n";
    else
    {
        stackArray[numElements] = num;
        numElements++;
    }
}
int IntStack::pop()
{
    numElements--;
    return stackArray[numElements];
}
bool IntStack::isFull() const
{
    return numElements == stackSize;
}
bool IntStack::isEmpty() const
{
    return numElements == 0;
}
void IntStack::display() const
{
    if (isEmpty())
        cout << "The stack is empty.\n";
    else
        for (int i = 0; i < numElements; i++)
            cout << stackArray[i] << "\t";
    cout << endl;
}

IntStack IntStack::operator=(const IntStack& other)
{
    cout << "wohoo\n";
    if (this != &other)
    {
        delete[] stackArray;
        stackSize = other.stackSize;
        numElements = other.numElements;
        stackArray = new int[stackSize];
        for (int i = 0; i < numElements; i++)
        {

            stackArray[i] = other.stackArray[i];
        }
    }
    return *this;

}




int main()
{
    IntStack Stack1(6); // Define a stack with 6 numbers 

    Stack1.push(1);
    Stack1.push(2);
    Stack1.push(3);

    IntStack Stack2(6);

    Stack2 = Stack1;

    IntStack Stack3 = Stack1;

    Stack1.push(1);
    Stack1.push(2);
    Stack1.push(3);

    Stack2.push(1);
    Stack2.push(2);
    Stack2.push(3);

    Stack3.push(1);
    Stack3.push(2);
    Stack3.push(3);

    Stack1.display();
    Stack2.display();
    Stack3.display();

    return 0;
}


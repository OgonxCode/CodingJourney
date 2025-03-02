#include <iostream>
#include <string>
using namespace std;


template <typename T>


class Queue
{
private:

    T* queueArray;
    int queueSize;
    int front;
    int rear;
    int numElements;

public:

    Queue(int);
    ~Queue();


    void enqueue(T);
    T dequeue();
    bool isFull() const;
    bool isEmpty() const;
    void display() const;

};

template <typename T>
Queue<T>::Queue(int size)
{
    queueArray = new T[size];
    queueSize =size;
    front = 0;
    rear = -1;
    numElements = 0;
}



template<typename T>
Queue<T>::~Queue()
{
    delete[] queueArray;
}

template <typename T>
void Queue<T>::enqueue(T value)
{
    if (isFull())
        cout << "The queue is full.\n";
    else
    {
        rear = (rear+ 1) % queueSize; 
        queueArray[rear] = value;
        numElements++;
        
    }
}



template <typename T>
T Queue<T>::dequeue()
{
    if (isEmpty())
    {
        cout << "The queue is empty.\n";
        return T();

    }
    else
    {
        T value = queueArray[front];
        front = (front+1) % queueSize; 
        numElements--;
        return value;
    }
}

template <typename T>
bool Queue<T>::isFull() const
{
    return numElements == queueSize;

}


template <typename T>
bool Queue<T>::isEmpty() const
{
    return numElements == 0;
}


template <typename T>
void Queue<T>::display() const
{
    if (isEmpty())
        cout << "The queue is empty.\n";
    else
    {
        int current = front;
        for (int i = 0;i < numElements; i++)
        {
            cout << queueArray[current] << "\t";
            current = (current + 1) % queueSize;
            cout << "\n";

        }
        
    }
}

int main()
{


   
    Queue<int> intQueue(5);
    intQueue.enqueue(5);
    intQueue.enqueue(10);
    intQueue.enqueue(15);
    intQueue.enqueue(20);
    intQueue.enqueue(25);
    intQueue.display();

   
    Queue<string> stringQueue(3);
    stringQueue.enqueue("Hello");
    stringQueue.enqueue("World");
    stringQueue.enqueue("!");
    stringQueue.display();



    cout << "Dequeuing from intQueue...\n";
    while (!intQueue.isEmpty())
    {
        cout << intQueue.dequeue() << endl;

    }


    cout << "Dequeuing from stringQueue...\n";
    while (!stringQueue.isEmpty())
    {
        cout << stringQueue.dequeue() << endl;

    }

    return 0;
}

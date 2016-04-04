#include<iostream>
#include<list>
using namespace std;





class Queue

{
    list<int>mylist;

 public:
    void Push(int x)

    {

        mylist.push_back(x);
    }
    void Pop()
    {
        mylist.pop_front();
    }
    int Front()
    {
        cout<<mylist.front()<<endl;
    }

    int Back()
    {

        cout<< mylist.back()<<endl;

        }

};

int main()
{
    Queue q;
    q.Push(1);
     q.Push(2);
      q.Push(2);
       q.Push(4);
      q.Front();
    q.Pop();


    q.Pop();
    q.Front();

}



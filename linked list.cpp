#include<iostream>
#include<list>
using namespace std;

int main()
{
     int i;

        list<int>myList;

        list<int>::iterator itr1;

        list<int>::iterator itr2;
        for(i=0;i<=5;i++)
        {

            myList.push_back(i);
        }

         for(i=10;i<=14;i++)
        {

            myList.push_back(i);
        }

        for(itr1=myList.begin();itr1!=myList.end();itr1++)
        {

            if(*itr1==10)
            {
                break;
            }
        }
         for(i=6;i<=9;i++)
        {

            myList.insert(itr1,i);
        }
         for(itr1=myList.begin();itr1!=myList.end();itr1++)
        {

            if(*itr1==6)
            {
                break;
            }
        }
         for(itr2=myList.begin();itr2!=myList.end();itr2++)
        {

            if(*itr2==11)
            {
                break;
            }
        }
        itr2++;

        myList.erase(itr1,itr2);
         for(itr1=myList.begin();itr1!=myList.end();itr1++)
        {

            cout<<*itr1<<endl;
        }


}

/*************************************************************************
    > File Name: main.cpp
    > Author: mxl
    > Mail: xiaolongicx@gmail.com
    > Created Time: 2018-05-31 10:35
 ************************************************************************/
#include <typeinfo>
#include<iostream>

using namespace std;

template<typename T>
class MyPtr
{
public:
    explicit MyPtr(T * ptr)
        :_ptr(ptr)
    {
        cout << "construct" << endl;
    }

    T & operator * () const
    {
        return *_ptr;
    }

    T * operator -> () const
    {
        return _ptr;
    }

    operator bool()
    {
        cout << " bool () invocked" << endl;
        return _ptr;
    }
    
protected:
    T * _ptr;
};  //class MyPtr

class A
{
public:
    explicit A(int x) {}
};

int main(int argc, char ** argv)
{
    cout << "start main" << endl;

    //MyPtr<int> myptr();
    MyPtr<int> myptr2(nullptr);

    //A a;
    //A a1();
    //
    //int x();

    cout << typeid(myptr).name() << endl;

    if(myptr)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}


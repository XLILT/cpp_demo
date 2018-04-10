/*************************************************************************
    > File Name: main.cpp
    > Author: mxl
    > Mail: xiaolongicx@gmail.com
    > Created Time: Tue 10 Apr 2018 10:14:58 AM CST
 ************************************************************************/

#include <iostream>
#include <exception>

using namespace std;

class A
{
public:
    A() { cout << "A" << endl; }
    ~A() { cout << "~A" << endl; }
};

void f2()
{
    throw std::exception();       
}

void f1()
{
    try
    {
        A a;
        //throw std::exception();
        f2();

        cout << "try over" << endl;
    }
    catch(...)
    {}

    cout << "f1 over" << endl;
}

int main(int argc, char ** argv)
{
    f1();

    return 0;
}


/*************************************************************************
    > File Name: main.cpp
    > Author: mxl
    > Mail: xiaolongicx@gmail.com
    > Created Time: Tue 10 Apr 2018 10:14:58 AM CST
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct A
{
    A() { cout << "normal constructor" << endl; }
    A(const A &) { cout << "copy constructor" << endl; }
    //A(A &&) { cout << "move constructor" << endl; }
};

/*
const string get_string()
{    
    return std::move(std::string("this is a stirng"));
}
*/

const string get_string2()
{    
    return std::string("this is a stirng2");
}

const A get_a()
{
    return A();
}

/*
void move_const(const vector<int> & v)
{
    vector<int> v1 = std::move(v);

    v1.clear();
}

void move_no_const(vector<int> & v)
{
    vector<int> v1 = std::move(v);

    v1.clear();
}

void move_const(const A & v)
{
    A v1 = std::move(v);

    //v1.clear();
}

void move_no_const(A & v)
{
    A v1 = std::move(v);

    //v1.clear();
}
*/

int main(int argc, char ** argv)
{
    //cout << get_string() << endl;
    //cout << get_string2() << endl;

    //A a;
    //A a1 = a;
    //const A & a2 = std::move(a);
    //A a3 = std::move(a);
    
    // get_a();
    
    //const A a;
    //A a1 = std::move(a);

    //vector<int> v = { 1, 2};
    //cout << v.size() << endl;

    //move_const(v);
    //cout << v.size() << endl;

    //A a;
    //move_no_const(a);
    
    A a = get_a();

    return 0;
}


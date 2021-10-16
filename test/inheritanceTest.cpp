#include <iostream>

using namespace std;

class First
{
public:
    void first()
    {
        cout << "First()" << endl;
    }

    virtual void myFunc()
    {
        cout << "firstFunc()" << endl;
    }
};

class Second : public First
{
public:
    void second()
    {
        cout << "Second()" << endl;
    }

    virtual void myFunc()
    {
        cout << "secondFunc()" << endl;
    }
};

class Third : public Second
{
public:
    void third()
    {
        cout << "Third()" << endl;
    }

    virtual void myFunc()
    {
        cout << "thirdFunc()" << endl;
    }
};

int main()
{
    Third obj;
    Second &sref = obj;
    Second *sptr = &obj;
    sptr->myFunc();
    //sptr->third();
    // sref.third();
    sref.myFunc();
    return 0;
}
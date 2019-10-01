#include <iostream>

using namespace std;
class add
{
    int a;
    public:
    void get()
    {
        cin>>a

    }
    add add1(add o)
    {
        add sum;
        sum.a=a+o.a;
        return sum;
    }
    void display()
    {
        cout<<a;
    }
};
int main()
{
    add ob,ob1,ob2;
    ob.get();
    ob1.get();
    ob2=ob.add1(ob1);
    ob2.display();
    return 0;
}

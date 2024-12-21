#include <iostream>
using namespace std;
template<class T1>
class Test
{
T1 a;
public:
Test(T1 x)
{
a=x;
}
void show()
{
cout<<a<<"\n";
}
};
int main()
{
Test<float>test1(1.23F);
    Test<int>test2(100);
    Test<string>test3("hello");
    Test<char>test4('A');
    test1.show();
test2.show();
test3.show();
test4.show();
}
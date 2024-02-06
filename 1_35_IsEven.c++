#include <iostream>
using namespace std;
string IsEven(int a)
{
    bool num=false;
    if (a % 2 == 0)
    {

        num = true;
    }
    if (num == true)
    {
        string q = "It is Even";
        return q;
        /* code */
    }
    else
    {
        string w = "It is Odd";
        return w;
    }
}
int main()
{
    int a;
    cout << "Enter a : " << endl;
    cin >> a;
    string b = IsEven(a);
    cout << b;

    return 0;
}
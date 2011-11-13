// Mathmetics of figuring out weekly pay
#include <iostream>
using namespace std;
int main()
{
    int h1;
 cout << "Hours worked this week: ";
    cin >> h1;
    if(h1<=40)
    {
    cout << "Your pay will be $" << h1 * 10.75 <<", before taxes." <<endl;
	system("PAUSE");
    }
    if(h1>40)
    {
        cout << "Your pay will be $" << ((h1-40) * 16.125 + (40 * 10.75)) << ", before taxes." <<endl;
    system("PAUSE");
    }
    return 0;
}
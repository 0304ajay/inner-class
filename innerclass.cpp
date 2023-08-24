#include<iostream>
using namespace std;
class outer {
public:
	int a = 10;
	static int s;
	class inner
	{
		inner()
		{
			cout << "inner" << endl;
		}
	public:
		int s = 90;
	};
	outer()
	{
		
		cout << s << endl;
	}
};
int outer::s = 100;
int main()
{
	outer o
}
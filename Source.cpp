#include <iostream>

using namespace std;

int hello1Function(string name1);
int hello2Function(string name2);

int main()
{
	string name1 = "Seongu Lee";
	hello1Function(name1);
	string name2 = "Sam Lee";
	hello2Function(name2);

	return 0;
}
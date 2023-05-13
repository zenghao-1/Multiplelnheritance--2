#include <iostream>
#include <string>
using namespace std;

class Man
{
public:
	Man() { cout << "His a man.\n"; }
};

class Alex
{
public:
	Alex() { cout << "His is Alex.\n"; }
private:
	Man man;
};

int main()
{
	Alex a;
}
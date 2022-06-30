#include <iostream>
#include <string>

using namespace std;

static void compareWhoIsOlder(void);

int main()
{
    compareWhoIsOlder();
}

static void compareWhoIsOlder(void)
{
    int age1;
    int age2;
    cout << "Enter age of first person: ";
    cin >> age1;

    cout << "Enter age of second person :";
    cin >> age2;

    if(age1 > age2)
    {
        cout << "First person is older than second person\n";
    }
    else
    {
        cout << "Second person is older than first person\n";
    }

    if( (age1 > 100) && (age2 > 100))
    {
        cout << "Congrats, nice age";
    }
}
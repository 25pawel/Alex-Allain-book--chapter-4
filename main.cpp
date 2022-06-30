#include <iostream>
#include <string>

using namespace std;

static void compareWhoIsOlder(void);
static void verifyIntegerPassword(void);
static void launchCalculator(void);
static void logIntoSystem(void);

int main()
{
    // compareWhoIsOlder();
    // verifyIntegerPassword();
    // launchCalculator();
    logIntoSystem();
}

static void logIntoSystem(void)
{
    string name;
    string password;

    cout << "Enter name: ";
    cin >> name;

    cout << "Enter password: ";
    cin >> password;

    if((name == "admin1") && (password == "pass1"))
    {
        cout << name << " logged into system\n";
    }
    else if ((name == "admin2") && (password == "pass2"))
    {
        cout << name << " logged into system\n";
    }
    else if ((name == "admin3") && (password == "pass3"))
    {
        cout << name << " logged into system\n";
    }
    else
    {
        logIntoSystem();
    }
}

static void launchCalculator(void)
{
    char operation;
    int firstArgument;
    int secondArgument;

    cout << "Enter first argument: ";
    cin >> firstArgument;

    cout << "Enter second argument: ";
    cin >> secondArgument;

    cout << "Enter operation: ";
    cin >> operation;

    if(operation == '+')
    {
        cout << firstArgument << " + " << secondArgument << " = " << (firstArgument + secondArgument);
    }
    else if (operation == '-')
    {
        cout << firstArgument << " - " << secondArgument << " = " << (firstArgument - secondArgument);
    }
    else if (operation == '*')
    {
        cout << firstArgument << " * " << secondArgument << " = " << (firstArgument * secondArgument);
    }
    else if (operation == '/')
    {
        cout << firstArgument << " / " << secondArgument << " = " << (firstArgument / secondArgument);
    }
    else
    {
        cout << "Operation not recognized\n";
    }
}

static void verifyIntegerPassword(void)
{
    int firstPassword;
    int secondPassword;

    cout << "Enter first password: ";
    cin >> firstPassword;

    cout << "Enter second password: ";
    cin >> secondPassword;

    if((firstPassword == 0) || secondPassword == 1234)
    {
        cout << "Password correct";
    }
    else
    {
        cout << "Password incorrect";
    }
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
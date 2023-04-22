#include <iostream>

using namespace std;

bool isEven(int n) {
    if (n % 2 == 0) return true;
    else return false;
}
int main()
{
    if(isEven(2))
        cout << "Pass";
    else
        cout << "Fail" << endl << "Unsuccessful function";
    cout << endl;
    if(isEven(5))
        cout << "Pass"  << endl << "Unsuccessful function";
    else
        cout << "Fail";
    cout << endl;
    if(isEven(10))
        cout << "Pass";
    else
        cout << "Fail" << endl << "Unsuccessful function";
    cout << endl;
    cout << endl;
    cout << "If not unsuccessful then the function is successful. Note: The program would say 'Unsuccessful function' if any test passes or fails when it should not.";

    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int fact = 1;
    int FactFind;

    cout << "Enter finding factorial number:";
    cin >> FactFind;

    for(int i = 1; i <= FactFind; i++){
        fact *= i;
    }

    cout << "Factorial of " << FactFind << " is: " << fact << endl;
    return 0;
}

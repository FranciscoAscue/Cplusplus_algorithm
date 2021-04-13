// Script para fibonacci en C++
# include <iostream>
using namespace std;

int fibonacci(int number)
{
    if (number <= 1){
        return 1;
    }
    return fibonacci(number -1) + fibonacci (number -2);
}


int main()
{
    cout << "Finobancci de 10 es: " << fibonacci(12) << endl;
}
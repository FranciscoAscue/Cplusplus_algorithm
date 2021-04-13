// Programa para factorizaion en C++

# include <iostream>
using namespace std;

int factoriza(int number)
{
    if (number == 1) {
        return 1;
    }
    return number*factoriza(number -1);
}

int main()
{
    cout << "El fatorial de 12 es :" <<factoriza(12)<<endl;
}
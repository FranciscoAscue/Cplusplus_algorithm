# include <iostream>
# include <algorithm>
# include <string>

using namespace std;

int main()
{
    string myChain = "";
    
    cout << "Ingresar DNA: ";
    cin >> myChain;
    string::iterator begin = myChain.begin(), end = myChain.end();
    cout << "A : " << count(begin, end, 'A') 
    << " C : " << count(begin, end, 'C') 
    << " T : " << count(begin, end, 'T') 
    << " G : " << count(begin, end, 'G') << "\n";
    return 0;
}

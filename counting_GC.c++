#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using std::vector;        using std::string;
using std::cout;          using std::cin;
using std::endl;          using std::streamsize;
using std::setprecision;

struct fasta {
    string ID;
    string DNA;
};

int main() {
    string line;
    vector<fasta> strDNA;
    fasta temp;
    while(getline(cin, line)) {
        if (line[0] == '>')
        {
            if (!temp.DNA.empty())
            {
                strDNA.push_back(temp);
                temp.ID.erase();
                temp.DNA.erase();
            }
            temp.ID = line.erase(0, 1);
        } else {
            temp.DNA += line;
        }
    }
    strDNA.push_back(temp);

    string maxID;
    double max_freq = 0.0;
    for (vector::iterator i = strDNA.begin(); i != strDNA.end(); ++i) {
        string dna = i->DNA;

        int counter = 0;
        for (string::iterator s = dna.begin(); s != dna.end(); ++s) {
            if (*s == 'G' || *s == 'C')
                ++counter;
        }

        double freq = counter * 100.0 / dna.size();
        if (freq > max_freq) {
            max_freq = freq;
            maxID = i->ID;
        }
    }

    streamsize prec = cout.precision();
    cout << maxID << endl << setprecision(6)
         << max_freq << setprecision(prec) << endl;
    return 0;
}
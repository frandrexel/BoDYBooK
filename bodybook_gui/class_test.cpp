
#include <iostream>
#include <string>
using namespace std;

class Organism
{
public:
    int num;
    string name;
    string dna;
};

int main()
{
    Organism org;
    org.name = "bob";
    org.dna = "actg";
    org.num = 4;

    cout << org.name << " has " << org.dna << " dna!" << endl;

    return 0;
}

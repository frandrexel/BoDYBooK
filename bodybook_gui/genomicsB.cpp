#include <iostream>
#include <string>

using namespace std;


class Being {
    public:
    string makeup;
    void fingerprint();
};

class Genes {
    char adenosine = 'A';
    char thyamine = 'T';
    char guanine = 'G';
    char cytosine = 'C';
};

class Cells {

};

class Tissue {

};

void Being::fingerprint() {
    float id = makeup.length();
    for (int i = 0; i < id; i++)
    {
         cout << i;
    }
}
int main()
{
  Being frog;
  Being human;
  Being user_input1;

  frog.makeup = "agct";
  human.makeup = "aaggc";

  cout << "human dna makeup: " << human.makeup << endl;;
  cout << "frog dna makeup: " << frog.makeup << endl;
  cout << "human fingerprint " << endl;
  human.fingerprint();
  cout << endl;
  cout << "frog fingerprint " << endl;
  frog.fingerprint();
  cout << endl;
  cout << "Please now enter a dna sequence you are interested in having fingerprinted below (a,c,t,g values accepted only): " << endl;
  cin >> user_input1.makeup;
  cout << endl;

  return 0;
}

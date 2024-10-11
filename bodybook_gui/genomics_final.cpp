#include <iostream>
#include <string>
using namespace std;


class Being {
    public:
    string makeup;
    void fingerprint();
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

  frog.makeup = "agct";
  human.makeup = "aaggc";

  cout << "human dna makeup: " << human.makeup << endl;;
  cout << "frog dna makeup: " << frog.makeup << endl;
  cout << "human fingerprint " << endl;
  human.fingerprint();
  cout << endl;
  cout << "frog fingerprint " << endl;
  frog.fingerprint();

  return 0;
}

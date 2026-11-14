#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream fin("rosalind_subs.txt");
    ofstream fout("result.txt");
    string s, t;
    fin >> s >> t;
    for(int i=0; i<s.size()-t.size(); i++)
        if(s.substr(i, t.size())==t)
            fout << i+1 << " ";
    fout << "\n";

    return 0;
}

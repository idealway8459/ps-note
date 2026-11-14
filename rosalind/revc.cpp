#include <fstream>
#include <string>
#include <map>
#include <algorithm>
#define all(v) v.begin(), v.end()
using namespace std;

int main()
{
    ifstream fin("rosalind_revc.txt");
    ofstream fout("result.txt");
    string s;
    map<char, char> syms{{'A', 'T'}, {'C', 'G'}, {'G', 'C'}, {'T', 'A'}};
    fin >> s;
    reverse(all(s));
    transform(all(s), s.begin(), [&syms](char c){ return syms[c]; });
    fout << s << "\n";

    return 0;
}

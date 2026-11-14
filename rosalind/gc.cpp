#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#define all(v) v.begin(), v.end()
using namespace std;

struct Entry { string head, seq; };

typedef vector<Entry> Fasta;

Fasta read_fasta(ifstream &ifs) {
    Fasta fasta;
    while(!ifs.eof()) {
        string s;
        ifs >> s;
        if(s[0]=='>')
            fasta.push_back({s.substr(1), ""});
        else
            fasta.back().seq += s;
    }
    return fasta;
}

int main()
{
    ifstream fin("rosalind_gc.txt");
    Fasta fasta = read_fasta(fin);
    string head = "";
    double ans = 0.0;
    for(Entry &entry : fasta) {
        long long gc_count = count_if(all(entry.seq), [](char c){ return c=='C' || c=='G'; });
        double gc_content = (double)gc_count/entry.seq.size()*100;
        if(ans<gc_content) {
            head = entry.head;
            ans = gc_content;
        }
    }
    cout << head << "\n" << ans << "\n";

    return 0;
}

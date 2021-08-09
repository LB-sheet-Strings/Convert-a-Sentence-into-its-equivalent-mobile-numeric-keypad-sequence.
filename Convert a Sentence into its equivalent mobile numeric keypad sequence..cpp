#include <bits/stdc++.h>
using namespace std;

string printSequence(string S)
{
    //code here.
    int l=S.length();
    
    //make a hashmap to store corresponding keystrokes of characters
    unordered_map<char,int> m;
    
    //fill the map
    m.insert(make_pair('A',2));
    m.insert(make_pair('B',22));
    m.insert(make_pair('C',222));
    m.insert(make_pair('D',3));
    m.insert(make_pair('E',33));
    m.insert(make_pair('F',333));
    m.insert(make_pair('G',4));
    m.insert(make_pair('H',44));
    m.insert(make_pair('I',444));
    m.insert(make_pair('J',5));
    m.insert(make_pair('K',55));
    m.insert(make_pair('L',555));
    m.insert(make_pair('M',6));
    m.insert(make_pair('N',66));
    m.insert(make_pair('O',666));
    m.insert(make_pair('P',7));
    m.insert(make_pair('Q',77));
    m.insert(make_pair('R',777));
    m.insert(make_pair('S',7777));
    m.insert(make_pair('T',8));
    m.insert(make_pair('U',88));
    m.insert(make_pair('V',888));
    m.insert(make_pair('W',9));
    m.insert(make_pair('X',99));
    m.insert(make_pair('Y',999));
    m.insert(make_pair('Z',9999));
    
    //now iterate the i/p string and print the output
    cout<<"\n\n";
    for(int i=0;i<l;i++)
    {
        int key=S[i];
        cout<<m.at(key);
    }
    
}

// Driver function
int main()
{
 
    string input = "ABC";
    cout << printSequence(input);
    return 0;
}

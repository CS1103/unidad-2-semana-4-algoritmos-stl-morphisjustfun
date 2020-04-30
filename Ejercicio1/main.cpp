#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>
#include <stack>
using namespace std;

void permute(string str, string out,vector<string>& val)
{
    if (str.size() == 0)
    {
        val.push_back(out);
        return;
    }
    for (int i = 0; i < str.size(); i++)
    {
        permute(str.substr(1), out + str[0],val);
        rotate(str.begin(), str.begin() + 1, str.end());
    }
}


int main () {
    string input = "";
    cin >> input;
    while(input!="#"){
        auto copia = input;
        vector<string> la;
        permute(input,"",la);
        sort(la.begin(),la.end());
        la.erase(unique(la.begin(),la.end()),la.end());
        auto pos = find(la.begin(),la.end(),input);
        if (pos==(la.end()-1)){
            cout << "No succesor" << endl;
        }
        else{
            cout << *(pos+1) << endl;
        }
        cin >> input;
    }
    return 0;
}



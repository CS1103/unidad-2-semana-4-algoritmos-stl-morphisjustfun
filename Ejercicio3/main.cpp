#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >>n;
    vector<vector<vector<int>>> casos;
    for (int i=0;i<n;i++){
        string first;
        cin >> first;
        string two;
        cin >> two;
        vector<vector<int>> semi;
        stringstream la(first);
        stringstream lo(two);
        vector<int> a;
        vector<int> b;
        int pri;
        while(la>>pri){
            a.push_back(pri);
        }
        while(lo>>pri){
            b.push_back(pri);
        }
        semi.push_back(a);
        semi.push_back(b);
        casos.push_back(semi);
    }
    for (int i=0;i<n;i++){
        int cases = casos[i][0].size();
        vector<int> inter;
        inter = casos[i][1];
        sort(inter.begin(),inter.end());
        for (int j=0;j<cases;j++){
            cout << inter[casos[i][0][j]] << endl;
        }
    }
    return 0;
}

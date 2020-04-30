#include <iostream>
#include <vector>
using namespace std;
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void bubbleSortn(vector<int> ob, int& contador)
{
    int i, j;
    for (i = 0; i < ob.size()-1; i++)
        for (j = 0; j < ob.size()-i-1; j++)
            if (ob[j] > ob[j+1]){
                swap(&ob[j], &ob[j+1]);
                contador+=1;
            }

}

int main() {
    int input;
    vector<int> fina;
    cin >> input;
    for (int i=0;i<input;i++){
        int pr;
        cin >> pr;
        vector<int> prueba;
        for (int j=0;j<pr;j++){
            int fin;
            cin>>fin;
            prueba.push_back(fin);
        }
        int contador=0;
        bubbleSortn(prueba,contador);
        fina.push_back(contador);
    }
    for(int i=0;i<input;i++){
        cout << "Optimal train swapping takes " << fina[i] << " swaps." << endl;
    }
    return 0;
}

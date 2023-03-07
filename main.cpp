#include <bits/stdc++.h>
using namespace std;
vector<char>V;

int main()
{
    int A,B,cont=0;
    string S;
    cin>>A>>B>>S;
        for(int i = 0; i < A; i++){
            V.push_back(S[i]);
        }
    for(int i=0;i < V.size(); i++){
        int pos= i;
        int ini = V[0];
        while(B--){
            if(pos + B >=ini && pos + B > V.size()){
                ini = pos + B;
                cont++;
            }
        }
    }
if(cont == 0){
    cout<< -1;

}
else
    cout<<cont;
    return 0;
}

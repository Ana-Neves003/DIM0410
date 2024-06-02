#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, q;
    
    cin>>n>>q;

    vector<int> jogadores(n,0);

    for (int i = 0; i < q; i++)
    {
        int event, player;
        cin>>event>>player;

        if(event == 1)
            jogadores[player-1]++;
        if(event == 2)
            jogadores[player-1] += 2;
        if(event == 3){
            if(jogadores[player-1]>= 2)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }
    
    return 0;
}
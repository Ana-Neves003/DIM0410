    #include <bits/stdc++.h>

    using namespace std;

    main() {
        int n,m;
        int i,j,cont = 0;

        while (cin >> n >> m, n) {

            //if (n==0 && m==0) break;

            vector<int> Jack(n), Jill(m);

            for (i=0;i<n;i++)
                cin >> Jack[i];

            for (i=0;i<m;i++)
                cin >> Jill[i];
                
            i = 0;
            j = 0;

            while (i<n && j<m) {
                while (j<m && Jill[j]<Jack[i]){ 
                    j++;
                }
                if (j>m)
                    break;
                if (Jack[i]==Jill[j]) {
                    cont++; 
                    j++;
                }
                i++;
            }
            
        }
        
        cout << cont << endl;
        return 0;
    }
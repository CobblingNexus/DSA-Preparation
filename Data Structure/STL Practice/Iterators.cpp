#include<bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef long double ld;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout); 
    #endif

    vector < int > v = {1,2,3,4,5};
    vector < int > :: iterator it = v.begin();
    for( it = v.begin(); it != v.end(); ++it){
        cout << (*it) << " ";
    }

    cout << "\n";

    vector < pair < int , int > > vp = { {1,2}, {3,4} };
    vector < pair < int , int > > :: iterator it1;
    for ( it1 = vp.begin(); it1 != vp.end(); ++it1){
        cout << it1 -> first << " " << it1 -> second << "\n"; // (*it1).first <=> it1 -> first && (*it1).second <=> it1 -> second
    }

    // Short Code for iterators


    
    

}
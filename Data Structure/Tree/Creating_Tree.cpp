#include<bits/stdc++.h>
using namespace std;

template < typename T>
class TreeNode{
    public:
    int data;
    vector < TreeNode<T>*> children;

    // Constructor for initializing the data
    TreeNode(T data ){
        this -> data = data;
    }
};

#define fo(i,n) for(i=0;i<n;i++)
#define pb push_back
#define F first
#define S second
typedef long long ll;
typedef long double ld;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout); 
    #endif

    // Creating independent Nodes
    TreeNode <int>* root = new TreeNode<int>(1);
    TreeNode <int>* node1 = new TreeNode<int>(2);
    TreeNode <int>* node2 = new TreeNode<int>(3);
    
    // Creating connection b/w root and children
    root -> children.push_back(node1);
    root -> children.push_back(node2);


    
    

}
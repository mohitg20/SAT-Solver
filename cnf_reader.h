#include <bits/stdc++.h>
using namespace std;

pair<int,vector<vector<int>>> extract(string file){
    ifstream indata;
    indata.open(file);
    if(!indata) { // file couldn't be opened
    //   cerr << "Error: file could not be opened" << endl;
      return {-1,*(new vector<vector<int>>())};
    }
    string ini,temp;
    do{
        getline(indata,ini);
    }while(ini[0]!='p');
    stringstream ss;
    ss<<ini;
    int vari,no_clau;

    ss>>temp;
    ss>>temp;
    temp="";

    ss>>temp;
    stringstream(temp)>>vari;
    temp="";
    ss>>temp;
    stringstream(temp)>>no_clau;
    vector<vector<int>> v;
    for(int i=0;i<no_clau;i++){
        vector<int> v1;
        int x;
        indata>>x;
        while(x!=0){
            v1.push_back(x);
            indata>>x;
        }
        v.push_back(v1);
    }
    // for(auto l:v){
    //     for(auto i:l){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }
    return {vari,v};
}
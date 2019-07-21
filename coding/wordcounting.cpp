//============================================================================
// Name        : wordcount
// Author      : AMAN
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

 int main()
 {
     cout<<" enter text. Press <CTRL><D> to signal EoF:" <<endl;
     string mywords;
     vector<string> con;

     while(cin>>mywords)
     {
         con.push_back(mywords);

     }
    sort(con.begin(),con.end());

    int vectorS= con.size();

    if(vectoreS==0) {
        cout<<"nothing type "<<endl;
        return 1;

    }
    cout<<"word count for every word"<<endl;
    int count=1;
    mywords=con[0];

    for(int i=1;i<vectorS;i++) {
        if (mywords!=con[i]) {
            cout<<mywords <<" : " <<Count<<" "<<endl;
            Count=0;
            mywords=con[i];
        }
        Count++;
    }


    return 0;

 }
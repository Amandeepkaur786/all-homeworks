//============================================================================
// Name        : map.cpp
// Author      : AMAN
// Version     :
// Copyright   : Your copyright notice

//============================================================================

#include<iostream>
#include<map>
#include<iterator>

using namespace std;
map<int,string>::iterator it;

void displaymap(map<int,string> new_map)
{
    for(it=new_map.begin();it != new_map.end();it++)
    {
        cout<<it->first<< "=>" <<it->second<<endl;//first means key and  second means value
    }
}￼

int main()
{
    map<int,string> new_map;
    
    new_map[1]="aman";
    new_map[2]="raman";
    new_map[3]="rip";
    new_map[4]="gagan";
    new_map[5]="gorav";
    new_map[6]="nitika";
    
    cout<<new_map[3]<<endl;
   
    for(it=new_map.begin();it!= new_map.end();it++)
    {
        cout<<it->first<< "=>" <<it->second<<endl;
    }

    new_map.insert(pair<int,string>(7,"simran"));
    
    displaymap(new_map);
    

    iter=new_map.find(4);
    cout<<"key is here = "<<it->first<<" - " <<it->second<<endl;
    //to know about the size of map

    cout<<"the map size is = " <<new_map.size();
    
    
    return 0;
    
}
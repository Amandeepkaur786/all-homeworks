//============================================================================
// Name        : LIST BUBBLESORT
// Author      : AMANDEEP
// Version     :
// Copyright   : Your copyright notice

//============================================================================
#include<iostream>
#include<iterator>
#include<list>

using namespace std;
list<int>::iterator it;

void printList(list<int> L1)
{   
  
    for(it=L1.begin();it !=L1.end(); it++)
    {
        cout<<" "<<*it;
        
    }
}

int main()
{
    list<int> L1 ={3,6,5,2,4,7,9,8};
    cout<<"LIST WITH NO SORTING"<<endl;
    
    printList(L1);
    cout<<endl;
    
    L1.sort();
    cout<<"LIST AFTER SORTING "<<endl;
    
    printList(L1);
    
    return 0;
    
    
}

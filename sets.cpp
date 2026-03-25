#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#include <set>


int main() {
    int q;
    int i,a,b;
    set<int> num2;
    cin >> q ;
    for (i = 0; i<q ;i++){
        cin>>a>>b;
        switch(a){
        case 1 :
        num2.insert(b);
        break ;
        
        
        
        case 2 :

       if (num2.find(b) != num2.end()) {
        num2.erase(b);
    }
         break ;
         
         
         
         
         case 3:
         if (num2.find(b)!=num2.end()){
            cout<<"Yes"<<endl;
           
           }
           else if (num2.find(b)==num2.end()) {
           cout<<"No"<<endl;
           }
            
         }

        }   
    
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

/*
output Star program cpp program using nested for loop

****1
***22
**333
*4444

*/
#include<iostream>
using namespace std;
int main(){
  for(int i=1 ; i<=4 ;i++){// 4321
     for(int j=5 ; j>=1 ;j--){//  1234
           if(j<=i){
            cout<<i;//1 22
           }else{
            cout<<"*";
           }

  }
     cout<<endl;
 }

}

#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<=9;j++){
            if(j>=5-i&&j<=5+i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
  return 0;
}

#include <iostream>
using namespace std;
int main(){
    int i,j,k;
for(i=0;i<=18;i++){
    for(j=0;j<=18;j++){
        if(i<=9){
        if(j<=9){
            if(j<i){
                cout<<" ";
            }
        else if(i<=j){
            cout<<j-i;
        }
        } 
        else if(j>9){
            if(j>=(9-i)&&j<=(18-i)){
                cout<<(18-(i+j));
            }
            else{
                cout<<" ";
            }
        } 

            
        }
      else if(i>=10){
        if(j<=9){
           if(j>=(18-i)){
            cout<<(i+j)-18;
           }
           else{
            cout<<" ";
           }
        }
      else if(j>9){
        if(j>9&&j<=i){
            cout<<i-j;
        }
        else {
            cout<<" ";
        }
      }
      }  
    
    }
    cout <<"\n";
}
    }

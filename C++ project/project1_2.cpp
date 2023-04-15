#include<iostream>
using namespace std;

int main(){
    int row, col, num_lines =10;

    for(row = 1; row < 11; row++){
        for(int i = 0, col = 11; col > row && i < 11; col--, i++){
                cout<<i<<" ";
        }
        //cout<<endl;
        for(col = 1; col <= (row) ; col+=1){
            int j = 9, x;
            x = j - 1;       
            for(;x > -1; x--){    
            cout<<x<<" ";
            }
        cout<<endl;
        }
    }
}
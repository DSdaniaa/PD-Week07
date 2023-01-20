#include <iostream>
using namespace std;
void upper(int row);
void lower(int row);
main(){
  int row,row1;
  cout << "Enter the number of rows: ";
  cin >> row1;
  row = row1/2;
  upper(row);
  lower(row);
}
void lower(int row){
    int row1=row;
    for(int x=1; x<=row; x=x+1){
        for(int y=1; y<=x; y++){
            cout << " ";
        }
        row1=row1-1;

        for(int y=0; y<=row1; y=y+1){
            cout << "*";
        }
        
        cout << endl;
    }

}
void upper(int row){
    for(int x=1; x<=row; x=x+1){
        for(int z=row; z>=x; z=z-1){
            cout << " ";
        }
        for(int y=1; y<=x; y++){
            cout << "*";
        }
        
        cout << endl;
    }

}
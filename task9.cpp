#include <iostream>
using namespace std;
void shape(int row);
main(){
  int row;
  cout << "Enter the number of rows: ";
  cin >> row;
  shape(row);
}
void shape(int row){
    int row1=row;
    for(int x=1; x<=row; x=x+1){
        row1=row1-1;
        for(int y=1; y<=x; y++){
            cout << "*";
        }
        for(int z=1; z<=row1; z=z+1){
            cout <<" ";
        }
         for(int y=1; y<=row1; y=y+1){
            cout << " ";
        }
        for(int y=1; y<=x; y++){
            cout << "*";
        }
       

        cout << endl;
    }

}
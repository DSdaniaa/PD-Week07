#include <iostream>
using namespace std;
void nested(int row);
main(){
  int row;
  cout << "Enter the number of rows: ";
  cin >> row;
  nested(row);
}
void nested(int row){
    for(int x=row; x>=1; x=x-1){
        for(int y=1; y<=x; y=y+1){
            cout << "*";
        }
        cout << endl;
    }

}
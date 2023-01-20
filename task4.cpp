#include <iostream>
using namespace std;
void amplify(int num);
main(){
    int num;
    cout << "Enter a number of sequence: ";
    cin >> num;
    amplify(num);

}
void amplify(int num){
    int number;
    for(int x=1; x<=num; x=x+1){
        if(x%4==0 && x==num){
            cout << x*10;
        }
        else if(x%4==0 && x!=num){
            cout << x*10 << ",";
        }
        else if(x==num){
            cout << x ;
        }
        else{
            cout <<x << ",";
        }

    }
}
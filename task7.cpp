#include <iostream>
using namespace std;
void checkpercentage(int digit);
main(){
    int digit;
    cout << "Enter a digit:";
    cin >> digit;
    checkpercentage(digit);
}
void checkpercentage(int digit){
    float p1=0;
    float p2=0;
    float p3=0; 
    int check;
    float num1,num2,num3;
    for(int x=1; x<=digit; x=x+1){
        cout <<"Enter a number: ";
        cin >> check;
        if(check%2==0){
            p1=p1+1;
        }
        if(check%3==0){
            p2=p2+1;
        }
        if(check%4==0){
            p3=p3+1;
        }
    
    }
    num1=(p1/digit)*100;
    num2=(p2/digit)*100;
    num3=(p3/digit)*100;
    cout << num1 << "%"<< endl;
    cout << num2 << "%" << endl;
    cout << num3 << "%" <<endl;
    



}
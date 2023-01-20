#include <iostream>
using namespace std;
int checkdots(int num);
main(){
    int num, result;
    cout << "Enter the number of Triangle: ";
    cin >> num;
    result= checkdots(num);
    cout << result;
}
int checkdots(int num){
    int sum=0;
    for(int x=1; x<=num; x=x+1){
        sum=sum+x;
    }
    return sum;

}

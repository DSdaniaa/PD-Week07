#include <iostream>
using namespace std;
void checkcargo(int num);
main(){
    int num;
    cout << "Enter the number of cargo transportations: ";
    cin >> num;
    checkcargo(num);

}
void checkcargo(int num){
    int tons; 
    int bus=0;
    int truck=0;
    int train=0;
    float total=0;
    int num1=0;
    int num2=0;
    int num3=0;
    float average ;
    for(int x=1; x<=num; x=x+1){
        cout << "Enter the tonage: ";
        cin >> tons;
        total=total+tons;
        if(tons<=3){
            bus=bus+tons;
            num1= num1 + (tons*200);
        }
        if(tons>3 && tons<=11){
            truck=truck+tons;
            num2= num2 +(tons*175);

        }
        if(tons>11){
            train=train+tons;
            num3=num3 +(tons*120);
        }

    }
    average=(num1+num2+num3)/total;
    cout << "Average: "<< average << endl;
    cout << (bus/total)*100<<"%" << endl;
    cout << (truck/total)*100<< "%"<< endl;
    cout << (train/total)*100 << "%"<< endl;

}

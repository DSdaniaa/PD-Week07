#include <iostream>
using namespace std;
void checkpatients(int num);
main(){
    int num, patients, difference;
    int untreated=0;
    int treated=0;
    int doc=7;
    cout << "Enter the period for which you need to make calculations: ";
    cin >> num;
    for(int x=1; x<=num; x=x+1){
        cout << "Enter number of patients: ";
        cin >> patients;
        if(x%3==0){
            if(untreated>treated){
                doc=doc+1;
            }
            if(patients==doc){
                treated=treated+patients;
            }
            else if(patients>doc){
                difference= patients-doc;
                treated=treated +doc;
                untreated=untreated + difference;

            }
            else if(patients<doc){
                treated= treated + patients;
            
            }

        }
        else{
            if(patients==doc){
                treated=treated+patients;
            }
            else if(patients>doc){
                difference= patients-doc;
                treated=treated + doc;
                untreated=untreated + difference;

            }
            else if(patients<doc){
                treated= treated + patients;
            
            }

        }



    }
    cout << "Treated patients: " << treated << endl;
    cout << "Untreated patients: " << untreated << endl;


}
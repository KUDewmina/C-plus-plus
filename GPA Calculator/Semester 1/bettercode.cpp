#include <iostream>
#include <map>

using namespace std;

string name;
string score;
string modulos[] = {"Maths" ,"Programming" ,"Electrical" ,"Mechanics" ,"Fluid" ,"Material"} ;
int length = sizeof(modulos)/sizeof(modulos[0]);
int credits[] = {3,3,2,2,2,2};
map<string ,double>gradePoints = {
    {"A+", 4.0}, {"A", 4.0},
    {"A-", 3.7}, {"B+", 3.3}, {"B", 3.0}, {"B-", 2.7},
    {"C+", 2.3}, {"C", 2.0},
    {"D", 1.5}, {"F", 0.0}
};
double GPA = 0.0;

int main(){
    cout << "What is your name ? : " ;
    cin >> name ;
    for(int i=0 ; i<length ; i++){
        cout << "What is the score for " << modulos[i] << " ? : " ;
        cin >> score ;
        GPA += (gradePoints[score]*credits[i])/14 ;
    }

    cout << name << " your GPA is " << GPA ;

    return 0;
}

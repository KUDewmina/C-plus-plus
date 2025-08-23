#include <iostream>

std::string score;
std::string name;
std::string modulos[] = {"Maths" ,"Programming" ,"Electrical" ,"Mechanics" ,"Fluid" ,"Material"} ;
double gpa = 0 ;

void HighCredit(std::string score){
    if (score == "A+" || score== "A"){
        gpa += (4*3)/14 ;
    }else if(score == "A-"){
        gpa += (3.7*3)/14 ;
    }else if(score == "B+"){
        gpa += (3.3*3)/14 ;
    }else if(score == "B"){
        gpa += (3*3)/14 ;
    }else if(score == "B-"){
        gpa += (2.7*3)/14 ;
    }else if(score == "C+"){
        gpa += (2.3*3)/14 ;
    }else if(score == "C"){
        gpa += (2*3)/14 ;
    }else{
        gpa += (1.5*3)/14 ;
    }
}

void LowCredit(std::string score){
    if (score == "A+" || score== "A"){
        gpa += (4*2)/14 ;
    }else if(score == "A-"){
        gpa += (3.7*2)/14 ;
    }else if(score == "B+"){
        gpa += (3.3*2)/14 ;
    }else if(score == "B"){
        gpa += (3*2)/14 ;
    }else if(score == "B-"){
        gpa += (2.7*2)/14 ;
    }else if(score == "C+"){
        gpa += (2.3*2)/14 ;
    }else if(score == "C"){
        gpa += (2*2)/14 ;
    }else{
        gpa += (1.5*2)/14 ;
    }
}

int main() {
    std::cout << "What's Your Name: " ;
    std::cin >> name ;
    for(int i=0; i<6 ; i++){
        std::cout << "Enter the score for " << modulos[i] << " ? : " ;
        std::cin >> score ;
        if(i==0 || i==1){
            HighCredit(score);
        }else{
            LowCredit(score);
        }       
    }

    std::cout << name << ", Your GPA is " << gpa ;
    
    return 0 ;

}

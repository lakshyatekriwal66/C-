#include <iostream>

using namespace std;
int main(){
     float English,Hindi,Mathematics,Physics,Chemistry,Biology,Social_studies;
     cout << "Enter the marks obtained in English: ";
     cin >> English;
        cout << "Enter the marks obtained in Hindi: "; 
        cin >> Hindi;
        cout << "Enter the marks obtained in Mathematics: ";
        cin >> Mathematics;
        cout << "Enter the marks obtained in Physics: ";
        cin >> Physics;
        cout << "Enter the marks obtained in Chemistry: ";
        cin >> Chemistry;
        cout << "Enter the marks obtained in Biology: ";
        cin >> Biology;
        cout << "Enter the marks obtained in Social studies: ";
        cin >> Social_studies;

        float total_marks = English + Hindi + Mathematics + Physics + Chemistry + Biology + Social_studies;
        
        cout << "Total marks obtained out of 700: " <<total_marks;

        float percentage = (total_marks / 700)*100;
        cout << "\nPercentage of marks obtained: " << percentage << "%";
        

    return 0;


}


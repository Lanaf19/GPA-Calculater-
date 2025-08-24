//
//  main.cpp
//  GPA_Calculater
//
//  Created by Lana Firas on 24/08/2025.
//

    
#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main()
{
    int SubjectNumber;
    
    cout << "How many subject do you have in this semester? ";
    cin >> SubjectNumber;
    cin.ignore();
    
    double credits[SubjectNumber];
    double TotalCredits = 0;
    string SubjectName[SubjectNumber];
    string Grade[SubjectNumber];
    double GradeValue[SubjectNumber];
    double QualityPoint[SubjectNumber];
    double TottalQualityPoint = 0;
    double GPA;
    
    for (int i = 0; i < SubjectNumber; i++)
    {
        
        cout << "Subject Name: ";
        getline(cin, SubjectName[i]);
        
        cout << "Credits: ";
        cin >> credits[i];
        
        cout << "What is your grade in the subject? ";
        cin >> Grade[i];
        
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    
    for (int i = 0; i < SubjectNumber; i++)
    {
        if (Grade[i] == "A")
            GradeValue[i] = 4.0;
        else if (Grade[i] == "A-")
            GradeValue[i] = 3.7;
        else if (Grade[i] == "B+")
            GradeValue[i] = 3.3;
        else if (Grade[i] == "B")
            GradeValue[i] = 3.0;
        else if (Grade[i] == "B-")
            GradeValue[i] = 2.7;
        else if (Grade[i] == "C+")
            GradeValue[i] = 2.3;
        else if (Grade[i] == "C")
            GradeValue[i] = 2.0;
        else if (Grade[i] == "C-")
            GradeValue[i] = 1.7;
        else if (Grade[i] == "D+")
            GradeValue[i] = 1.3;
        else if (Grade[i] == "D")
            GradeValue[i] = 1.0;
        else if (Grade[i] == "F")
        {
            cout << "You have failed this subject, please try again with only the subjects you passed." << endl;
            return 1;
        }
        else
        {
            cout << "Error Please Try Again!!!" << endl;
            return 1;
        }
    }
    
    for (int i = 0; i < SubjectNumber; i++)
    {
        QualityPoint[i] = GradeValue[i] * credits[i];
        TotalCredits += credits[i];
        TottalQualityPoint += QualityPoint[i];
    }
    
    GPA = TottalQualityPoint / TotalCredits;
    
    cout << endl << "Result Summary: " << endl;
    cout << "---------------------------------" << endl;
    
    for (int i = 0; i < SubjectNumber; i++)
        cout << SubjectName[i] << "(" << credits[i] << ")" << " = " << QualityPoint[i] << endl;
    
    cout << "---------------------------------" << endl;
    cout << "Total Points: " << TottalQualityPoint << endl;
    cout << "Total Credits: " << TotalCredits << endl;
    cout << "Your GPA: " << GPA << "/4.0" << endl;
}

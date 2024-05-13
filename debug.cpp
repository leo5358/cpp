#include "bits/stdc++.h"
using namespace std;

struct Plagiarism {
    bool isDetected;
    bool isAdmitted;
};

struct Result {
    bool isAccepted;
    bool isLate;
    Plagiarism plagiarism;
};

struct Student {
    Result assignments[24];
    bool isWillingToAdvance;
};

bool willAdvance(const Student& student);

int main() {
    Student students[50];
    for (int i = 0; i < 50; ++i)
        cout << (willAdvance(students[i]) ? 1 : 0) << ' ';
    cout << endl;
    return 0;
}

bool willAdvance(const Student& student){
 int score = 0;
    bool isDetect[24] = {};
    bool isAdmit[24] = {};
    if(student.isWillingToAdvance == 0){
        return false;
    }
    else{
        for(int k = 0; k < 24; ++k){
            isDetect[k] = student.assignments[k].plagiarism.isDetected;
            isAdmit[k] = student.assignments[k].plagiarism.isAdmitted;
            if(isDetect[k] == 1 && isAdmit[k] == 0){
                return false;
            }
            if(isDetect[k] == 0 && isAdmit[k] == 0 && student.assignments[k].isAccepted == 1){
                if(student.assignments[k].isLate == 0){
                    score += 2;
                }
                else{
                    score += 1;
                }
                
            }
        }
    }
    if(score >= 32){
        return true;
    }
    else if(score < 32){
        return false;
    }
}
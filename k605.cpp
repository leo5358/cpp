#include<bits/stdc++.h>
#define fin ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
struct Student {
    int seatNumber;
    std::string name;
    int chineseScore;
    int englishScore;
    int mathScore;
    int socialScore;
    int scienceScore;
    int totalScore;
    int rank;
};
bool compareStudents(const Student& s1, const Student& s2) {
    if (s1.totalScore != s2.totalScore) {
        return s1.totalScore > s2.totalScore;
    } else {
        return s1.seatNumber < s2.seatNumber;
    }
}
int main() {
    fin 
    int N;
    std::cin >> N;
    std::vector<Student> students(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> students[i].seatNumber >> students[i].name >> students[i].chineseScore >> students[i].englishScore >> students[i].mathScore >> students[i].socialScore >> students[i].scienceScore;
        students[i].totalScore = students[i].chineseScore + students[i].englishScore + students[i].mathScore + students[i].socialScore + students[i].scienceScore;
    }
    std::sort(students.begin(), students.end(), compareStudents);
    int currentRank = 1;
    students[0].rank = currentRank;
    for (int i = 1; i < N; ++i) {
        if (students[i].totalScore < students[i - 1].totalScore) {
            currentRank = i + 1;
        }
        students[i].rank = currentRank;
    }
    for (const auto& student : students) {
        std::cout << student.seatNumber << " " << student.name << " " << student.chineseScore << " " << student.englishScore << " " << student.mathScore << " " << student.socialScore << " " << student.scienceScore << " " << student.totalScore << " " << student.rank << std::endl;
    }
    return 0;
}
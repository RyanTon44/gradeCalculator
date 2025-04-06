#include <iostream>
#include <string>
#include <vector>
using std::string;
using namespace std;

class Assignment {
    public:
        string name;
        double score;
        double weight;
    
        Assignment(string n, double s, double w): name(n), score(s), weight(w) {}
    
        double weightedScore() const {
            return score * weight;
        }
    };


int main() {
    int assignmentCount;
    cout << "How many assignments do you have?" << "\n";
    cin >> assignmentCount;
    
    vector<Assignment> assignments;

    for (int i = 1; i <= assignmentCount; i++) {
        string name; 
        double score, weight;

        cout << "Assignment " << i << " name: " << "\n";
        cin >> name;
        cout << "Score for " << name << ": " << "\n";
        cin >> score;
        cout << "Weight (in decimal form, 30 percent as 0.3) for " << name << ": " << "\n";
        cin >> weight;
        
        assignments.push_back(Assignment(name, score, weight));
    }

    double totalGrade = 0.0;
    string letterGrade; 

    for (auto& a : assignments) {
        totalGrade += a.weightedScore();
    }

    if (totalGrade > 97) {
        letterGrade = "A+";
    }
    else if (totalGrade > 93) {
        letterGrade = "A";
    }
    else if (totalGrade > 90) {
        letterGrade = "A-";
    }
    else if (totalGrade > 87) {
        letterGrade = "B+";
    }
    else if (totalGrade > 83) {
        letterGrade = "B";
    }
    else if (totalGrade > 80) {
        letterGrade = "B-";
    }
    else if (totalGrade > 77) {
        letterGrade = "C+";
    }
    else if (totalGrade > 73) {
        letterGrade = "C";
    }
    else if (totalGrade > 70) {
        letterGrade = "C-";
    }
    else if (totalGrade > 67) {
        letterGrade = "D+";
    }
    else if (totalGrade > 63) {
        letterGrade = "D";
    }
    else if (totalGrade > 60) {
        letterGrade = "D-";
    }
    else {
        letterGrade = "F";
    }

    cout << "Final Grade: " << letterGrade << " (" << totalGrade << "%)" << endl;

}  
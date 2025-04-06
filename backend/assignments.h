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

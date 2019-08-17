#ifndef RELATIVES_H
#define RELATIVES_H


#include <string>
using namespace std;

class calculator_relatives {
private:
    string relationship;
    string result;
public:
    calculator_relatives(string relationship);
    ~calculator_relatives(){ }
    void relationship_map_search();
    string get_result();
};

#endif // RELATIVES_H

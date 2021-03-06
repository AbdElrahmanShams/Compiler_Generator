//
// Created by ab_shams on 20/03/19.
//

#ifndef COMPILER_GENERATOR_SRCLINE_H
#define COMPILER_GENERATOR_SRCLINE_H


#include <string>
#include <vector>
#include "Token.h"

using namespace std;

class SrcLine {

public:
    SrcLine(const int& lineNum, const bool& isComment);
    int* getlineNumber();
    bool* isComment();

    void setErrMsg(const string& msg);
    string* getErrMsg();

    void addChar(char& c);
    vector<char>* getCharacters();
private:
    int lineNum;
    bool isCom;
    string errorMsg;
    vector<char> lineCharactres;
};


#endif //COMPILER_GENERATOR_SRCLINE_H

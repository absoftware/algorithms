//
//  Brackets.cpp
//  AlgorithmsCppLib
//
//  Created by Ariel Bogdziewicz on 26/06/2023.
//

#include "Brackets.hpp"
#include <stack>

using namespace std;

int codility_brackets(const string &S) {
    if (S.empty()) {
        return 1;
    }

    stack<char> nests;
    for(unsigned int i = 0; i < S.length(); i++) {
        switch (S[i]) {
            case '(':
            case '{':
            case '[':
                nests.push(S[i]);
                break;
            case ')':
            case '}':
            case ']':
                if (nests.empty()) {
                    return 0;
                }

                char opening = nests.top();
                switch (opening) {
                    case '(':
                        if (S[i] != ')') {
                            return 0;
                        }
                        break;
                    case '{':
                        if (S[i] != '}') {
                            return 0;
                        }
                        break;
                    case '[':
                        if (S[i] != ']') {
                            return 0;
                        }
                        break;
                }

                nests.pop();
                break;
        }
    }

    return nests.empty() ? 1 : 0;
}

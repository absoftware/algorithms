//
//  AlgorithmsCppLib.cpp
//  AlgorithmsCppLib
//
//  Created by Ariel Bogdziewicz on 24/06/2023.
//

#include <iostream>
#include "AlgorithmsCppLib.hpp"
#include "AlgorithmsCppLibPriv.hpp"

void AlgorithmsCppLib::HelloWorld(const char * s)
{
    AlgorithmsCppLibPriv *theObj = new AlgorithmsCppLibPriv;
    theObj->HelloWorldPriv(s);
    delete theObj;
};

void AlgorithmsCppLibPriv::HelloWorldPriv(const char * s) 
{
    std::cout << s << std::endl;
};

/* 
 * File:   XMLConfig.cpp
 * Author: apolubotko
 * 
 * Created on July 7, 2013, 10:43 PM
 */
#include <iostream>
#include "XMLConfig.h"

using namespace std;

XMLConfig* XMLConfig::_instance = 0;

XMLConfig::XMLConfig()
{
    cout << "Constructor XMLConfig." << endl;
}

XMLConfig* XMLConfig::Instance()
{
    if(_instance == 0)
    {
        _instance = new XMLConfig;
    }
    return _instance;
}

void XMLConfig::loadParams(const string config)
{
    cout << "Starting stream file " << config << endl;
}


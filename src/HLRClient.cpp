/* 
 * File:   HLRClient.cpp
 * Author: apolubotko
 * 
 * Created on July 7, 2013, 6:25 PM
 */

#include "iostream"
#include "HLRClient.h"

using namespace std;

HLRClient::HLRClient() {
    cout << "Client started." << endl;
}

HLRClient::HLRClient(const HLRClient& orig) {
}

HLRClient::~HLRClient() {
    cout << "Client destroyed." << endl;
} 

void HLRClient::start(void)
{
    cout << "Loading client" << endl;
}



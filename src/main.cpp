/* 
 * File:   main.cpp
 * Author: apolubotko
 *
 * Created on July 7, 2013, 5:52 PM
 */

#include <iostream>
#include <cstdlib>
#include <cstring>

#include "HLRClient.h"
#include "XMLConfig.h"

using namespace std;

/*
 * 
 */
const string DEFAULT_CONFIG = "config.xml";
const string CONFIG_DIR = "conf";
const string SEPARATOR = "/";
const int NARGS = 3; // total number of arguments in command line

class Program {
private:
    void show_usage(string name);
public:
    Program();
    ~Program();
    void start(const string config_path);
};

Program::Program() {
    cout << "Starting main program. " << endl;
}

Program::~Program() {
    cout << "main program has been destroyed." << endl;
}

void Program::start(string config_path) {
    XMLConfig *config = XMLConfig::Instance();
    config->loadParams(config_path);

    HLRClient client;
    client.start();
}

void show_usage(string name) {
    std::cerr << "\nUsage: " << name << " [-f] [config_flle] \n"
            << "\tconfig_file - xml file contains info about HLR. \n"
            << "\tIf there are no arguments then will be used \n"
            << "\tdefault file conf/config.xml \n"
            << std::endl;
}

int main(int argc, char** argv) {
    string config;
    if (argc == 1) {
        config = CONFIG_DIR + SEPARATOR + DEFAULT_CONFIG;
        cout << "Loading default configuration file " << config << endl;
    }
    else
    {
        for(int i = 0 ; i < argc; i++)
        {
            if(!strcmp(argv[i],"-f"))
            {
                if(argc == NARGS)
                    config = argv[i + 1];
                else
                    show_usage(argv[0]);
            }
        }
    }
    
    Program program;
    program.start(config);

    return 0;
}


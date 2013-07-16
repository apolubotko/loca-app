/* 
 * File:   XMLConfig.h
 * Author: apolubotko
 *
 * Created on July 7, 2013, 10:43 PM
 */

using namespace std;

#ifndef XMLCONFIG_H
#define	XMLCONFIG_H

class XMLConfig {
public:
    static XMLConfig* Instance();
    void loadParams(const string config);
protected:
    XMLConfig();
private:
    static XMLConfig* _instance;
    void streamFile(void);
};

#endif	/* XMLCONFIG_H */


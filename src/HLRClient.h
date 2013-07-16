/* 
 * File:   HLRClient.h
 * Author: apolubotko
 *
 * Created on July 7, 2013, 6:25 PM
 */

#ifndef HLRCLIENT_H
#define	HLRCLIENT_H

class HLRClient {
public:
    HLRClient();
    HLRClient(const HLRClient& orig);
    virtual ~HLRClient();
    void start(void);
private:

};

#endif	/* HLRCLIENT_H */


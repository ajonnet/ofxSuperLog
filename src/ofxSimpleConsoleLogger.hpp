//
//  ofxSimpleConsoleLogger.hpp
//  Footfall
//
//  Created by Amit Jain on 22/11/18.
//
//

#ifndef ofxSimpleConsoleLogger_hpp
#define ofxSimpleConsoleLogger_hpp

#include "ofMain.h"
#include <iostream>

class ofxSimpleConsoleLogger: public ofBaseLoggerChannel {
public:
    virtual ~ofxSimpleConsoleLogger(){};
    void log(ofLogLevel level, const string & module, const string & message);
    void log(ofLogLevel level, const string & module, const char* format, ...) OF_PRINTF_ATTR(4, 5);
    void log(ofLogLevel level, const string & module, const char* format, va_list args);
};

#endif /* ofxSimpleConsoleLogger_hpp */

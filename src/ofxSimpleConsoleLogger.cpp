//
//  ofxSimpleConsoleLogger.cpp
//  Footfall
//
//  Created by Amit Jain on 22/11/18.
//
//

#include "ofxSimpleConsoleLogger.hpp"

void ofxSimpleConsoleLogger::log(ofLogLevel level, const string & module, const string & message){
    //output to console
    cout<<message;
}

void ofxSimpleConsoleLogger::log(ofLogLevel level, const string & module, const char* format, ...){
    cout<<"Logging method 2 not supported"<<endl;
}

void ofxSimpleConsoleLogger::log(ofLogLevel level, const string & module, const char* format, va_list args){
    cout<<"Logging method 3 not supported"<<endl;
}

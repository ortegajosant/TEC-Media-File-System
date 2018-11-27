//
// Created by ortegajosant on 24/11/18.
//

#ifndef TEC_MFS_REQUESTMANAGER_H
#define TEC_MFS_REQUESTMANAGER_H

#include <document.h>
#include "rapidjson.h"
#include "string"


using namespace rapidjson;
using namespace std;

class RequestManager {

private:
    string processRequest(string request);

};


#endif //TEC_MFS_REQUESTMANAGER_H

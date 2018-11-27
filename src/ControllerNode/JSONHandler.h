//
// Created by ortegajosant on 24/11/18.
//

#ifndef TEC_MFS_JSONHANDLER_H
#define TEC_MFS_JSONHANDLER_H

#include "rapidjson.h"
#include <string>
#include <document.h>

using namespace rapidjson;
using namespace std;

class JSONHandler {

private:
    JSONHandler();

public:
    static Document stringToJson(string stringJSON);
    static string jsonToString(Document document);

    static string saveAnswer();

    static string videoAnswer(string videoFile);
};


#endif //TEC_MFS_JSONHANDLER_H

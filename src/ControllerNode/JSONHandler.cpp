//
// Created by ortegajosant on 24/11/18.
//

#include <stringbuffer.h>
#include <prettywriter.h>
#include "JSONHandler.h"

Document JSONHandler::stringToJson(string stringJSON) {
    Document document;
    document.Parse(stringJSON.c_str());
    return document;
}

string JSONHandler::jsonToString(Document document) {
    StringBuffer stringBuffer;
    PrettyWriter<StringBuffer> writer(stringBuffer);
    document.Accept(writer);

    return stringBuffer.GetString();
}

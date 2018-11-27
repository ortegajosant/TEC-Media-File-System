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

string JSONHandler::jsonToString(const Document document) {
    StringBuffer stringBuffer;
    PrettyWriter<StringBuffer> writer(stringBuffer);
    document.Accept(writer);

    return stringBuffer.GetString();
}

string JSONHandler::saveAnswer() {
    Document document;
    document.SetObject();

    Document::AllocatorType &alloc = document.GetAllocator();

    document.AddMember("status", "saved", alloc);

    StringBuffer stringBuffer;
    PrettyWriter<StringBuffer> writer(stringBuffer);
    document.Accept(writer);

    return stringBuffer.GetString();

}

string JSONHandler::videoAnswer(string videoFile) {
    char file[videoFile.size()];
    for (int i = 0; i < videoFile.size(); i++) {
        file[i] = videoFile[i];
    }

    Document document;
    document.SetObject();

    Document::AllocatorType &alloc = document.GetAllocator();

    document.AddMember("status", "ok", alloc);
    document.AddMember("video", Value().SetString(videoFile.c_str(), alloc), alloc);

    StringBuffer stringBuffer;
    PrettyWriter<StringBuffer> writer(stringBuffer);
    document.Accept(writer);

    return stringBuffer.GetString();

}

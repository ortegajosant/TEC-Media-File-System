//
// Created by ortegajosant on 24/11/18.
//

#include "RequestManager.h"
#include "JSONHandler.h"

string RequestManager::processRequest(string request) {
    Document jsonResquest = JSONHandler::stringToJson(request);



}

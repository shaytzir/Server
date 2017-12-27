//
// Created by shay on 12/25/17.
//

#ifndef SERVER_COMMANDSMANAGER_H
#define SERVER_COMMANDSMANAGER_H


#include <map>
#include "Command.h"

class CommandsManager {
public:
    CommandsManager();
    ~CommandsManager();
    void executeCommand(string command, vector<string> args);
private:
    map<string, Command*> commandsMap;
    ListOfGames* games;

};


#endif //SERVER_COMMANDSMANAGER_H
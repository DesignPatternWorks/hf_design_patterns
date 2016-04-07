/* 	Command object interface
 	Command objects will encapsulate the actions of the client's objects
*/

#ifndef NOCOMMAND_H
#define NOCOMMAND_H


#include "Command.h"

class NoCommand : public Command {
public:
	virtual void execute() { }
	virtual void undo() { }
};

#endif
/* 	Command object interface
 	Command objects will encapsulate the actions of the client's objects
*/

#ifndef COMMAND_H
#define COMMAND_H


class Command {
public:

	virtual void execute() = 0;
	virtual void undo() = 0;
};

#endif
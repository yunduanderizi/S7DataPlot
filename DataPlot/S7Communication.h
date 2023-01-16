#pragma once
#include"snap7.h"


class S7Communication
{
public:
	S7Communication();
	~S7Communication();
	bool setConnection(char * Addr, int port = 102, int Rock = 0, int Slot = 2);
private:
	TS7Client * Client;


};


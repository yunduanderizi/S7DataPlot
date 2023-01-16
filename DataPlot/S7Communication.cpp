#include "S7Communication.h"


S7Communication::S7Communication()
{
	Client = NULL;
	Client = new TS7Client();	
}
S7Communication::~S7Communication()
{

}
bool S7Communication::setConnection(char * Addr, int port , int Rock , int Slot)
{
	bool result = true;
	if (Client)
	{
		Client->SetParam(p_u16_RemotePort, (void *)&port);
		Client->ConnectTo(Addr, Rock, Slot);
	}
	return result;
}
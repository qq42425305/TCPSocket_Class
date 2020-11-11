#pragma once

#include "resource.h"
#include <WinSock2.h>

#pragma comment(lib,"ws2_32.lib")

#define HOST		0x0
#define CLIENT		0X1

class tcpsocket_class
{
public:
	tcpsocket_class(int flag=HOST,const char * ip="127.0.0.1",int port=666);
	~tcpsocket_class();
	void startListen();
	char * readData();
private:
	SOCKET mySocket;
	SOCKADDR_IN 
};

tcpsocket_class::tcpsocket_class(int flag, const char* ip, int port)
{
	
}
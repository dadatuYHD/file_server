#include "file_server.h"
#include <stdio.h>
#include "file_debug.h"

#define SERVER_PORT 8888     

int main(int argc, char *argv[])
{
    int iRet = FILE_SERVER_OK;

    iRet = init_socket(SERVER_PORT);
	if (iRet == FILE_SERVER_ERROR)
	{
        file_error("init the socket is failed!\n");
		return -1;
	}

    file_printf("Tcp Server is listen port 8888:\n");

	while (1)
	{
        iRet = deal_client_request();
	}

	close(get_listenfd());
    return 0;
}







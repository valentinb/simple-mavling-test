#include <stdio.h>
#include <string.h>

#include <errno.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <time.h>


#include "help.h"

void display_help_if_needed (int argc, char* argv[]){
    if ((argc == 2) && (strcmp(argv[1], "--help") == 0))
    {
        printf("\n");
        printf("\tUsage:\n\n");
        printf("\t");
        printf("%s", argv[0]);
        printf(" <ip address of QGroundControl>\n");
        printf("\tDefault for localhost: udp-server 127.0.0.1\n\n");
        exit(EXIT_FAILURE);
    }



}

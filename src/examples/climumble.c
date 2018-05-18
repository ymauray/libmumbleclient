#include "climumble.h"

#include <stdio.h>

#include "../mumbleclient.h"

int
main(int argc, char** argv)
{
    fprintf(stdout, "climumble - main : in\n");
    mumble_client_init_ssl();
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>

#define LIBRARY "/mnt/d1/seamles/dev/lib/SeamLES"

int main(int argc, char *argv[])
{
    void *handle;

    printf("Hello, world\n");

    handle = dlopen(LIBRARY, RTLD_NOW);
    if (!handle)
    {
	fprintf(stderr, "dlopen: %s\n", dlerror( ));
        exit(1);
    }

    exit(0);
}

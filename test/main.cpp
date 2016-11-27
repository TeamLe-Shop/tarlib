#include "tarlib.hpp"

#include <cstdio>

int main()
{
    printf(":thinking:\n");

    Tar tar("resources.tar");

    for (TarEntry* t : tar.getEntries()) {
        printf("==>  %s : %ld\n", t->name, t->file_size);
    }
    return 0;
}

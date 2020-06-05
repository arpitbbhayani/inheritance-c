#include <stdio.h>
#include <ll.h>

int main() {
    struct list_int *ll = new_list_int(10);
    print_addrs(ll);
    return 0;
}

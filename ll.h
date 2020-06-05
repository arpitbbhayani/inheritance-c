// this strcuture partially defines a node of a linked list
// it only holds the pointers to the next and the previous
// pointers of the linked list.
struct list_head {
	struct list_head *next; // pointer to the node next to the current one
	struct list_head *prev; // pointer to the node rprevious to the current one
};

struct list_int {
	struct list_head list;  // common next and prev pointers
	int value;              // specific member as per implementation
};

struct list_str {
	struct list_head list;  // common next and prev pointers
	char * str;             // specific member as per implementation
};

void print_addrs(struct list_int *);
struct list_int * new_list_int(int);

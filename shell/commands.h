
#define CMD_UNKNOWN -1
#define CMD_PASS 1
#define CMD_VERSION 2

typedef struct {
	char *key;
	int val;
} t_symstruct;

static t_symstruct lookup_table[] = {
	{ "pass", CMD_PASS },
	{ "version", CMD_VERSION }
};

#define NKEYS (sizeof(lookup_table) / sizeof(t_symstruct))

void commands_pass(char *params);
void commands_version();

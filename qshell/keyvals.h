typedef struct {
	char *key;
	char *val;
} keyval_t;

static keyval_t app_keyvals[] = {
	{ "vps", "vps-" },
	{ "gitlab", "gitlab-" },
	{ "dropbox", "dropbox-" }
};

#define KEYVALS_COUNT (sizeof(app_keyvals) / sizeof(keyval_t))

char* get_val(char *key);

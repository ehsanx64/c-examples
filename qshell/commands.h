enum commands {
	CMD_UNKNOWN,
	CMD_GET,
	CMD_CLIP,
	CMD_RUN,
	CMD_VERSION
};

typedef struct {
	char *key;
	int val;
	char *help;
} command_t;

static command_t app_commands[] = {
	{ "get", CMD_GET, "Display value" },
	{ "clip", CMD_CLIP, "Clip value" },
	{ "version", CMD_VERSION, "Display versiion" }
};

#define NKEYS (sizeof(app_commands) / sizeof(command_t))

int get_command(char *key);

void commands_get(char *params);
void commands_run(char *params);
void commands_version();

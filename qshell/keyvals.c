#include "keyvals.h"

char* get_val(char *key) {
	int i;
	keyval_t *kv;
	char *retval = "";

	kv = &app_keyvals;

	for (i = 0; i < KEYVALS_COUNT; i++) {
		if (strcmp(kv->key, key) == 0) {
			return kv->val;
		}
	}

	return retval;
}


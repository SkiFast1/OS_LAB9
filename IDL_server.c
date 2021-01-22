/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "IDL.h"
#include <unistd.h>

char authorize(char login[], char password[]) {
	if(!strcmp(login, "admin") && !strcmp(password, "secretpasswd")) { return 1; } else { return 0; }
}

char* concat(char *s1, char s2[])
{
    char *result = malloc(strlen(s1) + strlen(s2) + 1);
    strcpy(result, s1);
    strcat(result, s2);
    return result;
}

char* passthru(const char* command) {
	const int size = 1024;
	char* result = malloc(1);
	char tmp[size];
	result[0] = 0;
    FILE *fp;
    fp = popen(command, "r");
    memset(tmp, 0x0, sizeof(tmp));
    while(fgets(tmp, size-1, fp)) {
        result = concat(result, tmp);
    }
    pclose(fp);
    return result;
}

char **execute_1_svc(command *argp, struct svc_req *rqstp) {
	static char * result;
	if(authorize(argp->data.login, argp->data.password)){
		result = passthru(argp->cmd);
	} else {
		result = (char*)"Invalid login/password!";
	}
	return &result;
}

char **auth_1_svc(userdata *argp, struct svc_req *rqstp) {
	static char * result;
	if(authorize(argp->login, argp->password)){
		result = (char*)"authorized";
	} else {
		result = (char*)"illegal";
	}
	return &result;
}
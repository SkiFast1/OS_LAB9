/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _IDL_H_RPCGEN
#define _IDL_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct userdata {
	char login[32];
	char password[32];
};
typedef struct userdata userdata;

struct command {
	char cmd[256];
	userdata data;
};
typedef struct command command;

#define COMPUTE 456123789
#define EXECUTE_VERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define execute 1
extern  char ** execute_1(command *, CLIENT *);
extern  char ** execute_1_svc(command *, struct svc_req *);
#define auth 2
extern  char ** auth_1(userdata *, CLIENT *);
extern  char ** auth_1_svc(userdata *, struct svc_req *);
extern int compute_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define execute 1
extern  char ** execute_1();
extern  char ** execute_1_svc();
#define auth 2
extern  char ** auth_1();
extern  char ** auth_1_svc();
extern int compute_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_userdata (XDR *, userdata*);
extern  bool_t xdr_command (XDR *, command*);

#else /* K&R C */
extern bool_t xdr_userdata ();
extern bool_t xdr_command ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_IDL_H_RPCGEN */

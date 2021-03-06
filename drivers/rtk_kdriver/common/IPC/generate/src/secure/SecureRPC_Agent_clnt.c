/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include <memory.h> /* for memset */
#include <SecureRPC_Agent.h>
#include <ClientStub.h>

#include <RPCBaseDS.h>
#include <SecureRPCBaseDS.h>

HRESULT *
SECURE_RPC_ToSystem_PlayReady_Result_0(RPC_tee_rpc_result_t *argp, CLNT_STRUCT *clnt)
{
#if defined(ENABLE_RPC_PROXY_INIT_CHECK)
  #if 1 == BUILD_FOR_MACARTHUR3
  #pragma message( "BUILD_FOR_MACARTHUR3 is #define'd to 1" )
  #else
  #pragma message( "BUILD_FOR_MACARTHUR3 is #define'd to 0" )
  #endif
  #if 1 == BUILD_FOR_KCPU_COMMON
  #pragma message("BUILD_FOR_KCPU_COMMON is #define'd to 1" )
  #else
  #pragma message("BUILD_FOR_KCPU_COMMON is #define'd to 0" )
  #endif
  #if 1 == BUILD_FOR_MACARTHUR3 && 0 == BUILD_FOR_KCPU_COMMON
    //THIS IS COMPILED FOR SCPU
    extern int g_RPCProxyInitDone;
    if (0 == g_RPCProxyInitDone)
    {
        //while (1)
        //{
        //    printf ("g_RPCProxyInitDone not init to 1\n");
        //    sleep (1);
        //}
        initRPCProxy();
    }
  #endif
#endif //ENABLE_RPC_PROXY_INIT_CHECK
	RPC_STRUCT rpc;
	HRESULT * result = NULL ;
	long args_size = sizeof(RPC_tee_rpc_result_t );


	// if NONBLOCK_MODE, dont need to alloc memory
	if (clnt->sendMode & BLOCK_MODE) {
		result = (HRESULT *) malloc(sizeof(HRESULT ));
	}


	// prepare the RPC call structure
	// including programID, versionID, TaskID...
	rpc = prepareRPCCall(clnt, (int)result);


	if (client_call (&rpc, SECURE_RPC_ToSystem_PlayReady_Result, clnt->sendMode,
		(xdrproc_t) xdr_RPC_tee_rpc_result_t, (caddr_t) argp, args_size)
		!= RPC_SUCCESS) {
		if(result)
			free(result);
		return (HRESULT *)-1;
	}


	//for blocking use
	if (clnt->sendMode & BLOCK_MODE) {
		XDR xdrs;

		waitReply();
		xdrmem_create(&xdrs, (char *)result, sizeof(HRESULT), XDR_DECODE);
		 if(!xdr_HRESULT(&xdrs, result))
			 return (HRESULT *)-1;
		return result;
	}

	return 0;

}

RPCRES_LONG *
SECURE_RPC_ToSystem_GetSetupParameter_0(SECURE_RPC_TOSYSTEM_GET_SETUP_PARAM *argp, CLNT_STRUCT *clnt)
{
#if defined(ENABLE_RPC_PROXY_INIT_CHECK)
  #if 1 == BUILD_FOR_MACARTHUR3
  #pragma message( "BUILD_FOR_MACARTHUR3 is #define'd to 1" )
  #else
  #pragma message( "BUILD_FOR_MACARTHUR3 is #define'd to 0" )
  #endif
  #if 1 == BUILD_FOR_KCPU_COMMON
  #pragma message("BUILD_FOR_KCPU_COMMON is #define'd to 1" )
  #else
  #pragma message("BUILD_FOR_KCPU_COMMON is #define'd to 0" )
  #endif
  #if 1 == BUILD_FOR_MACARTHUR3 && 0 == BUILD_FOR_KCPU_COMMON
    //THIS IS COMPILED FOR SCPU
    extern int g_RPCProxyInitDone;
    if (0 == g_RPCProxyInitDone)
    {
        //while (1)
        //{
        //    printf ("g_RPCProxyInitDone not init to 1\n");
        //    sleep (1);
        //}
        initRPCProxy();
    }
  #endif
#endif //ENABLE_RPC_PROXY_INIT_CHECK
	RPC_STRUCT rpc;
	RPCRES_LONG * result = NULL ;
	long args_size = sizeof(SECURE_RPC_TOSYSTEM_GET_SETUP_PARAM );


	// if NONBLOCK_MODE, dont need to alloc memory
	if (clnt->sendMode & BLOCK_MODE) {
		result = (RPCRES_LONG *) malloc(sizeof(RPCRES_LONG ));
	}


	// prepare the RPC call structure
	// including programID, versionID, TaskID...
	rpc = prepareRPCCall(clnt, (int)result);


	if (client_call (&rpc, SECURE_RPC_ToSystem_GetSetupParameter, clnt->sendMode,
		(xdrproc_t) xdr_SECURE_RPC_TOSYSTEM_GET_SETUP_PARAM, (caddr_t) argp, args_size)
		!= RPC_SUCCESS) {
		if(result)
			free(result);
		return (RPCRES_LONG *)-1;
	}


	//for blocking use
	if (clnt->sendMode & BLOCK_MODE) {
		XDR xdrs;

		waitReply();
		xdrmem_create(&xdrs, (char *)result, sizeof(RPCRES_LONG), XDR_DECODE);
		 if(!xdr_RPCRES_LONG(&xdrs, result))
			 return (RPCRES_LONG *)-1;
		return result;
	}

	return 0;

}

HRESULT *
SECURE_RPC_ToSystem_SetParameter_0(SECURE_RPC_TOSYSTEM_SET_PARAM *argp, CLNT_STRUCT *clnt)
{
#if defined(ENABLE_RPC_PROXY_INIT_CHECK)
  #if 1 == BUILD_FOR_MACARTHUR3
  #pragma message( "BUILD_FOR_MACARTHUR3 is #define'd to 1" )
  #else
  #pragma message( "BUILD_FOR_MACARTHUR3 is #define'd to 0" )
  #endif
  #if 1 == BUILD_FOR_KCPU_COMMON
  #pragma message("BUILD_FOR_KCPU_COMMON is #define'd to 1" )
  #else
  #pragma message("BUILD_FOR_KCPU_COMMON is #define'd to 0" )
  #endif
  #if 1 == BUILD_FOR_MACARTHUR3 && 0 == BUILD_FOR_KCPU_COMMON
    //THIS IS COMPILED FOR SCPU
    extern int g_RPCProxyInitDone;
    if (0 == g_RPCProxyInitDone)
    {
        //while (1)
        //{
        //    printf ("g_RPCProxyInitDone not init to 1\n");
        //    sleep (1);
        //}
        initRPCProxy();
    }
  #endif
#endif //ENABLE_RPC_PROXY_INIT_CHECK
	RPC_STRUCT rpc;
	HRESULT * result = NULL ;
	long args_size = sizeof(SECURE_RPC_TOSYSTEM_SET_PARAM );


	// if NONBLOCK_MODE, dont need to alloc memory
	if (clnt->sendMode & BLOCK_MODE) {
		result = (HRESULT *) malloc(sizeof(HRESULT ));
	}


	// prepare the RPC call structure
	// including programID, versionID, TaskID...
	rpc = prepareRPCCall(clnt, (int)result);


	if (client_call (&rpc, SECURE_RPC_ToSystem_SetParameter, clnt->sendMode,
		(xdrproc_t) xdr_SECURE_RPC_TOSYSTEM_SET_PARAM, (caddr_t) argp, args_size)
		!= RPC_SUCCESS) {
		if(result)
			free(result);
		return (HRESULT *)-1;
	}


	//for blocking use
	if (clnt->sendMode & BLOCK_MODE) {
		XDR xdrs;

		waitReply();
		xdrmem_create(&xdrs, (char *)result, sizeof(HRESULT), XDR_DECODE);
		 if(!xdr_HRESULT(&xdrs, result))
			 return (HRESULT *)-1;
		return result;
	}

	return 0;

}

RPCRES_K_S *
SECURE_RPC_ToSystem_SendReadCommand_0(SECURE_RPC_TOSYSTEM_SEND_RW *argp, CLNT_STRUCT *clnt)
{
#if defined(ENABLE_RPC_PROXY_INIT_CHECK)
  #if 1 == BUILD_FOR_MACARTHUR3
  #pragma message( "BUILD_FOR_MACARTHUR3 is #define'd to 1" )
  #else
  #pragma message( "BUILD_FOR_MACARTHUR3 is #define'd to 0" )
  #endif
  #if 1 == BUILD_FOR_KCPU_COMMON
  #pragma message("BUILD_FOR_KCPU_COMMON is #define'd to 1" )
  #else
  #pragma message("BUILD_FOR_KCPU_COMMON is #define'd to 0" )
  #endif
  #if 1 == BUILD_FOR_MACARTHUR3 && 0 == BUILD_FOR_KCPU_COMMON
    //THIS IS COMPILED FOR SCPU
    extern int g_RPCProxyInitDone;
    if (0 == g_RPCProxyInitDone)
    {
        //while (1)
        //{
        //    printf ("g_RPCProxyInitDone not init to 1\n");
        //    sleep (1);
        //}
        initRPCProxy();
    }
  #endif
#endif //ENABLE_RPC_PROXY_INIT_CHECK
	RPC_STRUCT rpc;
	RPCRES_K_S * result = NULL ;
	long args_size = sizeof(SECURE_RPC_TOSYSTEM_SEND_RW );


	// if NONBLOCK_MODE, dont need to alloc memory
	if (clnt->sendMode & BLOCK_MODE) {
		result = (RPCRES_K_S *) malloc(sizeof(RPCRES_K_S ));
	}


	// prepare the RPC call structure
	// including programID, versionID, TaskID...
	rpc = prepareRPCCall(clnt, (int)result);


	if (client_call (&rpc, SECURE_RPC_ToSystem_SendReadCommand, clnt->sendMode,
		(xdrproc_t) xdr_SECURE_RPC_TOSYSTEM_SEND_RW, (caddr_t) argp, args_size)
		!= RPC_SUCCESS) {
		if(result)
			free(result);
		return (RPCRES_K_S *)-1;
	}


	//for blocking use
	if (clnt->sendMode & BLOCK_MODE) {
		XDR xdrs;

		waitReply();
		xdrmem_create(&xdrs, (char *)result, sizeof(RPCRES_K_S), XDR_DECODE);
		 if(!xdr_RPCRES_K_S(&xdrs, result))
			 return (RPCRES_K_S *)-1;
		return result;
	}

	return 0;

}

HRESULT *
SECURE_RPC_ToSystem_SendWriteCommand_0(SECURE_RPC_TOSYSTEM_SEND_RW *argp, CLNT_STRUCT *clnt)
{
#if defined(ENABLE_RPC_PROXY_INIT_CHECK)
  #if 1 == BUILD_FOR_MACARTHUR3
  #pragma message( "BUILD_FOR_MACARTHUR3 is #define'd to 1" )
  #else
  #pragma message( "BUILD_FOR_MACARTHUR3 is #define'd to 0" )
  #endif
  #if 1 == BUILD_FOR_KCPU_COMMON
  #pragma message("BUILD_FOR_KCPU_COMMON is #define'd to 1" )
  #else
  #pragma message("BUILD_FOR_KCPU_COMMON is #define'd to 0" )
  #endif
  #if 1 == BUILD_FOR_MACARTHUR3 && 0 == BUILD_FOR_KCPU_COMMON
    //THIS IS COMPILED FOR SCPU
    extern int g_RPCProxyInitDone;
    if (0 == g_RPCProxyInitDone)
    {
        //while (1)
        //{
        //    printf ("g_RPCProxyInitDone not init to 1\n");
        //    sleep (1);
        //}
        initRPCProxy();
    }
  #endif
#endif //ENABLE_RPC_PROXY_INIT_CHECK
	RPC_STRUCT rpc;
	HRESULT * result = NULL ;
	long args_size = sizeof(SECURE_RPC_TOSYSTEM_SEND_RW );


	// if NONBLOCK_MODE, dont need to alloc memory
	if (clnt->sendMode & BLOCK_MODE) {
		result = (HRESULT *) malloc(sizeof(HRESULT ));
	}


	// prepare the RPC call structure
	// including programID, versionID, TaskID...
	rpc = prepareRPCCall(clnt, (int)result);


	if (client_call (&rpc, SECURE_RPC_ToSystem_SendWriteCommand, clnt->sendMode,
		(xdrproc_t) xdr_SECURE_RPC_TOSYSTEM_SEND_RW, (caddr_t) argp, args_size)
		!= RPC_SUCCESS) {
		if(result)
			free(result);
		return (HRESULT *)-1;
	}


	//for blocking use
	if (clnt->sendMode & BLOCK_MODE) {
		XDR xdrs;

		waitReply();
		xdrmem_create(&xdrs, (char *)result, sizeof(HRESULT), XDR_DECODE);
		 if(!xdr_HRESULT(&xdrs, result))
			 return (HRESULT *)-1;
		return result;
	}

	return 0;

}

HRESULT *
SECURE_RPC_ToSystem_TvServerControl_0(SECURE_RPC_TOSYSTEM_TVSERVER_CTRL *argp, CLNT_STRUCT *clnt)
{
#if defined(ENABLE_RPC_PROXY_INIT_CHECK)
  #if 1 == BUILD_FOR_MACARTHUR3
  #pragma message( "BUILD_FOR_MACARTHUR3 is #define'd to 1" )
  #else
  #pragma message( "BUILD_FOR_MACARTHUR3 is #define'd to 0" )
  #endif
  #if 1 == BUILD_FOR_KCPU_COMMON
  #pragma message("BUILD_FOR_KCPU_COMMON is #define'd to 1" )
  #else
  #pragma message("BUILD_FOR_KCPU_COMMON is #define'd to 0" )
  #endif
  #if 1 == BUILD_FOR_MACARTHUR3 && 0 == BUILD_FOR_KCPU_COMMON
    //THIS IS COMPILED FOR SCPU
    extern int g_RPCProxyInitDone;
    if (0 == g_RPCProxyInitDone)
    {
        //while (1)
        //{
        //    printf ("g_RPCProxyInitDone not init to 1\n");
        //    sleep (1);
        //}
        initRPCProxy();
    }
  #endif
#endif //ENABLE_RPC_PROXY_INIT_CHECK
	RPC_STRUCT rpc;
	HRESULT * result = NULL ;
	long args_size = sizeof(SECURE_RPC_TOSYSTEM_TVSERVER_CTRL );


	// if NONBLOCK_MODE, dont need to alloc memory
	if (clnt->sendMode & BLOCK_MODE) {
		result = (HRESULT *) malloc(sizeof(HRESULT ));
	}


	// prepare the RPC call structure
	// including programID, versionID, TaskID...
	rpc = prepareRPCCall(clnt, (int)result);


	if (client_call (&rpc, SECURE_RPC_ToSystem_TvServerControl, clnt->sendMode,
		(xdrproc_t) xdr_SECURE_RPC_TOSYSTEM_TVSERVER_CTRL, (caddr_t) argp, args_size)
		!= RPC_SUCCESS) {
		if(result)
			free(result);
		return (HRESULT *)-1;
	}


	//for blocking use
	if (clnt->sendMode & BLOCK_MODE) {
		XDR xdrs;

		waitReply();
		xdrmem_create(&xdrs, (char *)result, sizeof(HRESULT), XDR_DECODE);
		 if(!xdr_HRESULT(&xdrs, result))
			 return (HRESULT *)-1;
		return result;
	}

	return 0;

}

HRESULT *
SECURE_RPC_ToSystem_OsdMsg_0(SECURE_RPC_TOSYSTEM_OSD_MSG *argp, CLNT_STRUCT *clnt)
{
#if defined(ENABLE_RPC_PROXY_INIT_CHECK)
  #if 1 == BUILD_FOR_MACARTHUR3
  #pragma message( "BUILD_FOR_MACARTHUR3 is #define'd to 1" )
  #else
  #pragma message( "BUILD_FOR_MACARTHUR3 is #define'd to 0" )
  #endif
  #if 1 == BUILD_FOR_KCPU_COMMON
  #pragma message("BUILD_FOR_KCPU_COMMON is #define'd to 1" )
  #else
  #pragma message("BUILD_FOR_KCPU_COMMON is #define'd to 0" )
  #endif
  #if 1 == BUILD_FOR_MACARTHUR3 && 0 == BUILD_FOR_KCPU_COMMON
    //THIS IS COMPILED FOR SCPU
    extern int g_RPCProxyInitDone;
    if (0 == g_RPCProxyInitDone)
    {
        //while (1)
        //{
        //    printf ("g_RPCProxyInitDone not init to 1\n");
        //    sleep (1);
        //}
        initRPCProxy();
    }
  #endif
#endif //ENABLE_RPC_PROXY_INIT_CHECK
	RPC_STRUCT rpc;
	HRESULT * result = NULL ;
	long args_size = sizeof(SECURE_RPC_TOSYSTEM_OSD_MSG );


	// if NONBLOCK_MODE, dont need to alloc memory
	if (clnt->sendMode & BLOCK_MODE) {
		result = (HRESULT *) malloc(sizeof(HRESULT ));
	}


	// prepare the RPC call structure
	// including programID, versionID, TaskID...
	rpc = prepareRPCCall(clnt, (int)result);


	if (client_call (&rpc, SECURE_RPC_ToSystem_OsdMsg, clnt->sendMode,
		(xdrproc_t) xdr_SECURE_RPC_TOSYSTEM_OSD_MSG, (caddr_t) argp, args_size)
		!= RPC_SUCCESS) {
		if(result)
			free(result);
		return (HRESULT *)-1;
	}


	//for blocking use
	if (clnt->sendMode & BLOCK_MODE) {
		XDR xdrs;

		waitReply();
		xdrmem_create(&xdrs, (char *)result, sizeof(HRESULT), XDR_DECODE);
		 if(!xdr_HRESULT(&xdrs, result))
			 return (HRESULT *)-1;
		return result;
	}

	return 0;

}

RPCRES_K_S *
SECURE_RPC_ToSystem_GetData_0(SECURE_RPC_TOSYSTEM_SET_PARAM *argp, CLNT_STRUCT *clnt)
{
#if defined(ENABLE_RPC_PROXY_INIT_CHECK)
  #if 1 == BUILD_FOR_MACARTHUR3
  #pragma message( "BUILD_FOR_MACARTHUR3 is #define'd to 1" )
  #else
  #pragma message( "BUILD_FOR_MACARTHUR3 is #define'd to 0" )
  #endif
  #if 1 == BUILD_FOR_KCPU_COMMON
  #pragma message("BUILD_FOR_KCPU_COMMON is #define'd to 1" )
  #else
  #pragma message("BUILD_FOR_KCPU_COMMON is #define'd to 0" )
  #endif
  #if 1 == BUILD_FOR_MACARTHUR3 && 0 == BUILD_FOR_KCPU_COMMON
    //THIS IS COMPILED FOR SCPU
    extern int g_RPCProxyInitDone;
    if (0 == g_RPCProxyInitDone)
    {
        //while (1)
        //{
        //    printf ("g_RPCProxyInitDone not init to 1\n");
        //    sleep (1);
        //}
        initRPCProxy();
    }
  #endif
#endif //ENABLE_RPC_PROXY_INIT_CHECK
	RPC_STRUCT rpc;
	RPCRES_K_S * result = NULL ;
	long args_size = sizeof(SECURE_RPC_TOSYSTEM_SET_PARAM );


	// if NONBLOCK_MODE, dont need to alloc memory
	if (clnt->sendMode & BLOCK_MODE) {
		result = (RPCRES_K_S *) malloc(sizeof(RPCRES_K_S ));
	}


	// prepare the RPC call structure
	// including programID, versionID, TaskID...
	rpc = prepareRPCCall(clnt, (int)result);


	if (client_call (&rpc, SECURE_RPC_ToSystem_GetData, clnt->sendMode,
		(xdrproc_t) xdr_SECURE_RPC_TOSYSTEM_SET_PARAM, (caddr_t) argp, args_size)
		!= RPC_SUCCESS) {
		if(result)
			free(result);
		return (RPCRES_K_S *)-1;
	}


	//for blocking use
	if (clnt->sendMode & BLOCK_MODE) {
		XDR xdrs;

		waitReply();
		xdrmem_create(&xdrs, (char *)result, sizeof(RPCRES_K_S), XDR_DECODE);
		 if(!xdr_RPCRES_K_S(&xdrs, result))
			 return (RPCRES_K_S *)-1;
		return result;
	}

	return 0;

}

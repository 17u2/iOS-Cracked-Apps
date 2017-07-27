//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MidasCommunicator : NSObject
{
}

- (void)report:(id)arg1 action:(id)arg2 resultInfoDict:(id)arg3 operation:(id)arg4;
- (void)reportCgiError:(id)arg1 action:(id)arg2 tag:(id)arg3 code:(long long)arg4 inner:(id)arg5 msg:(id)arg6 resultInfoDict:(id)arg7 operation:(id)arg8;
- (void)reportHttpError:(id)arg1 action:(id)arg2 tag:(id)arg3 code:(long long)arg4 operation:(id)arg5;
- (_Bool)isConcurrentTask:(unsigned long long)arg1;
- (_Bool)doCommParse:(id)arg1 resp:(id)arg2;
- (long long)parseCommResp:(id)arg1 resp:(id)arg2;
- (_Bool)onHttpResp:(id)arg1;
- (void)callGetIpList:(id)arg1 orderInfo:(id)arg2 netErr:(CDUnknownBlockType)arg3 err:(CDUnknownBlockType)arg4 succ:(CDUnknownBlockType)arg5;
- (void)callLogCgi:(id)arg1 orderInfo:(id)arg2 msg:(id)arg3 netErr:(CDUnknownBlockType)arg4 err:(CDUnknownBlockType)arg5 succ:(CDUnknownBlockType)arg6;
- (void)callMpInfoCgi:(id)arg1 netErr:(CDUnknownBlockType)arg2 err:(CDUnknownBlockType)arg3 succ:(CDUnknownBlockType)arg4;
- (void)callNetCgi:(id)arg1;
- (void)startReq:(unsigned long long)arg1 paramsContructor:(id)arg2 netErr:(CDUnknownBlockType)arg3 err:(CDUnknownBlockType)arg4 succ:(CDUnknownBlockType)arg5 parserBlock:(CDUnknownBlockType)arg6;
- (void)dealloc;
- (void)reportEmptyAppUserName:(_Bool)arg1 operation:(id)arg2;
- (void)callSecurityProcCgi:(id)arg1 identity:(id)arg2 netErr:(CDUnknownBlockType)arg3 err:(CDUnknownBlockType)arg4 succ:(CDUnknownBlockType)arg5;
- (void)callGetPayResult:(id)arg1 netErr:(CDUnknownBlockType)arg2 err:(CDUnknownBlockType)arg3 succ:(CDUnknownBlockType)arg4;
- (void)callOldCheckCgi:(id)arg1 transaction:(id)arg2 netErr:(CDUnknownBlockType)arg3 err:(CDUnknownBlockType)arg4 succ:(CDUnknownBlockType)arg5;
- (void)callCheckCgi:(id)arg1 netErr:(CDUnknownBlockType)arg2 err:(CDUnknownBlockType)arg3 succ:(CDUnknownBlockType)arg4;
- (void)callGetUserNameCgi:(id)arg1 netErr:(CDUnknownBlockType)arg2 err:(CDUnknownBlockType)arg3 succ:(CDUnknownBlockType)arg4;
- (void)callHBNetErr:(CDUnknownBlockType)arg1 err:(CDUnknownBlockType)arg2 succ:(CDUnknownBlockType)arg3;
- (void)callReportCgi:(id)arg1 netErr:(CDUnknownBlockType)arg2 err:(CDUnknownBlockType)arg3 succ:(CDUnknownBlockType)arg4;
- (void)callReprovideCgi:(id)arg1 transaction:(id)arg2 netErr:(CDUnknownBlockType)arg3 err:(CDUnknownBlockType)arg4 succ:(CDUnknownBlockType)arg5;
- (void)callReprovideCgi:(id)arg1 netErr:(CDUnknownBlockType)arg2 err:(CDUnknownBlockType)arg3 succ:(CDUnknownBlockType)arg4;
- (void)callProvideCgi:(id)arg1 netErr:(CDUnknownBlockType)arg2 err:(CDUnknownBlockType)arg3 succ:(CDUnknownBlockType)arg4;
- (void)callOrderCgi:(id)arg1 netErr:(CDUnknownBlockType)arg2 err:(CDUnknownBlockType)arg3 succ:(CDUnknownBlockType)arg4;
- (void)callGetConfigCgi:(id)arg1 cmd:(id)arg2 netErr:(CDUnknownBlockType)arg3 err:(CDUnknownBlockType)arg4 succ:(CDUnknownBlockType)arg5;

@end

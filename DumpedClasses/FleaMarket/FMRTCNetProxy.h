//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FMRTCNetDelegate.h"

@class NSString;

@interface FMRTCNetProxy : NSObject <FMRTCNetDelegate>
{
}

+ (void)sendReq:(id)arg1 withCallBack:(CDUnknownBlockType)arg2;
+ (id)shareInstance;
- (void)rtcOperation:(id)arg1 sessionID:(id)arg2 roomID:(id)arg3 rtcType:(int)arg4 callBack:(CDUnknownBlockType)arg5;
- (void)rtcLogQuality:(id)arg1 roomID:(id)arg2 meCaller:(_Bool)arg3 startTimeStamp:(unsigned long long)arg4 callBack:(CDUnknownBlockType)arg5;
- (void)rtcLog:(id)arg1 sessionID:(id)arg2 roomID:(id)arg3 rtcType:(int)arg4 networkType:(id)arg5 callBack:(CDUnknownBlockType)arg6;
- (void)rtcTypeSwitch:(id)arg1 roomID:(id)arg2 rtcType:(int)arg3 callBack:(CDUnknownBlockType)arg4;
- (void)refuseInvite:(id)arg1 roomID:(id)arg2 rejectType:(int)arg3 rtcType:(int)arg4 callBack:(CDUnknownBlockType)arg5;
- (void)sendICEMessage:(id)arg1 token:(id)arg2 sessionID:(id)arg3 roomID:(id)arg4 callBack:(CDUnknownBlockType)arg5;
- (void)leaveRoom:(id)arg1 roomID:(id)arg2 rtcType:(int)arg3 leaveType:(int)arg4 callBack:(CDUnknownBlockType)arg5;
- (void)joinRoom:(id)arg1 sessionID:(id)arg2 roomID:(id)arg3 rtcType:(int)arg4 callBack:(CDUnknownBlockType)arg5;
- (void)createRoom:(int)arg1 sessionID:(id)arg2 rtcType:(int)arg3 roomID:(id)arg4 callBack:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

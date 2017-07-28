//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDelegate.h"

@class AFNetworkReachabilityManager, NSFileHandle, NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSOperationQueue, NSString, NSURLSession;

@interface NVMTrackWorker : NSObject <NSURLSessionDelegate>
{
    _Bool _debugMode;
    _Bool _isDeviceInfoLogged;
    _Bool _reachable;
    unsigned long long _batchSize;
    unsigned long long _trackPolicy;
    long long _logCount;
    NSFileHandle *_fileHandle;
    NSString *_currentTrackFilePath;
    NSMutableArray *_failFilePaths;
    AFNetworkReachabilityManager *_reachability;
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_queue> *_workerQueue;
    NSOperationQueue *_sendQueue;
    NSURLSession *_realTimeSession;
}

+ (void)logSuccessFileCount;
+ (void)logSendFileCount;
+ (void)logFileCount;
+ (void)logWriteCount;
+ (void)logTrackCount;
+ (void)postContent:(id)arg1 gzip:(_Bool)arg2 fileName:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)fileHandleAtPath:(id)arg1;
+ (_Bool)fileExistsAtPath:(id)arg1;
+ (void)removeLogFileAtPath:(id)arg1;
+ (void)removeLogFiles;
+ (id)pathsForLogFiles;
+ (id)pathForLogFileWithFileName:(id)arg1;
+ (id)pathForLogFile:(double)arg1;
+ (void)writeLogData:(id)arg1;
+ (void)batchTrackContent:(id)arg1;
+ (void)trackContent:(id)arg1;
+ (id)sharedWorker;
@property(retain, nonatomic) NSURLSession *realTimeSession; // @synthesize realTimeSession=_realTimeSession;
@property(retain, nonatomic) NSOperationQueue *sendQueue; // @synthesize sendQueue=_sendQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workerQueue; // @synthesize workerQueue=_workerQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool reachable; // @synthesize reachable=_reachable;
@property(retain, nonatomic) AFNetworkReachabilityManager *reachability; // @synthesize reachability=_reachability;
@property(retain, nonatomic) NSMutableArray *failFilePaths; // @synthesize failFilePaths=_failFilePaths;
@property(retain, nonatomic) NSString *currentTrackFilePath; // @synthesize currentTrackFilePath=_currentTrackFilePath;
@property(retain, nonatomic) NSFileHandle *fileHandle; // @synthesize fileHandle=_fileHandle;
@property(nonatomic) long long logCount; // @synthesize logCount=_logCount;
@property(nonatomic) _Bool isDeviceInfoLogged; // @synthesize isDeviceInfoLogged=_isDeviceInfoLogged;
@property(nonatomic, getter=isDebugMode) _Bool debugMode; // @synthesize debugMode=_debugMode;
@property(nonatomic) unsigned long long trackPolicy; // @synthesize trackPolicy=_trackPolicy;
@property(nonatomic) unsigned long long batchSize; // @synthesize batchSize=_batchSize;
- (void).cxx_destruct;
- (void)dealloc;
- (id)currentServerURLString;
- (id)requestURLString;
- (void)postContent:(id)arg1 gzip:(_Bool)arg2 fileName:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)realTimeSendDeviceInfo:(id)arg1 retryCount:(long long)arg2;
- (void)realTimeSendDeviceInfo;
- (void)realTimeSendLogToServer:(id)arg1;
- (void)realTimeTrackContent:(id)arg1;
- (void)logDeviceInfo;
- (void)sendLogToServer:(id)arg1;
- (void)batchTrackWork:(id)arg1;
- (void)sendAllLogFiles;
- (void)changeEnvironement;
- (void)handleAppTerminateNotification;
- (void)addNotification;
- (CDUnknownBlockType)trackWorkBlock;
- (void)setUpTimer;
- (void)startNotifier;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

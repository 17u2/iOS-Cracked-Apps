//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString;
@protocol OS_dispatch_queue;

@interface APCacheCounter : NSObject
{
    _Bool _isNetData;
    long long _memHitTotalCount;
    double _memHitTotalTimeInterval;
    long long _memNotHitTotalCount;
    double _memNotHitTotalTimeInterval;
    long long _diskHitTotalCount;
    double _diskHitTotalTimeInterval;
    long long _diskNotHitTotalCount;
    double _diskNotHitTotalTimeInterval;
    long long _dbHitTotalCount;
    double _dbHitTotalTimeInterval;
    long long _dbNotHitTotalCount;
    double _dbNotHitTotalTimeInterval;
    long long _storeResult;
    long long _dataSize;
    NSString *_business;
    NSString *_type;
    NSError *_error;
    long long _hitCachesTimeInterval;
    long long _storeCachesTimeInterval;
    NSObject<OS_dispatch_queue> *_logRequeue;
    double _lastHitCacheLogDate;
    double _lastStoreCacheLogDate;
}

@property(nonatomic) double lastStoreCacheLogDate; // @synthesize lastStoreCacheLogDate=_lastStoreCacheLogDate;
@property(nonatomic) double lastHitCacheLogDate; // @synthesize lastHitCacheLogDate=_lastHitCacheLogDate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *logRequeue; // @synthesize logRequeue=_logRequeue;
@property(nonatomic) long long storeCachesTimeInterval; // @synthesize storeCachesTimeInterval=_storeCachesTimeInterval;
@property(nonatomic) long long hitCachesTimeInterval; // @synthesize hitCachesTimeInterval=_hitCachesTimeInterval;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *business; // @synthesize business=_business;
@property(readonly, nonatomic) _Bool isNetData; // @synthesize isNetData=_isNetData;
@property(readonly, nonatomic) long long dataSize; // @synthesize dataSize=_dataSize;
@property(readonly, nonatomic) long long storeResult; // @synthesize storeResult=_storeResult;
@property(nonatomic) double dbNotHitTotalTimeInterval; // @synthesize dbNotHitTotalTimeInterval=_dbNotHitTotalTimeInterval;
@property(nonatomic) long long dbNotHitTotalCount; // @synthesize dbNotHitTotalCount=_dbNotHitTotalCount;
@property(nonatomic) double dbHitTotalTimeInterval; // @synthesize dbHitTotalTimeInterval=_dbHitTotalTimeInterval;
@property(nonatomic) long long dbHitTotalCount; // @synthesize dbHitTotalCount=_dbHitTotalCount;
@property(nonatomic) double diskNotHitTotalTimeInterval; // @synthesize diskNotHitTotalTimeInterval=_diskNotHitTotalTimeInterval;
@property(nonatomic) long long diskNotHitTotalCount; // @synthesize diskNotHitTotalCount=_diskNotHitTotalCount;
@property(nonatomic) double diskHitTotalTimeInterval; // @synthesize diskHitTotalTimeInterval=_diskHitTotalTimeInterval;
@property(nonatomic) long long diskHitTotalCount; // @synthesize diskHitTotalCount=_diskHitTotalCount;
@property(nonatomic) double memNotHitTotalTimeInterval; // @synthesize memNotHitTotalTimeInterval=_memNotHitTotalTimeInterval;
@property(nonatomic) long long memNotHitTotalCount; // @synthesize memNotHitTotalCount=_memNotHitTotalCount;
@property(nonatomic) double memHitTotalTimeInterval; // @synthesize memHitTotalTimeInterval=_memHitTotalTimeInterval;
@property(nonatomic) long long memHitTotalCount; // @synthesize memHitTotalCount=_memHitTotalCount;
- (void).cxx_destruct;
- (void)logCacheStore;
- (void)logCacheCounter;
- (void)reset;
- (void)storeCacheRecord:(_Bool)arg1 type:(unsigned long long)arg2 object:(id)arg3 isNetData:(_Bool)arg4 business:(id)arg5 error:(id)arg6;
- (void)hitCache:(_Bool)arg1 type:(unsigned long long)arg2 timeInterval:(double)arg3;
- (id)initWithLogHitCacheTimeInterval:(long long)arg1 StoreCacheTimeInterval:(long long)arg2;
- (id)init;

@end


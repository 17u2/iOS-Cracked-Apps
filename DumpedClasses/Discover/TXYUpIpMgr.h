//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface TXYUpIpMgr : NSObject
{
    NSMutableArray *ipList;
    long long ipIndex;
    NSMutableArray *_badIpList;
    NSMutableArray *_badPortList;
    _Bool _bTestEnv;
    NSMutableDictionary *cacheData;
}

+ (id)instance;
@property _Bool bTestEnv; // @synthesize bTestEnv=_bTestEnv;
@property(retain) NSMutableDictionary *cacheData; // @synthesize cacheData;
@property long long ipIndex; // @synthesize ipIndex;
@property(retain) NSMutableArray *ipList; // @synthesize ipList;
- (void).cxx_destruct;
- (_Bool)isInBadIpList:(id)arg1;
- (void)removeBadIpList:(id)arg1;
- (void)addBadIpList:(id)arg1;
- (void)removeLatestIp:(id)arg1;
- (void)updateLatestIp:(id)arg1;
- (void)update:(id)arg1 result:(long long)arg2 domainIp:(id)arg3;
- (id)getIp;
- (void)restLatestIpWhenEnvirChanged;
- (void)reset;
- (void)initIPList:(id)arg1 latestIpList:(id)arg2;
- (void)updateDomainIP:(id)arg1;
- (void)refreshLatestIp;
- (id)getIpList:(id)arg1 iptype:(int)arg2 apn:(int)arg3 existIpList:(id)arg4 domain:(id)arg5;
- (id)backupDomainIP;
- (id)domainName;
- (id)getFileTypeKey;
- (void)load;
- (_Bool)didTestEnviromentLoaded;
- (id)latestIpPath;
- (id)getLatestApnKey;
- (id)getLatestIpDict;
- (void)closeTestEnviroment;
- (void)openTestEnviroment;
- (_Bool)testEnviromentIsOpen;
- (void)switchToTestIP;
- (void)removeBlackListConfig;
- (void)initBlackListConfig;
- (void)writeToFile;
- (void)removeDataForKey:(id)arg1;
- (void)setDataForKey:(id)arg1 data:(id)arg2;
- (id)getBackupIpListNotIn:(id)arg1 apn:(int)arg2;
- (id)getIpByDomain;
- (id)init;

@end

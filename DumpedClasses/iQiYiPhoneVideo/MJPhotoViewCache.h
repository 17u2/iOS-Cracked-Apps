//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MJCacheProtocol-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface MJPhotoViewCache : NSObject <MJCacheProtocol>
{
    NSMutableDictionary *_dic;
    NSMutableArray *_cacheList;
}

- (void).cxx_destruct;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


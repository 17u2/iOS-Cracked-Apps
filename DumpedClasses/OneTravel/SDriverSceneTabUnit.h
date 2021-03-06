//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSceneTabCom.h"

#import "SMapDelegate.h"

@class NSString;

@interface SDriverSceneTabUnit : SSceneTabCom <SMapDelegate>
{
    long long _lastType;
}

@property(nonatomic) long long lastType; // @synthesize lastType=_lastType;
- (_Bool)willSelectItemWithModel:(id)arg1;
- (_Bool)willSelectItemAtIndex:(unsigned long long)arg1;
- (_Bool)selectTabWithType:(long long)arg1;
- (_Bool)enableRemote;
- (id)initWithDataSource:(id)arg1 config:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


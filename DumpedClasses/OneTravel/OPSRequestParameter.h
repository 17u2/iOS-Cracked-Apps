//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface OPSRequestParameter : NSObject
{
    NSString *_phoneNumber;
    long long _hostAppType;
    NSString *_scene;
}

@property(copy, nonatomic) NSString *scene; // @synthesize scene=_scene;
@property(nonatomic) long long hostAppType; // @synthesize hostAppType=_hostAppType;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
- (void).cxx_destruct;

@end


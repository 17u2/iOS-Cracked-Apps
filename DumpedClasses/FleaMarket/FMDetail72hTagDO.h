//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FMDetail72hTagDO : NSObject
{
    int _serviceStatus;
    NSString *_serviceIcon;
    long long _leftSecond;
    NSString *_sellerId;
}

@property(retain, nonatomic) NSString *sellerId; // @synthesize sellerId=_sellerId;
@property(nonatomic) long long leftSecond; // @synthesize leftSecond=_leftSecond;
@property(nonatomic) int serviceStatus; // @synthesize serviceStatus=_serviceStatus;
@property(retain, nonatomic) NSString *serviceIcon; // @synthesize serviceIcon=_serviceIcon;
- (void).cxx_destruct;
- (_Bool)isSeller;

@end

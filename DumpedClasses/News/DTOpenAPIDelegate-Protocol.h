//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DTBaseReq, DTBaseResp;

@protocol DTOpenAPIDelegate <NSObject>

@optional
- (void)onResp:(DTBaseResp *)arg1;
- (void)onReq:(DTBaseReq *)arg1;
@end

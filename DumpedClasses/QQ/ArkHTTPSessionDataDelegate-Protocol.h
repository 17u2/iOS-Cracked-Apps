//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ArkHTTPSessionDelegate.h"

@class ArkHTTPSession, ArkHTTPSessionTask, NSData;

@protocol ArkHTTPSessionDataDelegate <ArkHTTPSessionDelegate>

@optional
- (void)URLSession:(ArkHTTPSession *)arg1 dataTask:(ArkHTTPSessionTask *)arg2 didReceiveData:(NSData *)arg3 totalBytesReceived:(long long)arg4 totalBytesExpectedToReceive:(long long)arg5;
@end

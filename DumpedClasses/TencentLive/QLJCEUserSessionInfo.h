//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class QLJCESessionPublicInfo, QLJCEUserInfo;

@interface QLJCEUserSessionInfo : JceObjectV2
{
    QLJCESessionPublicInfo *jcev2_p_0_r_publicInfo;
    QLJCEUserInfo *jcev2_p_1_r_userInfo;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_userInfo, setter=setJce_userInfo:) QLJCEUserInfo *jcev2_p_1_r_userInfo; // @synthesize jcev2_p_1_r_userInfo;
@property(retain, nonatomic, getter=jce_publicInfo, setter=setJce_publicInfo:) QLJCESessionPublicInfo *jcev2_p_0_r_publicInfo; // @synthesize jcev2_p_0_r_publicInfo;
- (void).cxx_destruct;
- (id)init;

@end

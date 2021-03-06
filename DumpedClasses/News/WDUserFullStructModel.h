//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WDBaseModel.h"

@class NSNumber<Optional>, NSString, NSString<Optional>;

@interface WDUserFullStructModel : WDBaseModel
{
    NSString *_user_id;
    NSString *_uname;
    NSString<Optional> *_user_intro;
    NSString *_avatar_url;
    NSNumber<Optional> *_is_verify;
    NSString<Optional> *_user_schema;
    NSString<Optional> *_v_icon;
    NSString<Optional> *_user_honor;
    NSNumber<Optional> *_is_followed;
    NSNumber<Optional> *_is_following;
    NSNumber<Optional> *_is_blocking;
    NSNumber<Optional> *_is_blocked;
}

@property(retain, nonatomic) NSNumber<Optional> *is_blocked; // @synthesize is_blocked=_is_blocked;
@property(retain, nonatomic) NSNumber<Optional> *is_blocking; // @synthesize is_blocking=_is_blocking;
@property(retain, nonatomic) NSNumber<Optional> *is_following; // @synthesize is_following=_is_following;
@property(retain, nonatomic) NSNumber<Optional> *is_followed; // @synthesize is_followed=_is_followed;
@property(retain, nonatomic) NSString<Optional> *user_honor; // @synthesize user_honor=_user_honor;
@property(retain, nonatomic) NSString<Optional> *v_icon; // @synthesize v_icon=_v_icon;
@property(retain, nonatomic) NSString<Optional> *user_schema; // @synthesize user_schema=_user_schema;
@property(retain, nonatomic) NSNumber<Optional> *is_verify; // @synthesize is_verify=_is_verify;
@property(retain, nonatomic) NSString *avatar_url; // @synthesize avatar_url=_avatar_url;
@property(retain, nonatomic) NSString<Optional> *user_intro; // @synthesize user_intro=_user_intro;
@property(retain, nonatomic) NSString *uname; // @synthesize uname=_uname;
@property(retain, nonatomic) NSString *user_id; // @synthesize user_id=_user_id;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end


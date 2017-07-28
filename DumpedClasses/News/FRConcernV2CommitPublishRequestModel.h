//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTRequestModel.h"

@class NSNumber<Optional>, NSString, NSString<Optional>;

@interface FRConcernV2CommitPublishRequestModel : TTRequestModel
{
    NSString *_content;
    NSString *_concern_id;
    NSString<Optional> *_image_uris;
    NSNumber<Optional> *_longitude;
    NSNumber<Optional> *_latitude;
    NSString<Optional> *_city;
    NSString<Optional> *_detail_pos;
    NSNumber<Optional> *_is_forward;
    NSString<Optional> *_phone;
    NSString<Optional> *_title;
    long long _from_where;
    NSNumber<Optional> *_score;
    NSString<Optional> *_category_id;
    NSNumber<Optional> *_enter_from;
}

@property(retain, nonatomic) NSNumber<Optional> *enter_from; // @synthesize enter_from=_enter_from;
@property(retain, nonatomic) NSString<Optional> *category_id; // @synthesize category_id=_category_id;
@property(retain, nonatomic) NSNumber<Optional> *score; // @synthesize score=_score;
@property(nonatomic) long long from_where; // @synthesize from_where=_from_where;
@property(retain, nonatomic) NSString<Optional> *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString<Optional> *phone; // @synthesize phone=_phone;
@property(retain, nonatomic) NSNumber<Optional> *is_forward; // @synthesize is_forward=_is_forward;
@property(retain, nonatomic) NSString<Optional> *detail_pos; // @synthesize detail_pos=_detail_pos;
@property(retain, nonatomic) NSString<Optional> *city; // @synthesize city=_city;
@property(retain, nonatomic) NSNumber<Optional> *latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) NSNumber<Optional> *longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSString<Optional> *image_uris; // @synthesize image_uris=_image_uris;
@property(retain, nonatomic) NSString *concern_id; // @synthesize concern_id=_concern_id;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (id)_requestParams;
- (id)init;

@end

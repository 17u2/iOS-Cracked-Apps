//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface IQYWalletQueryData : NSObject
{
    NSArray *_rows;
    NSString *_page;
    NSString *_total;
}

+ (id)parseForArray:(id)arg1;
@property(retain, nonatomic) NSString *total; // @synthesize total=_total;
@property(retain, nonatomic) NSString *page; // @synthesize page=_page;
@property(retain, nonatomic) NSArray *rows; // @synthesize rows=_rows;
- (void).cxx_destruct;
- (id)description;
- (void)buildWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFCompoundResponseSerializer.h"

@class AFJSONResponseSerializer, NSMutableDictionary;

@interface XYRKCompoundResponseSerializer : AFCompoundResponseSerializer
{
    AFJSONResponseSerializer *_defaultSerializer;
    NSMutableDictionary *_serializersDict;
}

@property(retain, nonatomic) NSMutableDictionary *serializersDict; // @synthesize serializersDict=_serializersDict;
@property(retain, nonatomic) AFJSONResponseSerializer *defaultSerializer; // @synthesize defaultSerializer=_defaultSerializer;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)responseObjectForResponse:(id)arg1 data:(id)arg2 error:(id *)arg3;
- (id)responseSerializers;
- (void)registerResponseSerializer:(id)arg1 withTask:(id)arg2;
- (id)init;

@end


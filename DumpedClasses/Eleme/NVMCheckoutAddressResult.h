//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMModel.h"

@class NSArray;

@interface NVMCheckoutAddressResult : NVMModel
{
    _Bool _isCredible;
    NSArray *_suggestPois;
    double _correctedLatitude;
    double _correctedLongtitude;
}

+ (id)suggestPoisJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) double correctedLongtitude; // @synthesize correctedLongtitude=_correctedLongtitude;
@property(nonatomic) double correctedLatitude; // @synthesize correctedLatitude=_correctedLatitude;
@property(copy, nonatomic) NSArray *suggestPois; // @synthesize suggestPois=_suggestPois;
@property(nonatomic) _Bool isCredible; // @synthesize isCredible=_isCredible;
- (void).cxx_destruct;

@end

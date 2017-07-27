//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

#import "NSCopying.h"

@class NSArray, NSMutableArray, NSString;

@interface QQARConfigModel : QQModel <NSCopying>
{
    unsigned long long _versionID;
    NSString *_osId;
    NSMutableArray *_arFeatureModels;
    NSMutableArray *_arModelResModels;
    _Bool _isCloudModel;
    NSArray *_arFragmentModels;
}

+ (_Bool)contain3DModel:(id)arg1 resModels:(id)arg2;
+ (id)containFeatureModel:(id)arg1 featureModels:(id)arg2;
@property _Bool isCloudModel; // @synthesize isCloudModel=_isCloudModel;
@property(copy) NSArray *arFragmentModels; // @synthesize arFragmentModels=_arFragmentModels;
@property(copy) NSArray *arModelResModels; // @synthesize arModelResModels=_arModelResModels;
@property(copy) NSArray *arFeatureModels; // @synthesize arFeatureModels=_arFeatureModels;
@property(copy) NSString *osId; // @synthesize osId=_osId;
@property unsigned long long versionID; // @synthesize versionID=_versionID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

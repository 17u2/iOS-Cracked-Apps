//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ExploreVideoDetailMixedLargePicADView.h"

@class SSThemedButton;

@interface ExploreVideoDetailAppLargePicADView : ExploreVideoDetailMixedLargePicADView
{
    SSThemedButton *_downloadButton;
}

+ (double)heightForADModel:(id)arg1 constrainedToWidth:(double)arg2;
+ (void)load;
@property(retain, nonatomic) SSThemedButton *downloadButton; // @synthesize downloadButton=_downloadButton;
- (void).cxx_destruct;
- (id)dislikeImageName;
- (id)sourceLabel;
- (id)titleLabel;
- (void)_downloadAppActionFired:(id)arg1;
- (void)layoutVideo:(id)arg1;
- (void)setAdModel:(id)arg1;
- (id)initWithWidth:(double)arg1;

@end

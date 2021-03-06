//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "iCarouselDataSource.h"

@class FXLiveBannerView, NSArray, NSString;

@interface FXLiveBannerVLL : NSObject <iCarouselDataSource>
{
    _Bool _isBannerRequesting;
    _Bool _isSuccessRequest;
    FXLiveBannerView *_view;
    CDUnknownBlockType _bannerTouch;
    NSArray *_allTopicArray;
}

@property(nonatomic) _Bool isSuccessRequest; // @synthesize isSuccessRequest=_isSuccessRequest;
@property _Bool isBannerRequesting; // @synthesize isBannerRequesting=_isBannerRequesting;
@property(retain, nonatomic) NSArray *allTopicArray; // @synthesize allTopicArray=_allTopicArray;
@property(copy, nonatomic) CDUnknownBlockType bannerTouch; // @synthesize bannerTouch=_bannerTouch;
@property(retain, nonatomic) FXLiveBannerView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)refreshBanner:(CDUnknownBlockType)arg1;
- (void)setNeedsRefresh:(CDUnknownBlockType)arg1;
- (void)bannerTouched:(long long)arg1;
- (id)carousel:(id)arg1 viewForItemAtIndex:(unsigned long long)arg2 reusingView:(id)arg3;
- (unsigned long long)numberOfItemsInCarousel:(id)arg1;
- (void)configData;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


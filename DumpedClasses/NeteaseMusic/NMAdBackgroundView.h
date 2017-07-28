//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "NMAdSkipButtonDelegate.h"
#import "NMVideoAdViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NMAdSkipButton, NMAdvertisement, NMVideoAdView, NSString, UIActivityIndicatorView, UIImageView, UITapGestureRecognizer;

@interface NMAdBackgroundView : UIView <UIGestureRecognizerDelegate, NMVideoAdViewDelegate, NMAdSkipButtonDelegate>
{
    UIImageView *_bgImageView;
    UIImageView *_bottomImageView;
    NMAdSkipButton *_skipButton;
    NMVideoAdView *_videoAdView;
    UITapGestureRecognizer *_clickTap;
    NMAdvertisement *_adInfo;
    NSString *_actionUrl;
    NSString *_adSourceUrl;
    UIActivityIndicatorView *_waitingView;
    _Bool _needShowActivity;
    id <NMAdBackgroundDelegate> _delegate;
}

+ (void)addStartupBILogForAction:(id)arg1 actionUrl:(id)arg2 adId:(id)arg3;
@property(nonatomic) _Bool needShowActivity; // @synthesize needShowActivity=_needShowActivity;
@property(nonatomic) __weak id <NMAdBackgroundDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)skipButtonFinishCountingDown:(id)arg1;
- (void)skipButtonClicked:(id)arg1;
- (void)videoAdViewTapped:(id)arg1;
- (void)videoAdViewSkipAd:(id)arg1;
- (void)videoAdDidFinishShowing:(id)arg1;
- (void)finishShowingAd;
- (void)skipAd;
- (void)adBackgroundViewTapped:(id)arg1;
- (long long)formatAdDuration:(double)arg1;
- (void)downloadBgImageWithUrl:(id)arg1 placeHolderImage:(id)arg2;
- (_Bool)showVideoAdView;
- (_Bool)showAdView:(_Bool)arg1;
- (_Bool)showAd:(_Bool)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

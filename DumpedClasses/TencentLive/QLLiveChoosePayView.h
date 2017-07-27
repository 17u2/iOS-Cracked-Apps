//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "QLChoosePayDelegate.h"
#import "QLPayTopDelegate.h"

@class NSString, QLLiveChoosePayBottomView, QLLiveChoosePayTopView;

@interface QLLiveChoosePayView : UIView <QLChoosePayDelegate, QLPayTopDelegate>
{
    id <QLLiveChoosePayDelegate> _delegate;
    QLLiveChoosePayTopView *_topView;
    QLLiveChoosePayBottomView *_bottomView;
}

@property(retain, nonatomic) QLLiveChoosePayBottomView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) QLLiveChoosePayTopView *topView; // @synthesize topView=_topView;
@property(nonatomic) id <QLLiveChoosePayDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)loginClick:(id)arg1;
- (void)buttonAction:(id)arg1;
- (void)configRightButton:(id)arg1 withTag:(long long)arg2;
- (void)configLeftButton:(id)arg1 withTag:(long long)arg2;
- (void)setPosterImage:(id)arg1 sponsorImage:(id)arg2 title:(id)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

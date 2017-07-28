//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSThemedView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, SSThemedLabel;

@interface WDDetailTitleView : SSThemedView <UIGestureRecognizerDelegate>
{
    _Bool _isShow;
    _Bool _isAnimating;
    SSThemedLabel *_titleLabel;
    CDUnknownBlockType _titleViewTapHandler;
    NSString *_title;
}

@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(copy, nonatomic) CDUnknownBlockType titleViewTapHandler; // @synthesize titleViewTapHandler=_titleViewTapHandler;
@property(retain, nonatomic) SSThemedLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
- (void).cxx_destruct;
- (void)show:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)setTitleAlpha:(double)arg1;
- (void)clickTitleView:(id)arg1;
- (void)setTapHandler:(CDUnknownBlockType)arg1;
- (id)attributeTitleWith:(id)arg1;
- (void)updateNavigationTitle:(id)arg1;
- (void)refreshUI;
- (void)layoutSubviews;
- (void)reload;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

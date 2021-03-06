//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBMBDefaultRootViewController.h"

#import "FMBaseBarViewDelegate.h"

@class FMBaseBarView, FMBaseBarViewDO, NSString, UIButton;

@interface FMBaseViewController : TBMBDefaultRootViewController <FMBaseBarViewDelegate>
{
    FMBaseBarViewDO *_barViewDO;
    FMBaseBarView *_titleView;
    _Bool _titleViewHide;
}

@property(nonatomic) _Bool titleViewHide; // @synthesize titleViewHide=_titleViewHide;
@property(readonly, nonatomic) __weak FMBaseBarView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) FMBaseBarViewDO *barViewDO; // @synthesize barViewDO=_barViewDO;
- (void).cxx_destruct;
- (void)pushViewControllerWithLogin:(id)arg1 animated:(_Bool)arg2 withUINavigationController:(id)arg3;
- (void)pushViewControllerWithLogin:(id)arg1 animated:(_Bool)arg2;
- (void)rightExtraAction:(id)arg1;
- (void)rightAction:(id)arg1;
- (void)leftAction:(id)arg1;
- (void)onRightExtraButtonPressed:(id)arg1;
- (void)onLeftButtonPressed:(id)arg1;
- (void)onRightButtonPressed:(id)arg1;
- (void)setTitleBg:(int)arg1;
- (id)getTitle;
- (void)setTitleIcon:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)setLeftBarButtonTitle:(id)arg1 buttonType:(int)arg2 iconImage:(id)arg3;
- (void)setLeftButtonSelectIconImage:(id)arg1;
- (void)setLeftButtonIconImage:(id)arg1;
- (void)setRightExtraButtonWithIconImage:(id)arg1;
- (void)setRightButtonTitle:(id)arg1 rightButtonType:(int)arg2 iconImage:(id)arg3;
- (void)setRightButtonSelectIconImage:(id)arg1;
- (void)setRightButtonIconImage:(id)arg1;
- (void)setRightButtonTitle:(id)arg1 rightButtonType:(int)arg2;
- (void)setRightButtonTitle:(id)arg1;
@property(readonly, nonatomic) __weak UIButton *rightBarButton;
@property(readonly, nonatomic) __weak UIButton *leftBarButton;
- (void)dealloc;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)baseScrollView:(id)arg1;
- (_Bool)isShadowShowWithOffset:(struct CGPoint)arg1 edges:(double)arg2;
- (void)scrollViewDidOffset:(struct CGPoint)arg1 edges:(double)arg2;
- (id)scrollViewForShadow;
- (void)bindScrollView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


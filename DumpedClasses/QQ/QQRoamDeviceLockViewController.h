//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQBaseDeviceProtectTipsViewController.h"

@class NSString;

@interface QQRoamDeviceLockViewController : QQBaseDeviceProtectTipsViewController
{
    NSString *_sppkey;
    id <QQRoamDeviceLockViewdelegate> _delegate;
    _Bool _hasCancel;
}

@property(nonatomic) _Bool hasCancel; // @synthesize hasCancel=_hasCancel;
- (void).cxx_destruct;
- (void)attributedLabel:(id)arg1 didSelectTextCheckingResult:(id)arg2 atPoint:(struct CGPoint)arg3;
- (void)onRightButtonClicked:(id)arg1;
- (void)startButtonClicked;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)getRightBtnText;
- (void)setRoamLockDelegate:(id)arg1;
- (id)init;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSTimer, UILabel;

@interface QLPopView : UIView
{
    NSTimer *timer;
    UILabel *_label;
}

@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)viewHidden:(_Bool)arg1 animate:(_Bool)arg2;
- (void)fireOfStatus:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

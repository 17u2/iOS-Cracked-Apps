//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UserSummaryBaseCell.h"

@class UIImageView, UILabel;

@interface UserSummaryMobileExpertCell : UserSummaryBaseCell
{
    UIImageView *_iconImageView;
    UILabel *_daysLabel;
    int _mobileExpertDays;
    _Bool _mobileExpertActive;
    _Bool _mobileExpertDaysShow;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
@property(nonatomic) _Bool mobileExpertActive; // @dynamic mobileExpertActive;
@property(nonatomic) _Bool mobileExpertDaysShow; // @dynamic mobileExpertDaysShow;
@property(nonatomic) int mobileExpertDays; // @dynamic mobileExpertDays;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(retain, nonatomic) UILabel *daysLabel; // @dynamic daysLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @dynamic iconImageView;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSThemedView.h"

@class SSThemedButton, SSThemedLabel, WDVerticalSearchViewModel;

@interface WDVerticalSearchEmptyHintView : SSThemedView
{
    WDVerticalSearchViewModel *_viewModel;
    SSThemedLabel *_titleLabel;
    SSThemedButton *_postQuestionButton;
}

@property(retain, nonatomic) SSThemedButton *postQuestionButton; // @synthesize postQuestionButton=_postQuestionButton;
@property(retain, nonatomic) SSThemedLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) WDVerticalSearchViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)postQuestion:(id)arg1;
- (struct CGRect)frameForPostQuestionButton;
- (struct CGRect)frameForTitleLabel;
- (id)initWithFrame:(struct CGRect)arg1 viewModel:(id)arg2;

@end

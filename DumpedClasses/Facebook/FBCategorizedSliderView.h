//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBAdFeedbackOptions, FBAdFeedbackPillView, NSArray, NSString, NSTimer, UIButton, UILabel, UISlider;
@protocol FBCategorizedSliderViewDelegate;

@interface FBCategorizedSliderView : UIView
{
    UISlider *_slider;
    UILabel *_displayLabel;
    FBAdFeedbackPillView *_pill;
    NSTimer *_pillTimer;
    UIButton *_clearButton;
    FBAdFeedbackOptions *_currentCategory;
    _Bool _isInPillState;
    NSString *_identifier;
    NSArray *_categories;
    id <FBCategorizedSliderViewDelegate> _delegate;
}

@property(nonatomic) __weak id <FBCategorizedSliderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_layoutPillState;
- (void)_setupPillState;
- (void)_layoutNormalState;
- (void)_setupNormalState;
- (void)_sliderTouchUp;
- (void)_sliderTouchDown;
- (void)_sliderValueChanged;
- (void)_setupInitailState;
- (void)_reset;
- (id)initWithFrame:(struct CGRect)arg1;

@end


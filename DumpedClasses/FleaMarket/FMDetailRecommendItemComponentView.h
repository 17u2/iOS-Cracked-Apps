//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FMDetailRecommendItemComponent, FMImageView, UIButton, UILabel;

@interface FMDetailRecommendItemComponentView : UIView
{
    FMImageView *_picImageView;
    UILabel *_titleLabel;
    UILabel *_priceLabel;
    UILabel *_descLabel;
    UIButton *_recommendItemBtn;
    FMDetailRecommendItemComponent *_recommendItemCVM;
}

@property(retain, nonatomic) FMDetailRecommendItemComponent *recommendItemCVM; // @synthesize recommendItemCVM=_recommendItemCVM;
@property(retain, nonatomic) UIButton *recommendItemBtn; // @synthesize recommendItemBtn=_recommendItemBtn;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) FMImageView *picImageView; // @synthesize picImageView=_picImageView;
- (void).cxx_destruct;
- (void)recommendItemBtnClick:(id)arg1;

@end

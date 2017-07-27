//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, QLAppLiveCommentBaseInfo, QLAppLiveSubject, QLRichLabel, UILabel, UITableView;

@interface QLLiveChatGuessForwardView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    QLAppLiveCommentBaseInfo *_baseCommentInfo;
    UILabel *_fowardLable;
    QLRichLabel *_nameLable;
    QLRichLabel *_contentLable;
    UITableView *_optionTbl;
    QLAppLiveSubject *_voteSubject;
    UIView *_seperatorLine;
}

+ (double)heightForForwardView:(id)arg1;
+ (double)heightForOptionTable:(id)arg1 withScene:(int)arg2;
@property(retain, nonatomic) UIView *seperatorLine; // @synthesize seperatorLine=_seperatorLine;
@property(retain, nonatomic) QLAppLiveSubject *voteSubject; // @synthesize voteSubject=_voteSubject;
@property(retain, nonatomic) UITableView *optionTbl; // @synthesize optionTbl=_optionTbl;
@property(retain, nonatomic) QLRichLabel *contentLable; // @synthesize contentLable=_contentLable;
@property(retain, nonatomic) QLRichLabel *nameLable; // @synthesize nameLable=_nameLable;
@property(retain, nonatomic) UILabel *fowardLable; // @synthesize fowardLable=_fowardLable;
@property(retain, nonatomic) QLAppLiveCommentBaseInfo *baseCommentInfo; // @synthesize baseCommentInfo=_baseCommentInfo;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)layoutSubviews;
- (void)setObject:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

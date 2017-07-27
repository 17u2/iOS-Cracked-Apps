//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RoomMemberCell.h"

@class NSString, UIImageView;

@interface MultiMemberCell : RoomMemberCell
{
    UIImageView *_SpeakingImageView;
    UIImageView *_MicOffImageView;
    NSString *_titleText;
    _Bool _isSpeaking;
    _Bool _isMicOff;
    _Bool _groupVideoCell;
}

@property(retain, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(nonatomic) _Bool groupVideoCell; // @synthesize groupVideoCell=_groupVideoCell;
- (void)setAvatarViewAccessibilityLabel:(id)arg1;
- (void)clearContent;
- (void)setSpeaking:(_Bool)arg1 micOff:(_Bool)arg2 animated:(_Bool)arg3;
- (void)invalidateLayout;
- (void)addSubview:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

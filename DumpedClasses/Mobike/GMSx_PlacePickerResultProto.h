//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GMSx_PBGeneratedMessage.h"

@class GMSx_PlaceFilterLogProto, GMSx_RectProto, NSString;

@interface GMSx_PlacePickerResultProto : GMSx_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSString *callingActivity; // @dynamic callingActivity;
@property(retain, nonatomic) GMSx_PlaceFilterLogProto *filter; // @dynamic filter;
@property(nonatomic) _Bool hasCallingActivity; // @dynamic hasCallingActivity;
@property(nonatomic) _Bool hasFilter; // @dynamic hasFilter;
@property(nonatomic) _Bool hasIndexInList; // @dynamic hasIndexInList;
@property(nonatomic) _Bool hasMapBounds; // @dynamic hasMapBounds;
@property(nonatomic) _Bool hasMode; // @dynamic hasMode;
@property(nonatomic) _Bool hasPlaceId; // @dynamic hasPlaceId;
@property(nonatomic) _Bool hasSearchQuery; // @dynamic hasSearchQuery;
@property(nonatomic) _Bool hasSelectionType; // @dynamic hasSelectionType;
@property(nonatomic) _Bool hasTag; // @dynamic hasTag;
@property(nonatomic) int indexInList; // @dynamic indexInList;
@property(retain, nonatomic) GMSx_RectProto *mapBounds; // @dynamic mapBounds;
@property(nonatomic) int mode; // @dynamic mode;
@property(retain, nonatomic) NSString *placeId; // @dynamic placeId;
@property(retain, nonatomic) NSString *searchQuery; // @dynamic searchQuery;
@property(nonatomic) int selectionType; // @dynamic selectionType;
@property(retain, nonatomic) NSString *tag; // @dynamic tag;

@end

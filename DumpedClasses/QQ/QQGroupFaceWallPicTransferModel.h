//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QQGroupFaceWallPicTransferManager;

@interface QQGroupFaceWallPicTransferModel : NSObject
{
    QQGroupFaceWallPicTransferManager *_picTransferManager;
    id <QQGroupFaceWallPicTransferManagerDelegate> _picTransferManagerDelegate;
}

@property(nonatomic) id <QQGroupFaceWallPicTransferManagerDelegate> picTransferManagerDelegate; // @synthesize picTransferManagerDelegate=_picTransferManagerDelegate;
@property(retain, nonatomic) QQGroupFaceWallPicTransferManager *picTransferManager; // @synthesize picTransferManager=_picTransferManager;
- (void).cxx_destruct;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, TTAssetModel, TTImagePickerController, UIImage;

@protocol TTImagePickerControllerDelegate <NSObject>

@optional
- (void)ttImagePickerControllerDidCancel:(TTImagePickerController *)arg1;
- (void)ttimagePickerController:(TTImagePickerController *)arg1 didFinishTakePhoto:(UIImage *)arg2 selectedAssets:(NSArray *)arg3 withInfo:(NSDictionary *)arg4;
- (void)ttimagePickerController:(TTImagePickerController *)arg1 didFinishPickingVideo:(UIImage *)arg2 sourceAssets:(TTAssetModel *)arg3;
- (void)ttimagePickerController:(TTImagePickerController *)arg1 didFinishPickingPhotos:(NSArray *)arg2 sourceAssets:(NSArray *)arg3;
@end

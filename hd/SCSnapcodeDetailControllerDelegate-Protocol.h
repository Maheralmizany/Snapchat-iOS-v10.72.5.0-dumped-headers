//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCScannableInfo, SCSnapcodeDetailController, UIImage;

@protocol SCSnapcodeDetailControllerDelegate <NSObject>
- (void)snapcodeDetailControllerDidUpdateDataInCell:(SCSnapcodeDetailController *)arg1 toScannableInfo:(SCScannableInfo *)arg2;
- (void)snapcodeDetailControllerDidUpdateGhostImageInCell:(SCSnapcodeDetailController *)arg1 image:(UIImage *)arg2;
- (void)snapcodeDetailControllerDidDeleteCell:(SCSnapcodeDetailController *)arg1 scannableInfo:(SCScannableInfo *)arg2;
@end


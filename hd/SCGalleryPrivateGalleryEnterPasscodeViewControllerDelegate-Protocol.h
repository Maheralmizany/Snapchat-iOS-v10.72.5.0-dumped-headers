//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCGalleryPrivateGalleryEnterPasscodeViewController;

@protocol SCGalleryPrivateGalleryEnterPasscodeViewControllerDelegate <NSObject>
- (void)enterPasscodeViewControllerDidPressBack:(SCGalleryPrivateGalleryEnterPasscodeViewController *)arg1;

@optional
- (void)enterPasscodeViewControllerDidUnlock:(SCGalleryPrivateGalleryEnterPasscodeViewController *)arg1;
- (void)enterPasscodeViewControllerDidConfirmPasscode:(SCGalleryPrivateGalleryEnterPasscodeViewController *)arg1;
- (void)enterPasscodeViewControllerDidPressUsePassphrase:(SCGalleryPrivateGalleryEnterPasscodeViewController *)arg1;
- (void)enterPasscodeViewController:(SCGalleryPrivateGalleryEnterPasscodeViewController *)arg1 didCreatePasscode:(NSString *)arg2;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCGalleryPrivateGalleryEnterPassphraseViewController;

@protocol SCGalleryPrivateGalleryEnterPassphraseViewControllerDelegate <NSObject>
- (void)enterPassphraseViewControllerDidPressBack:(SCGalleryPrivateGalleryEnterPassphraseViewController *)arg1;

@optional
- (void)enterPassphraseViewControllerDidUnlock:(SCGalleryPrivateGalleryEnterPassphraseViewController *)arg1;
- (void)enterPassphraseViewControllerDidPressUsePasscode:(SCGalleryPrivateGalleryEnterPassphraseViewController *)arg1;
- (void)enterPassphraseViewController:(SCGalleryPrivateGalleryEnterPassphraseViewController *)arg1 didCreatePassphrase:(NSString *)arg2;
@end

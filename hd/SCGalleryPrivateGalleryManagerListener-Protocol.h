//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCGalleryPrivateGalleryManager;

@protocol SCGalleryPrivateGalleryManagerListener <NSObject>
- (void)privateGalleryManagerDidUnlock:(SCGalleryPrivateGalleryManager *)arg1;
- (void)privateGalleryManagerDidLock:(SCGalleryPrivateGalleryManager *)arg1;
- (void)privateGalleryManagerDidUpdatePassphrase:(SCGalleryPrivateGalleryManager *)arg1;
- (void)privateGalleryManagerDidSetup:(SCGalleryPrivateGalleryManager *)arg1;
@end


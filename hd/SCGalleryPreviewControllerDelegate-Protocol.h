//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, SCGalleryPreviewController;

@protocol SCGalleryPreviewControllerDelegate <NSObject>
- (void)galleryPreviewController:(SCGalleryPreviewController *)arg1 didFailToLoadContent:(NSError *)arg2;
- (void)galleryPreviewControllerDidCancel:(SCGalleryPreviewController *)arg1;
- (void)galleryPreviewControllerDidDismiss:(SCGalleryPreviewController *)arg1;
- (void)galleryPreviewControllerWillDismiss:(SCGalleryPreviewController *)arg1;
- (void)galleryPreviewController:(SCGalleryPreviewController *)arg1 createdEntry:(id <SCGalleryEntry>)arg2 createdSnap:(id <SCGallerySnap>)arg3 updatedEntry:(id <SCGalleryEntry>)arg4 didDetachSnap:(id <SCGallerySnap>)arg5 fromEntry:(id <SCGalleryEntry>)arg6;
- (void)galleryPreviewController:(SCGalleryPreviewController *)arg1 updatedEntry:(id <SCGalleryEntry>)arg2 didDeleteSnap:(id <SCGallerySnap>)arg3 fromEntry:(id <SCGalleryEntry>)arg4;

@optional
- (void)galleryPreviewControllerDidSaveAsCopy:(SCGalleryPreviewController *)arg1;
- (void)galleryPreviewControllerDidSendOrPostContent;
@end


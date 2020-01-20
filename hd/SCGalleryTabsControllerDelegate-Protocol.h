//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCGalleryTabsController;

@protocol SCGalleryTabsControllerDelegate <NSObject>
- (void)galleryTabsControllerDidDismissOpera:(SCGalleryTabsController *)arg1;
- (void)galleryTabsControllerDidPresentOpera:(SCGalleryTabsController *)arg1;
- (void)galleryTabsControllerDidEndEditing:(SCGalleryTabsController *)arg1;
- (void)galleryTabsControllerDidBeginEditing:(SCGalleryTabsController *)arg1;
- (void)galleryTabsController:(SCGalleryTabsController *)arg1 didChangeFocusedTabSelectableContentCount:(unsigned long long)arg2;
- (void)galleryTabsControllerWillChangeFocusedTab:(SCGalleryTabsController *)arg1 withSelectableContentCount:(unsigned long long)arg2;
- (void)galleryTabsControllerDidChangeSelectedGalleryItems:(SCGalleryTabsController *)arg1;
- (void)galleryTabsController:(SCGalleryTabsController *)arg1 requestsAddToStorySelectModeForItem:(id <SCGalleryItem>)arg2;
- (void)galleryTabsController:(SCGalleryTabsController *)arg1 requestsSelectMode:(_Bool)arg2;
@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCGalleryCellActionMenuHelper;

@protocol SCGalleryCellActionMenuHelperDelegate <NSObject>
- (void)galleryCellActionMenuHelperDidSaveFeaturedStory:(SCGalleryCellActionMenuHelper *)arg1 item:(id <SCGalleryItem>)arg2;
- (void)galleryCellActionMenuHelperIsSavingFeaturedStory:(SCGalleryCellActionMenuHelper *)arg1 item:(id <SCGalleryItem>)arg2;

@optional
- (void)galleryCellActionMenuHelperDidTriggerAddToStory:(SCGalleryCellActionMenuHelper *)arg1 item:(id <SCGalleryItem>)arg2;
@end


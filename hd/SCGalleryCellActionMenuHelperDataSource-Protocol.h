//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCGalleryCellActionMenuHelper, SCGalleryStoryViewModel, SCSpectaclesTransferSession;

@protocol SCGalleryCellActionMenuHelperDataSource <NSObject>
- (SCGalleryStoryViewModel *)galleryCellActionMenuHelper:(SCGalleryCellActionMenuHelper *)arg1 viewModelForItem:(id <SCGalleryItem>)arg2;
- (SCSpectaclesTransferSession *)galleryCellActionMenuHelper:(SCGalleryCellActionMenuHelper *)arg1 transferSessionForItem:(id <SCGalleryItem>)arg2;
@end


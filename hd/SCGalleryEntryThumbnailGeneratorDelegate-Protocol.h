//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIImage;

@protocol SCGalleryEntryThumbnailGeneratorDelegate <NSObject>
- (void)thumbnailGeneratorHasDelayedLoading:(id <SCGalleryEntryThumbnailGenerating>)arg1;
- (void)thumbnailGenerator:(id <SCGalleryEntryThumbnailGenerating>)arg1 didLoadMiniThumbnail:(UIImage *)arg2 snap:(id <SCGallerySnap>)arg3 duration:(double)arg4;
- (void)thumbnailGenerator:(id <SCGalleryEntryThumbnailGenerating>)arg1 didUpdateStoryThumbnailWithImage:(UIImage *)arg2 snap:(id <SCGallerySnap>)arg3 duration:(double)arg4;
- (void)thumbnailGenerator:(id <SCGalleryEntryThumbnailGenerating>)arg1 didUpdateSnapThumbnailWithImage:(UIImage *)arg2 snap:(id <SCGallerySnap>)arg3 duration:(double)arg4;
@end


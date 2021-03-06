//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSURL;

@protocol SCSyncFileResolver <NSObject>
- (NSData *)generateMiniThumbnailFromLowresData:(id <SCGallerySnap>)arg1 lowResMedia:(NSData *)arg2;
- (NSData *)renderedLowresMediaForSnap:(id <SCGallerySnap>)arg1 detail:(id <SCGallerySnapDetail>)arg2;
- (_Bool)resolveMediaOverlayLocallyForSnap:(id <SCGallerySnap>)arg1;
- (NSURL *)mediaCachedOverlayEntityURLForSnap:(id <SCGallerySnap>)arg1;
- (NSURL *)renderedLowresMediaCachedURLForSnap:(id <SCGallerySnap>)arg1;
- (NSURL *)mediaCachedOverlayURLForSnap:(id <SCGallerySnap>)arg1;
- (NSURL *)mediaCachedURLForSnap:(id <SCGallerySnap>)arg1;
@end


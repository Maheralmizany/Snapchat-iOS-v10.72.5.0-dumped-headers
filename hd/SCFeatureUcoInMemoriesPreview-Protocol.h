//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, SCOverlayFormat, UIImage;

@protocol SCFeatureUcoInMemoriesPreview <NSObject>
- (void)restoreUcoGallerySnapWithUcoAppliedImageContainer:(id <SCUcoAppliedImageContainer>)arg1 overlayFormat:(SCOverlayFormat *)arg2;
- (_Bool)snapOverlayContainsUco:(id <SOJUGallerySnapOverlay>)arg1;
- (void)processUcoBlobImageContainerForExport:(id <SCUcoBlobImageContainer>)arg1 ucoAppliedImage:(UIImage *)arg2 mediaOverlayArray:(NSMutableArray *)arg3;
@end


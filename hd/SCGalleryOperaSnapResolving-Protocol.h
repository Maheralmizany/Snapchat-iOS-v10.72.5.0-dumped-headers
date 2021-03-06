//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSNumber, NSObject<SCGalleryOperaMagicMomentCaching>, PHAsset, SCGalleryOperaSnap;

@protocol SCGalleryOperaSnapResolving <NSObject>
@property(readonly, nonatomic) NSObject<SCGalleryOperaMagicMomentCaching> *magicMomentCache;
- (NSArray *)magicMomentUpdatedSnaps;
- (void)updateMagicMomentFrameTime:(NSNumber *)arg1 forPage:(NSDictionary *)arg2;
- (SCGalleryOperaSnap *)resolveGalleryOperaSnapAtPage:(NSDictionary *)arg1;
- (id <SCGallerySnap>)resolveGallerySnapAtPage:(NSDictionary *)arg1;

@optional
- (PHAsset *)resolvePHAssetAtPage:(NSDictionary *)arg1;
- (NSArray *)resolveAllGallerySnaps;
@end


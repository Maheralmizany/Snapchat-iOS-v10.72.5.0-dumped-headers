//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCGalleryViewControllerDelegate.h"
#import "SCSpectaclesPairingDelegate.h"

@class NSString, SCCameraToGallerySwipeTransitionCoordinator, SCFeatureReference, SCGalleryViewController, SCLazy, SCMainCameraViewController, SCUserSession;

@protocol SCFeatureMemories <SCSpectaclesPairingDelegate, SCGalleryViewControllerDelegate>
+ (id)new;
@property(readonly, nonatomic) _Bool isTransitioning;
@property(readonly, nonatomic) SCGalleryViewController *galleryViewController;
@property(readonly, nonatomic) SCCameraToGallerySwipeTransitionCoordinator *galleryTransitionCoordinator;
@property(nonatomic) __weak id <SCSwipeViewParentDelegate> parentDelegate;
@property(nonatomic) __weak id <SCFeatureMemoriesDelegate> delegate;
@property(nonatomic) long long cameraViewType;
- (_Bool)isDisplayingFeaturedBadge;
- (_Bool)isGalleryViewCameraButtonVisible;
- (_Bool)lagunaTabViewVisible;
- (_Bool)galleryViewVisible;
- (void)scrollGalleryToFeaturedTab;
- (void)scrollGalleryToLagunaTab;
- (void)scrollToGalleryFromCameraAnimated:(_Bool)arg1 completion:(void (^)(void))arg2;
- (void)scrollToCameraAnimated:(_Bool)arg1 reason:(NSString *)arg2 completion:(void (^)(void))arg3;
- (void)removeAllScrollLocks;
- (void)unlockAllScrollWithKey:(NSString *)arg1;
- (void)lockAllScrollWithKey:(NSString *)arg1;
- (void)dismiss:(_Bool)arg1 completion:(void (^)(void))arg2;
- (void)setPressingCameraButton:(_Bool)arg1;
- (double)percentVisible;
- (double)percentPresented;
- (void)setTransitioningToMemories;
- (_Bool)isPresenting;
- (void)initMemoriesIfNecessary;
- (id)initWithUserSession:(SCUserSession *)arg1 mainCameraViewController:(SCMainCameraViewController *)arg2 navigationDelegate:(SCLazy *)arg3 navigationPageState:(SCLazy *)arg4 delegate:(id <SCFeatureMemoriesDelegate>)arg5 parentDelegate:(id <SCSwipeViewParentDelegate>)arg6 memoriesSideButtonFeatureRef:(SCFeatureReference *)arg7;
- (id)init;
@end


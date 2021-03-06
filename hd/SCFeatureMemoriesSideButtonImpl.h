//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCCameraGestureResponder.h"
#import "SCFeatureMemoriesSideButton.h"
#import "SCMemoriesSideButtonDelegate.h"

@class NSArray, NSString, SCGalleryRecentThumbnailProvider, SCMemoriesSideButton, SCMemoriesSideButtonStatusController, SCUserSession, UIView<SCFeatureContainerView>;

@interface SCFeatureMemoriesSideButtonImpl : SCFeature <SCMemoriesSideButtonDelegate, SCFeatureMemoriesSideButton, SCCameraGestureResponder>
{
    UIView<SCFeatureContainerView> *_parentView;
    _Bool _isViewLoaded;
    _Bool _shouldDelayObserveLaguna;
    id _recentThumbnailObserver;
    SCGalleryRecentThumbnailProvider *_recentThumbnailProvider;
    SCMemoriesSideButtonStatusController *_memoriesSideButtonStatusController;
    SCUserSession *_userSession;
    id <SCFeatureCameraUIArbitrator> _cameraBottomUIArbitrator;
    SCMemoriesSideButton *_memoriesSideButton;
}

@property(readonly, nonatomic) SCMemoriesSideButton *memoriesSideButton; // @synthesize memoriesSideButton=_memoriesSideButton;
@property(nonatomic) __weak id <SCFeatureCameraUIArbitrator> cameraBottomUIArbitrator; // @synthesize cameraBottomUIArbitrator=_cameraBottomUIArbitrator;
- (void).cxx_destruct;
- (void)setCameraUIVisible:(_Bool)arg1 animated:(_Bool)arg2 arbitrator:(id)arg3;
- (_Bool)shouldBlockTouchAtPoint:(struct CGPoint)arg1;
@property(readonly, nonatomic) NSArray *recentThumbnails;
- (void)isTransitioningGallery:(double)arg1;
- (void)observeLagunaAppStatusChanges;
- (void)updateVisibility:(double)arg1;
- (void)loadThumbnailProvider;
- (void)activate;
- (void)configureWithView:(id)arg1;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


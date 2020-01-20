//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCFeatureScanBar.h"
#import "SCLSIServiceListener.h"
#import "SCManagedCapturerListener.h"
#import "SCScanBarDelegate.h"

@class NSString, SCLazy, SCScopedAccess, UIView<SCFeatureContainerView>;

@interface SCFeatureScanBarImpl : SCFeature <SCLSIServiceListener, SCScanBarDelegate, SCManagedCapturerListener, SCFeatureScanBar>
{
    SCScopedAccess *_lensSceneIntService;
    SCLazy *_experimentManager;
    UIView<SCFeatureContainerView> *_containerView;
    _Bool _canComplete;
    _Bool _isActive;
    SCLazy *_scanBar;
    long long _currentState;
    long long _highlightIndex;
    id <SCFeatureScanBarDelegate> _delegate;
    id <SCFeatureARBarBottomUIArbitrator> _arBarBottomUIArbitrator;
}

@property(nonatomic) __weak id <SCFeatureARBarBottomUIArbitrator> arBarBottomUIArbitrator; // @synthesize arBarBottomUIArbitrator=_arBarBottomUIArbitrator;
@property(nonatomic) __weak id <SCFeatureScanBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_createScanBarView;
- (long long)_scanBarItemIndexWithHighestScore:(id)arg1;
- (id)_fullScreenScanBarItemsFromCategories:(id)arg1;
- (id)_defaultScanBarItemsFromCategories:(id)arg1;
- (id)_sortedCategories:(id)arg1;
- (void)_updateViewFrame:(id)arg1;
- (void)_scanBarFinished;
- (_Bool)_setCurrentState:(long long)arg1;
- (void)setCameraUIVisible:(_Bool)arg1 animated:(_Bool)arg2 isFromRootArbitrator:(_Bool)arg3 arBarBottomUIArbitrator:(id)arg4;
- (void)managedCapturer:(id)arg1 didChangeLensesActive:(id)arg2;
- (void)scanBarView:(id)arg1 didFinishAnimation:(long long)arg2 success:(_Bool)arg3;
- (void)lensSceneIntelligenceService:(id)arg1 didReceiveLensRecommendationResponseForRequest:(id)arg2;
- (void)lensSceneIntelligenceService:(id)arg1 receivedScanAnimationResponse:(id)arg2;
- (void)lensSceneIntelligenceService:(id)arg1 request:(id)arg2 failedWithError:(id)arg3;
- (void)beginScanBarAnimation;
- (void)activate;
- (_Bool)shouldBlockTouchAtPoint:(struct CGPoint)arg1;
- (void)configureWithView:(id)arg1;
- (id)initWithLensSceneIntelligenceService:(id)arg1 capturer:(id)arg2 experimentManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

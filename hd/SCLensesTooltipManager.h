//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCOnboardingTooltipManager.h"

#import "SCLensUIUpdateListener.h"

@class NSString, SCCameraOverlayView, SCFeatureSettingsManager, SCLensesSwipeTooltip, SCUserSession;

@interface SCLensesTooltipManager : SCOnboardingTooltipManager <SCLensUIUpdateListener>
{
    SCUserSession *_userSession;
    SCFeatureSettingsManager *_featureSettingsManager;
    SCCameraOverlayView *_cameraView;
    _Bool _lensesOnboardingTooltipEnabled;
    _Bool _isSwipeTooltipBeingShown;
    _Bool _isSuppressed;
    NSString *_firstSelectedLensIdWithSwipeTooltipEnabled;
    SCLensesSwipeTooltip *_swipeTooltip;
}

@property(retain, nonatomic) SCLensesSwipeTooltip *swipeTooltip; // @synthesize swipeTooltip=_swipeTooltip;
- (void).cxx_destruct;
- (void)willShowLenses;
- (void)willDisplayLens:(id)arg1;
- (void)didUpdateActiveLensOrder:(id)arg1;
- (void)didSelectLens:(id)arg1;
- (void)didHideLenses;
- (void)didEndDisplayingLens:(id)arg1;
- (void)_hideSwipeTooltip;
- (void)_showSwipeTooltipCheckingSuppression;
- (_Bool)_didSelectAnotherLens:(id)arg1;
- (void)hideTooltip;
- (void)setTooltipSuppressed:(_Bool)arg1;
- (_Bool)areLensesOnboardingTooltipsCompleted;
- (void)setupWithParentView:(id)arg1;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

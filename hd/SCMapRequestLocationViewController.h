//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SCDelegatedPresentedDelegate.h"
#import "SCMapRequestLocationViewDelegate.h"

@class NSString, SCMapLoggerEventSender, SCMapRequestLocationView;

@interface SCMapRequestLocationViewController : UIViewController <SCMapRequestLocationViewDelegate, SCDelegatedPresentedDelegate>
{
    NSString *_currentUserId;
    id <SCMapRequestLocationViewControllerDelegate> _delegate;
    SCMapLoggerEventSender *_mapLoggerEventSender;
    double _startViewTime;
}

+ (_Bool)shouldShowForCurrentUserId:(id)arg1;
- (void).cxx_destruct;
- (void)_updateStatusBar;
- (_Bool)_needsLocationPermissionForUserId:(id)arg1;
- (void)_handleCurrentLocationPermissions;
- (void)dismissedAnimationForTransitionDelegate:(id)arg1;
- (void)presentedAnimationForTransitionDelegate:(id)arg1;
- (void)giveAccessViewCloseButtonTapped:(id)arg1;
- (void)giveAccessViewNotNowButtonTapped:(id)arg1;
- (void)giveAccessViewGiveAccessButtonTapped:(id)arg1;
- (void)_didBecomeActive:(id)arg1;
- (long long)preferredStatusBarStyle;
- (long long)preferredStatusBarUpdateAnimation;
- (_Bool)prefersStatusBarHidden;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithCurrentUserId:(id)arg1 delegate:(id)arg2 mapLoggerEventSender:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SCMapRequestLocationView *view; // @dynamic view;

@end


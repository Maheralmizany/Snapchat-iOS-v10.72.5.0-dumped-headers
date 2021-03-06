//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCCameraGestureResponder.h"
#import "SCFeatureSnapKit.h"
#import "SCManagedCapturerListener.h"

@class NSString, SCCameraDeepLinkViewController, SCUserSession, UIView<SCFeatureContainerView>;

@interface SCFeatureSnapKitImpl : SCFeature <SCManagedCapturerListener, SCFeatureSnapKit, SCCameraGestureResponder>
{
    SCUserSession *_userSession;
    UIView<SCFeatureContainerView> *_containerView;
    id <SCFeatureToggleCamera> _toggleCamera;
    long long _cameraPosition;
    id <SCCameraTooltipPriorityResolving> _tooltipPriorityResolver;
    id <SCPreviewPresenter> _previewPresenter;
    id <SCUserTooltipProviding> _userTooltipProvider;
    _Bool _canEnable;
    SCCameraDeepLinkViewController *_cameraDeepLinkViewController;
}

@property(retain, nonatomic) SCCameraDeepLinkViewController *cameraDeepLinkViewController; // @synthesize cameraDeepLinkViewController=_cameraDeepLinkViewController;
@property(nonatomic) _Bool canEnable; // @synthesize canEnable=_canEnable;
- (void).cxx_destruct;
- (void)_setupCameraPosition:(long long)arg1;
- (void)_didToggleAvailability;
- (void)forwardCameraTimerGesture:(id)arg1;
- (void)forwardCameraOverlayTapGesture:(id)arg1;
- (_Bool)shouldBlockTouchAtPoint:(struct CGPoint)arg1;
- (void)setUserTooltipProvider:(id)arg1;
- (void)setPreviewPresenter:(id)arg1;
- (void)setTooltipPriorityResolver:(id)arg1;
- (void)setDeepLinkMetadata:(id)arg1 userSession:(id)arg2;
- (void)reset;
- (id)metadata;
- (void)configureWithView:(id)arg1;
- (void)dealloc;
- (id)initWithCapturer:(id)arg1 userSession:(id)arg2 toggleCamera:(id)arg3;
- (void)managedCapturer:(id)arg1 didChangeState:(id)arg2;
- (void)managedCapturer:(id)arg1 didGetError:(id)arg2 forType:(long long)arg3 session:(CDStruct_4565c1ff)arg4;
- (void)managedCapturer:(id)arg1 didCancelRecording:(id)arg2 session:(CDStruct_4565c1ff)arg3;
- (void)managedCapturer:(id)arg1 didFailRecording:(id)arg2 session:(CDStruct_4565c1ff)arg3 error:(id)arg4;
- (void)managedCapturer:(id)arg1 didFinishRecording:(id)arg2 session:(CDStruct_4565c1ff)arg3 recordedVideo:(id)arg4;
- (void)managedCapturer:(id)arg1 didBeginVideoRecording:(id)arg2 session:(CDStruct_4565c1ff)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


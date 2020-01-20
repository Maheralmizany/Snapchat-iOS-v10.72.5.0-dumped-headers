//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCTActiveCallCardDelegate.h"
#import "SCTCallingController.h"
#import "SCTFullscreenCallingServices.h"
#import "SCTLocalMediaViewDelegate.h"
#import "SCTPhoneCallListener.h"
#import "SCTV3CallPromptsAnimationsProvider.h"
#import "SCTV3ExpandedLocalMediaControllerDelegate.h"
#import "SCTV3LensesServicesListener.h"

@class NSString, SCTCallButtons, SCTCallCard, SCTLocalMediaView, SCTV3AudioManager, SCTV3CameraManager, SCTV3ExpandedLocalMediaController, SCTV3LocalPreview, SCTV3WaveformView, TCV3CallingManager, UITapGestureRecognizer, UIView;

@interface SCTCallingController : NSObject <SCTLocalMediaViewDelegate, SCTActiveCallCardDelegate, SCTV3ExpandedLocalMediaControllerDelegate, SCTV3LensesServicesListener, SCTCallingController, SCTV3CallPromptsAnimationsProvider, SCTPhoneCallListener, SCTFullscreenCallingServices>
{
    NSString *_convoId;
    id <SCTCallingControllerDelegate> _delegate;
    id <SCTalkUIController> _talkUIController;
    id <SCTFullscreenStateProvider> _fullscreenStateProvider;
    id <SCTV3LensesServices> _lensesServices;
    SCTV3AudioManager *_audioManager;
    TCV3CallingManager *_callingManager;
    SCTV3CameraManager *_cameraManager;
    id <SCTV3ChatServices> _chatServices;
    id <SCTIdentityServices> _identityServices;
    id <SCTV3TooltipServices> _tooltipServices;
    SCTCallButtons *_callButtons;
    NSString *_localUsername;
    SCTCallCard *_callCard;
    NSString *_stateChangeReasonMessage;
    double _stateChangeReasonMessageExpireTimeInterval;
    SCTLocalMediaView *_localMediaView;
    SCTV3WaveformView *_localWaveformView;
    SCTV3LocalPreview *_localVideoPreview;
    UITapGestureRecognizer *_unmuteLocalAudioTap;
    SCTV3ExpandedLocalMediaController *_expandedLocalMediaController;
    UIView *_localFullscreenPane;
    _Bool _isPhoneCallActive;
}

- (void).cxx_destruct;
- (void)_toggleVideo;
- (void)_toggleAudio;
- (unsigned long long)_callCardModeForReason:(long long)arg1;
- (void)_hideCallCard:(_Bool)arg1 expandingLocalMedia:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_showCallCard:(_Bool)arg1 shrinkingLocalMedia:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_detachCallCard;
- (void)_attachCallCardWithMode:(unsigned long long)arg1;
- (void)_updateLocalMediaWithCallingState:(long long)arg1 callingMedia:(long long)arg2 publishedMedia:(long long)arg3 displayingMessage:(_Bool)arg4;
- (id)_callCardDisclaimerTextForState:(id)arg1;
- (void)_updateCallCardWithState:(id)arg1;
- (id)_callCardMessageForState:(id)arg1;
- (id)_messageForStateChangedReason:(long long)arg1;
- (id)_getRemoteParticipantName;
- (void)_clearStateChangeReasonMessage;
- (void)_restartStateChangeReasonMessageTimeout;
- (_Bool)_shouldDisplayMessageForStateChangedReason;
- (id)_remoteParticipantFirstName:(id)arg1;
- (id)_remoteParticipantName:(id)arg1;
- (id)_remoteParticipantNames;
- (id)_remoteParticipants;
- (id)_createLocalWaveformViewIfNeeded;
- (id)_createLocalVideoPreviewIfNeeded;
- (void)_cancelOutgoingCall;
- (void)_rejectIncomingCall;
- (void)_acceptIncomingCall;
- (void)_hideGroupJoinTooltips;
- (void)_unmuteLocalAudioTap:(id)arg1;
- (id)_callCardModeWithCallingState:(long long)arg1 publishingMedia:(_Bool)arg2 displayingMessage:(_Bool)arg3;
- (id)_expandedLocalMediaShrinkTarget;
- (void)lensesDeactivated;
- (void)lensesActivated;
- (void)lensesLabelDidHide;
- (void)lensesLabelWillShow;
- (void)onPhoneActivityChanged:(_Bool)arg1;
- (id)shrunkMeasurementsForELMController:(id)arg1;
- (void)toggleAudioMuteForELMController:(id)arg1;
- (_Bool)isAudioMutedForELMController:(id)arg1;
- (void)flipCameraForELMController:(id)arg1;
- (_Bool)isFrontCameraUsedForELMController:(id)arg1;
- (id)localVideoViewForELMController:(id)arg1;
- (_Bool)isLocalUserMediaMuted;
- (_Bool)isLocalUserMediaVideo;
- (void)flipCamera;
- (id)fullscreenReferenceViewForMediaView:(id)arg1;
- (id)mediaView:(id)arg1 subviewForMedia:(unsigned long long)arg2;
- (void)callCardDragDismissed:(id)arg1;
- (void)callCard:(id)arg1 didSelectAction:(unsigned long long)arg2;
- (id)localMediaViewForCallCard:(id)arg1;
- (id)callEstablishedDateForCallCard:(id)arg1;
- (id)animationsForState:(id)arg1;
- (_Bool)isFullscreen;
- (void)muteLocalUserMedia:(unsigned long long)arg1;
- (void)unmuteRemoteAudioIfNeeded;
- (void)dismissCall;
- (_Bool)startCall:(unsigned long long)arg1;
- (void)updatePublishedMedia:(unsigned long long)arg1;
@property(readonly, nonatomic) SCTLocalMediaView *localMediaView;
- (void)setFullscreenStateProvider:(id)arg1;
- (_Bool)expandedLocalMediaMode;
- (void)deactivate;
- (void)background;
- (void)activate;
- (void)handleStateChangedReason:(long long)arg1;
- (void)removeELMHeightListener:(id)arg1;
- (void)addELMHeightListener:(id)arg1;
- (id)initWithConvoId:(id)arg1 delegate:(id)arg2 talkUIContoller:(id)arg3 callingManager:(id)arg4 cameraManager:(id)arg5 audioManager:(id)arg6 identityServices:(id)arg7 callButtons:(id)arg8 dependencies:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAudioSessionCore.h"

#import "SCMutableAudioSession.h"

@class MPVolumeView, NSArray, NSMutableSet, NSString, UISlider;

@interface SCAudioSessionV1 : SCAudioSessionCore <SCMutableAudioSession>
{
    NSMutableSet *_playbackTokens;
    NSMutableSet *_recordTokens;
    NSMutableSet *_callingTokens;
    NSMutableSet *_callingListenerTokens;
    NSMutableSet *_callKitTokens;
    NSMutableSet *_proximityRoutingTokens;
    NSArray *_tokenSets;
    _Bool _callkitUsesSpeaker;
    _Bool _lastActivationFailed;
    NSString *_lastRecordingRequestDebugInfo;
    MPVolumeView *_hiddenVolumeView;
    UISlider *_hiddenVolumeSlider;
}

@property(nonatomic) __weak UISlider *hiddenVolumeSlider; // @synthesize hiddenVolumeSlider=_hiddenVolumeSlider;
@property(retain, nonatomic) MPVolumeView *hiddenVolumeView; // @synthesize hiddenVolumeView=_hiddenVolumeView;
@property(retain, nonatomic) NSString *lastRecordingRequestDebugInfo; // @synthesize lastRecordingRequestDebugInfo=_lastRecordingRequestDebugInfo;
- (void).cxx_destruct;
- (void)_resumeFromBackground:(id)arg1;
- (void)debugInfoWithUploadInfoCompletion:(CDUnknownBlockType)arg1;
- (void)proximityDevice:(id)arg1 onProximityStateChange:(_Bool)arg2;
- (void)_updateProximityMonitoringStatus;
- (void)onAVAudioSessionMediaServicesWereReset:(id)arg1;
- (void)onAVAudioSessionMediaServicesWereLost:(id)arg1;
- (void)onAVAudioSessionInterruption:(id)arg1;
- (id)_updateAVAudioSessionCategory:(id)arg1 categoryOptions:(unsigned long long)arg2 mode:(id)arg3 deactivating:(_Bool)arg4 activating:(_Bool)arg5 shouldAutoRetry:(_Bool)arg6;
- (id)_updateAVAudioSessionIfNeededWithDeactivation:(_Bool)arg1 shouldAutoRetry:(_Bool)arg2;
- (id)_updateAVAudioSessionIfNeededWithShouldAutoRetry:(_Bool)arg1;
- (_Bool)_shouldUsePlaybackSettings;
- (_Bool)_shouldUseRecordingSettings;
- (_Bool)_shouldUseCallKitSettings;
- (_Bool)_shouldUseCallingListenerSettings;
- (_Bool)_shouldUseCallingSettings;
- (_Bool)_shouldRouteBasedOnProximitySensor;
- (void)_retryUpdateAVAudioSessionBeforeCallbackWithDeactivation:(_Bool)arg1 numRetries:(long long)arg2 performer:(id)arg3 callBack:(CDUnknownBlockType)arg4;
- (struct NSString *)_performRequestWithLabel:(id)arg1 tokensSet:(id)arg2 tokensSet:(id)arg3 deactivation:(_Bool)arg4 shouldRetryRequest:(_Bool)arg5 callbackPerformer:(id)arg6 callback:(CDUnknownBlockType)arg7;
- (struct NSString *)_performRequestWithLabel:(id)arg1 tokensSet:(id)arg2 tokensSet:(id)arg3 shouldRetryRequest:(_Bool)arg4 callbackPerformer:(id)arg5 callback:(CDUnknownBlockType)arg6;
- (void)setCallKitSpeakersRequest:(_Bool)arg1;
- (id)tokenSets;
- (id)proximityRoutingTokens;
- (id)callKitTokens;
- (id)callingListenerTokens;
- (id)callingTokens;
- (id)recordTokens;
- (id)playbackTokens;
- (void)updateToken:(struct NSString *)arg1 configuration:(CDUnknownBlockType)arg2 callbackPerformer:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (struct NSString *)generateNewTokenWithLabel:(id)arg1;
- (void)callKitWillDeactivateAudioSession:(id)arg1;
- (void)callKitDidActivateAudioSession:(id)arg1;
- (struct NSString *)_useAudioSessionV1With:(id)arg1 performer:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)updateOldConfigurationToken:(id)arg1 replaceConfiguration:(id)arg2 performer:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)relinquishConfiguration:(id)arg1 performer:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)configureWith:(id)arg1 performer:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (struct NSString *)requestRecordingRoutingWithLabel:(id)arg1 shouldRetryRequest:(_Bool)arg2 callbackPerformer:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (struct NSString *)requestPlaybackRoutingWithLabel:(id)arg1 shouldRetryRequest:(_Bool)arg2 callbackPerformer:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (struct NSString *)requestRecordingWithLabel:(id)arg1 deactivation:(_Bool)arg2 shouldRetryRequest:(_Bool)arg3 callbackPerformer:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (struct NSString *)requestRecordingWithLabel:(id)arg1 shouldRetryRequest:(_Bool)arg2 callbackPerformer:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (struct NSString *)requestPlaybackWithLabel:(id)arg1 shouldRetryRequest:(_Bool)arg2 callbackPerformer:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)releaseToken:(struct NSString *)arg1 callbackPerformer:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)updateConfigurationIfNeededWithPerformer:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)updateConfigurationIfNeeded;
- (void)dealloc;
- (id)initWithPerformer:(id)arg1 notificationCenter:(id)arg2 proximityDevice:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

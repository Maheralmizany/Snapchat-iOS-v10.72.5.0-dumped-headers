//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LSABaseComponent.h"

#import "LSAClientInterfaceProtocol.h"
#import "LSACompositeEffectManager.h"
#import "LSAEffectClientInterfaceDelegate.h"
#import "LSAEffectHapticFeedbackDelegate.h"
#import "LSAEffectHintDelegate.h"
#import "LSAEffectLifeCycleDelegate.h"
#import "LSAEffectPersistenceDelegate.h"

@class LSAAudioPlayerBridge, LSACompositeEffectManager, LSAEffectComponentListenerAnnouncer, NSString;

@interface LSAEffectComponent : LSABaseComponent <LSAEffectHintDelegate, LSAEffectHapticFeedbackDelegate, LSAEffectClientInterfaceDelegate, LSAEffectPersistenceDelegate, LSAEffectLifeCycleDelegate, LSAClientInterfaceProtocol, LSACompositeEffectManager>
{
    LSAEffectComponentListenerAnnouncer *_effectComponentAnnouncer;
    LSAAudioPlayerBridge *_audioPlayerBridge;
    struct shared_ptr<LSALifeCycleDelegateWrapper> _effectLifeCycleDelegateWrapper;
    struct shared_ptr<LSAHintsDelegateWrapper> _hintsDelegateWrapper;
    struct shared_ptr<LSAHapticFeedbackDelegateWrapper> _hapticFeedbackDelegateWrapper;
    struct shared_ptr<LSAAudioDelegateWrapper> _audioDelegateWrapper;
    struct shared_ptr<LSAScenariumAudioDelegateWrapper> _scenariumAudioDelegateWrapper;
    struct shared_ptr<LSAClientInterfaceDelegateWrapper> _clientInterfaceDelegateWrapper;
    struct shared_ptr<LSAPersistenceDelegateWrapper> _persistenceDelegateWrapper;
    struct shared_ptr<LSAVideoCodecFactory> _videoCodecFactory;
    struct shared_ptr<LS::LSLocalizationDelegate> _localizationDelegate;
    LSACompositeEffectManager *_compositeEffectManager;
    _Bool _shouldClearUnusedResources;
    _Bool _applicationActive;
    id <NSObject> _pendingEffectKey;
}

+ (unsigned long long)getSupportedFeaturesOfEffect:(struct ComplexEffect *)arg1;
@property(getter=isApplicationActive) _Bool applicationActive; // @synthesize applicationActive=_applicationActive;
@property _Bool shouldClearUnusedResources; // @synthesize shouldClearUnusedResources=_shouldClearUnusedResources;
@property(retain) id <NSObject> pendingEffectKey; // @synthesize pendingEffectKey=_pendingEffectKey;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setSourceRect:(struct CGRect)arg1 forEffectWithId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setDestinationRect:(struct CGRect)arg1 forEffectWithId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setEffectRectangles:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeEffectWithEffectId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addEffectWithEffectInfo:(id)arg1 async:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_unmuteAudio;
- (void)_muteAudio;
- (void)_enableAudio;
- (void)_disableAudio;
- (void)setupVideoCodecFactory;
- (void)sendWillTurnOffCurrentEffectIfNeeded;
- (void)effectWithId:(id)arg1 savePersistentStore:(id)arg2;
- (void)loadPersistentStoreForEffectWithId:(id)arg1;
- (void)effectWithId:(id)arg1 setScreenDimmingEnabled:(_Bool)arg2;
- (void)effectWithId:(id)arg1 interfaceControl:(unsigned long long)arg2 didPerformAction:(unsigned long long)arg3;
- (void)effectWithId:(id)arg1 interfaceControl:(unsigned long long)arg2 didShow:(_Bool)arg3;
- (void)effectWithId:(id)arg1 performInterfaceAction:(int)arg2 interfaceControl:(int)arg3 interfaceData:(id)arg4;
- (void)effectWithId:(id)arg1 showPopUpHintWithId:(id)arg2 interfaceControl:(int)arg3;
- (void)effectWithId:(id)arg1 performHapticFeedback:(int)arg2;
- (void)effectWithIdHideAllHints:(id)arg1;
- (void)effectWithId:(id)arg1 showHintWithId:(id)arg2;
- (void)didLoadEffectResources:(struct ComplexEffect *)arg1 effectId:(id)arg2;
- (void)didTurnOffEffect:(struct ComplexEffect *)arg1 effectId:(id)arg2;
- (void)willTurnOffEffect:(struct ComplexEffect *)arg1 effectId:(id)arg2;
- (void)didTurnOnEffect:(struct ComplexEffect *)arg1 effectId:(id)arg2;
- (void)willTurnOnEffectWithId:(id)arg1;
- (void)setCoreManager:(shared_ptr_6e078de4)arg1 announcer:(id)arg2 configuration:(id)arg3;
- (void)unregisterFilterFactoryWithFilterName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)registerFilterFactoryWithFilterName:(id)arg1 factoryFunction:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)currentEffectStatisticsId;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)retrieveCurrentEffectMemoryUsage:(CDUnknownBlockType)arg1;
- (void)setViewport:(struct LSAEffectViewport)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setPersistentStore:(id)arg1 effectId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)clearUnusedEffects;
- (void)clearUnusedEffectsWithCompletion:(CDUnknownBlockType)arg1;
- (void)clearEffectWithCompletion:(CDUnknownBlockType)arg1;
- (void)setEffectWithId:(id)arg1 active:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setEffectWithOperation:(id)arg1 async:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setCompositeEffectWithEffectInfos:(id)arg1 async:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setEffectWithEffectInfo:(id)arg1 async:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)audioPlayer;
- (void)applicationWillResignActive;
- (void)applicationDidBecomeActive;
- (id)initWithPerformer:(id)arg1;
- (id)hintEventBridge;
- (void)removeHintListener:(id)arg1;
- (void)addHintListener:(id)arg1;
- (id)lifecycleEventBridge;
- (void)removeLifecycleListener:(id)arg1;
- (void)addLifecycleListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


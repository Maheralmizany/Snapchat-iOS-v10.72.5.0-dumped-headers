//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCBloopsAPI.h"
#import "SCBloopsPreviewsResourcesServiceOutput.h"
#import "SCBloopsRemoteSettingsProviderChangesDelegate.h"

@class NSString, SCBloopsAPIListenerAnnouncer, SCBloopsPersonsSource, SCBloopsRemoteSettingsProvider, SCBloopsSDKSettingsProvider, SCBloopsStringsProvider, SCCircumstanceEngine, SCPreferences, Splendid;

@interface SCBloopsAPIImpl : NSObject <SCBloopsRemoteSettingsProviderChangesDelegate, SCBloopsPreviewsResourcesServiceOutput, SCBloopsAPI>
{
    SCBloopsRemoteSettingsProvider *_remoteSettingsProvider;
    id <SCBloopsPreviewsResourcesService> _previewsResourcesService;
    SCBloopsStringsProvider *_stringsProvider;
    SCBloopsAPIListenerAnnouncer *_announcer;
    _Bool _splendidInitizalized;
    _Bool _haveSojuBloopsConfig;
    SCCircumstanceEngine *_circumstanceEngine;
    _Bool _bloopsKillswitchEnabled;
    SCPreferences *_preferences;
    SCBloopsSDKSettingsProvider *_sdkSettingsProvider;
    _Bool _isBloopsFeatureEnabled;
    _Bool _isBloopsEnabledAndPreviewsResourcesReady;
    Splendid *_splendidInstance;
    SCBloopsPersonsSource *_personsSource;
}

- (void).cxx_destruct;
- (_Bool)_resolvedBloopsFeatureGatingStatus;
- (void)_fetchBloopsKillSwitchFlag;
- (void)_setBloopsKillswitchEnabled:(_Bool)arg1;
- (void)_updatePreviewsResourcesReadyFlag;
- (void)_updateBloopsFeatureStatus;
- (void)_setHaveSojuBloopsConfig:(id)arg1;
- (void)_setupInitialBloopsStatus;
- (void)tryToPreparePreviewsResources;
@property(nonatomic) _Bool isBloopsEnabledAndPreviewsResourcesReady; // @synthesize isBloopsEnabledAndPreviewsResourcesReady=_isBloopsEnabledAndPreviewsResourcesReady;
@property(nonatomic) _Bool isBloopsFeatureEnabled; // @synthesize isBloopsFeatureEnabled=_isBloopsFeatureEnabled;
- (void)bloopsPreviewsResourcesService:(id)arg1 didUpdateState:(long long)arg2;
- (void)bloopsRemoteSettingsProvider:(id)arg1 didChangeConfigUrlPath:(id)arg2;
- (void)bloopsRemoteSettingsProvider:(id)arg1 didChangeSettings:(id)arg2;
- (void)clearUserCachesWithCompletion:(CDUnknownBlockType)arg1;
- (id)previewsResourcesService;
- (void)resetPersonsSource;
- (id)searchBloopsTopicForSearchQuery:(id)arg1;
- (_Bool)searchBloopsForQuery:(id)arg1;
- (void)saveMainTarget;
- (_Bool)targetsInitialized;
- (void)checkIsBloopsConfigOnDiskWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateBloopsConfigWithCompletion:(CDUnknownBlockType)arg1;
- (void)downloadAIResourcesIfNeeded;
- (void)updateSettingsConfig:(id)arg1;
- (void)isSettingsUpdateRequired:(CDUnknownBlockType)arg1;
- (void)warmUp;
- (id)targetsConverter;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)targetFormatVersion;
- (id)searchConfigurationName;
- (unsigned long long)configGender;
- (id)configURLPath;
- (id)apiVersion;
@property(retain, nonatomic) SCBloopsPersonsSource *personsSource; // @synthesize personsSource=_personsSource;
@property(readonly, nonatomic) Splendid *splendidInstance; // @synthesize splendidInstance=_splendidInstance;
- (id)initWithSplendid:(id)arg1 remoteSettingsProvider:(id)arg2 previewsResourcesService:(id)arg3 stringsProvider:(id)arg4 announcer:(id)arg5 circumstanceEngine:(id)arg6 preferences:(id)arg7 sdkSettingsProvider:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

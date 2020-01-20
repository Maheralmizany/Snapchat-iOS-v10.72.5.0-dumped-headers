//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCCognacAPIProvider.h"

@class NSString, SCCognacConcreteAdsManager, SCCognacConcreteGroupManager, SCUserSession, User;

@interface SCCognacExternalAPIProvider : NSObject <SCCognacAPIProvider>
{
    SCCognacConcreteGroupManager *_concreteGroupManager;
    SCCognacConcreteAdsManager *_concreteAdsManager;
    _Bool gameAudioDisabled;
    NSString *activeAppId;
    User *_user;
    SCUserSession *_userSession;
}

@property(readonly, nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) __weak User *user; // @synthesize user=_user;
@property(copy, nonatomic) NSString *activeAppId; // @synthesize activeAppId;
@property(nonatomic) _Bool gameAudioDisabled; // @synthesize gameAudioDisabled;
- (void).cxx_destruct;
- (void)presentSendToControllerWithPresentingVC:(id)arg1 imageDownloader:(id)arg2 scoreShareMessage:(id)arg3 mediaViewAspectRatio:(double)arg4 sendingDelegate:(id)arg5 navigationDelegate:(id)arg6;
- (id)presentCameraWithPresentingVC:(id)arg1 replyParameters:(id)arg2 stickerImage:(id)arg3 appId:(id)arg4 captureWorkflowResultDelegate:(id)arg5;
- (id)localStorageService;
- (id)legacyUserDisplayMutator;
- (void)setScreenshotProvider:(id)arg1;
- (unsigned long long)environment;
- (id)supportActionHandler;
- (id)supportDataProviderWithPlayerItem:(id)arg1 gameSessionId:(id)arg2;
- (_Bool)enableTrace;
- (id)talkManager;
- (id)languageCodeByUserSettings;
- (id)countryCodeByUserSettings;
- (id)cognacServiceEndpoint;
- (void)setCognacServiceEndpoint:(id)arg1;
- (id)cognacServiceClient;
- (id)cognacDataStorage;
- (id)cognacServiceCoordinator;
- (id)adsManager;
- (unsigned long long)maxNumberParticipantsAllowedInAGroup;
- (id)webProxyLoader;
- (id)webProxyCache;
- (id)overrideWebProxyCacheExpiration;
- (void)showWebProxyDebugBannerWithText:(id)arg1;
- (id)deepLinkManagerWithNavigationDelegate:(id)arg1;
- (id)groupManager;
- (id)notificationManager;
- (id)bitmojiSelfieId;
- (id)bitmojiAvatarId;
- (id)displayName;
- (id)username;
- (id)userId;
- (id)initWithUser:(id)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


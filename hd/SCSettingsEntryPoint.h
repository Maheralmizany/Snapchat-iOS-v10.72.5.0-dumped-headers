//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCApplicationStorageServices, SCAuthenticatedNetworkServices, SCBloopsServices, SCChangeLanguageInSettingsActionRecordingServices, SCConversationServices, SCCreatorSettingsService, SCFriendmojiServices, SCFriendsFeedServices, SCInternalQuickLoginServices, SCLocationSharingServices, SCNativeFeedServices, SCNativeMessagingServices, SCOneTapLoginServices, SCScopeExposer, SCSettingsScope, SCSettingsWorkflow, SCShakeToReportServices, SCSnapProServices, SCSnapchatterServices, SCSystemScope, SCUserSessionScope;

@interface SCSettingsEntryPoint : SCEntryPoint
{
    SCSettingsWorkflow *_settingsWorkflow;
    SCSystemScope *_systemScope;
    SCUserSessionScope *_userSessionScope;
    SCFriendmojiServices *_friendmojiServices;
    SCSettingsScope *_settingsScope;
    SCNativeMessagingServices *_nativeMessagingServices;
    SCNativeFeedServices *_nativeFeedServices;
    SCFriendsFeedServices *_friendsFeedServices;
    SCConversationServices *_conversationServices;
    SCSnapchatterServices *_snapchatterServices;
    SCSnapProServices *_snapProServices;
    SCCreatorSettingsService *_creatorSettingsService;
    SCBloopsServices *_bloopsServices;
    SCShakeToReportServices *_shakeToReportServices;
    SCApplicationStorageServices *_applicationStorageServices;
    SCOneTapLoginServices *_oneTapLoginServices;
    SCLocationSharingServices *_locationSharingServices;
    SCInternalQuickLoginServices *_internalQuickLoginServices;
    SCAuthenticatedNetworkServices *_networkServices;
    SCChangeLanguageInSettingsActionRecordingServices *_changeLanguageInSettingsActionRecordingServices;
    SCScopeExposer *_logoutScopeExposer;
}

@property(retain, nonatomic) SCScopeExposer *logoutScopeExposer; // @synthesize logoutScopeExposer=_logoutScopeExposer;
@property(nonatomic) __weak SCChangeLanguageInSettingsActionRecordingServices *changeLanguageInSettingsActionRecordingServices; // @synthesize changeLanguageInSettingsActionRecordingServices=_changeLanguageInSettingsActionRecordingServices;
@property(nonatomic) __weak SCAuthenticatedNetworkServices *networkServices; // @synthesize networkServices=_networkServices;
@property(nonatomic) __weak SCInternalQuickLoginServices *internalQuickLoginServices; // @synthesize internalQuickLoginServices=_internalQuickLoginServices;
@property(nonatomic) __weak SCLocationSharingServices *locationSharingServices; // @synthesize locationSharingServices=_locationSharingServices;
@property(nonatomic) __weak SCOneTapLoginServices *oneTapLoginServices; // @synthesize oneTapLoginServices=_oneTapLoginServices;
@property(nonatomic) __weak SCApplicationStorageServices *applicationStorageServices; // @synthesize applicationStorageServices=_applicationStorageServices;
@property(nonatomic) __weak SCShakeToReportServices *shakeToReportServices; // @synthesize shakeToReportServices=_shakeToReportServices;
@property(nonatomic) __weak SCBloopsServices *bloopsServices; // @synthesize bloopsServices=_bloopsServices;
@property(nonatomic) __weak SCCreatorSettingsService *creatorSettingsService; // @synthesize creatorSettingsService=_creatorSettingsService;
@property(nonatomic) __weak SCSnapProServices *snapProServices; // @synthesize snapProServices=_snapProServices;
@property(nonatomic) __weak SCSnapchatterServices *snapchatterServices; // @synthesize snapchatterServices=_snapchatterServices;
@property(nonatomic) __weak SCConversationServices *conversationServices; // @synthesize conversationServices=_conversationServices;
@property(nonatomic) __weak SCFriendsFeedServices *friendsFeedServices; // @synthesize friendsFeedServices=_friendsFeedServices;
@property(nonatomic) __weak SCNativeFeedServices *nativeFeedServices; // @synthesize nativeFeedServices=_nativeFeedServices;
@property(nonatomic) __weak SCNativeMessagingServices *nativeMessagingServices; // @synthesize nativeMessagingServices=_nativeMessagingServices;
@property(nonatomic) __weak SCSettingsScope *settingsScope; // @synthesize settingsScope=_settingsScope;
@property(nonatomic) __weak SCFriendmojiServices *friendmojiServices; // @synthesize friendmojiServices=_friendmojiServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
@property(nonatomic) __weak SCSystemScope *systemScope; // @synthesize systemScope=_systemScope;
- (void).cxx_destruct;
- (void)begin;

@end

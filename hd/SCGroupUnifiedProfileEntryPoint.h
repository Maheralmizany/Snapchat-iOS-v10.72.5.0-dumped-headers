//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCCharmsServices, SCConversationServices, SCCustomStoriesServices, SCFriendsFeedServices, SCGroupServices, SCLegacySnapchatterServices, SCLegacyStoriesServices, SCNativeFeedServices, SCNativeMessagingServices, SCNetworkImageServices, SCPinnedConversationsServices, SCServicesExposer, SCSnapchatterServices, SCStartupCompleteScope, SCStoriesServices, SCUserSessionScope, SCUserStorageServices;

@interface SCGroupUnifiedProfileEntryPoint : SCEntryPoint
{
    SCStartupCompleteScope *_startupCompleteScope;
    SCUserSessionScope *_userSessionScope;
    SCUserStorageServices *_userStorageServices;
    SCStoriesServices *_storiesServices;
    SCLegacyStoriesServices *_legacyStoriesServices;
    SCCustomStoriesServices *_customStoriesServices;
    SCSnapchatterServices *_snapchatterServices;
    SCLegacySnapchatterServices *_legacySnapchatterServices;
    SCFriendsFeedServices *_friendsFeedServices;
    SCConversationServices *_conversationServices;
    SCGroupServices *_groupServices;
    SCNativeMessagingServices *_nativeMessagingServices;
    SCNativeFeedServices *_nativeFeedServices;
    SCCharmsServices *_charmsServices;
    SCPinnedConversationsServices *_pinnedConversationsServices;
    SCNetworkImageServices *_networkImageServices;
    SCServicesExposer *_groupUnifiedProfileServicesExposer;
}

@property(retain, nonatomic) SCServicesExposer *groupUnifiedProfileServicesExposer; // @synthesize groupUnifiedProfileServicesExposer=_groupUnifiedProfileServicesExposer;
@property(nonatomic) __weak SCNetworkImageServices *networkImageServices; // @synthesize networkImageServices=_networkImageServices;
@property(nonatomic) __weak SCPinnedConversationsServices *pinnedConversationsServices; // @synthesize pinnedConversationsServices=_pinnedConversationsServices;
@property(nonatomic) __weak SCCharmsServices *charmsServices; // @synthesize charmsServices=_charmsServices;
@property(nonatomic) __weak SCNativeFeedServices *nativeFeedServices; // @synthesize nativeFeedServices=_nativeFeedServices;
@property(nonatomic) __weak SCNativeMessagingServices *nativeMessagingServices; // @synthesize nativeMessagingServices=_nativeMessagingServices;
@property(nonatomic) __weak SCGroupServices *groupServices; // @synthesize groupServices=_groupServices;
@property(nonatomic) __weak SCConversationServices *conversationServices; // @synthesize conversationServices=_conversationServices;
@property(nonatomic) __weak SCFriendsFeedServices *friendsFeedServices; // @synthesize friendsFeedServices=_friendsFeedServices;
@property(nonatomic) __weak SCLegacySnapchatterServices *legacySnapchatterServices; // @synthesize legacySnapchatterServices=_legacySnapchatterServices;
@property(nonatomic) __weak SCSnapchatterServices *snapchatterServices; // @synthesize snapchatterServices=_snapchatterServices;
@property(nonatomic) __weak SCCustomStoriesServices *customStoriesServices; // @synthesize customStoriesServices=_customStoriesServices;
@property(nonatomic) __weak SCLegacyStoriesServices *legacyStoriesServices; // @synthesize legacyStoriesServices=_legacyStoriesServices;
@property(nonatomic) __weak SCStoriesServices *storiesServices; // @synthesize storiesServices=_storiesServices;
@property(nonatomic) __weak SCUserStorageServices *userStorageServices; // @synthesize userStorageServices=_userStorageServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
@property(nonatomic) __weak SCStartupCompleteScope *startupCompleteScope; // @synthesize startupCompleteScope=_startupCompleteScope;
- (void).cxx_destruct;
- (void)begin;

@end


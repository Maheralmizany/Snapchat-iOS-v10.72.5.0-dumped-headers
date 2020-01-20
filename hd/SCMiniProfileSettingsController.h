//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCFriendsFeedItem, SCScopedAccess, SCSnapchatter, SCSnapchattersAlertGear, SCTempSnapchatter, SCTempSnapchatterAlertGear;

@interface SCMiniProfileSettingsController : NSObject
{
    SCSnapchatter *_snapchatter;
    SCSnapchattersAlertGear *_snapchattersAlertGear;
    SCScopedAccess *_friendsFeedDataAccess;
    SCScopedAccess *_clearFeedDataAccess;
    SCFriendsFeedItem *_friendsFeedItem;
    _Bool _isDoNotDisturbOn;
    SCTempSnapchatter *_tempSnapchatter;
    SCTempSnapchatterAlertGear *_tempSnapchatterAlertGear;
}

- (void).cxx_destruct;
- (void)_showSettingsViewForTempSnapchatter;
- (void)_showSettingsViewForSnapchatter;
- (void)_clearFriendsFeedItem;
- (void)_handleClearConversationAction;
- (id)clearConversationActionButton;
- (id)cancelActionButton;
- (id)notificationActionButton;
- (void)showSettingsView;
- (id)initWithSnapchatter:(id)arg1 friendsFeedDataAccess:(id)arg2 conversationManagerAccess:(id)arg3 nativeFeedManagerAccess:(id)arg4 scopedArroyoConversationIdsManager:(id)arg5 snapchattersAlertGear:(id)arg6 isDoNotDisturbOn:(_Bool)arg7 tempSnapchatter:(id)arg8 tempSnapchatterAlertGear:(id)arg9;
- (id)initWithTempSnapchatter:(id)arg1 friendsFeedDataAccess:(id)arg2 conversationManagerAccess:(id)arg3 nativeFeedManagerAccess:(id)arg4 scopedArroyoConversationIdsManager:(id)arg5 tempSnapchatterAlertGear:(id)arg6;
- (id)initWithSnapchatter:(id)arg1 friendsFeedDataAccess:(id)arg2 conversationManagerAccess:(id)arg3 nativeFeedManagerAccess:(id)arg4 scopedArroyoConversationIdsManager:(id)arg5 snapchattersAlertGear:(id)arg6 isDoNotDisturbOn:(_Bool)arg7;

@end


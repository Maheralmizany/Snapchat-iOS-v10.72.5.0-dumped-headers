//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCGroupsDataMutating.h"

@class NSString, SCArroyoConversationIdsManager, SCLazy;

@interface SCArroyoGroupsDataMutator : NSObject <SCGroupsDataMutating>
{
    id <SCNativeMessagingSessionManaging> _nativeSessionManager;
    SCArroyoConversationIdsManager *_conversationIdsManager;
    SCLazy *_lazyGroupsDataTracker;
}

- (void).cxx_destruct;
- (void)joinGroupWithGroupInviteId:(id)arg1 groupId:(id)arg2 source:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)deleteGroupInvitesWithGroupId:(id)arg1 groupInviteType:(long long)arg2 source:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateGroupWithId:(id)arg1 lastInteractionTimestamp:(id)arg2;
- (void)updateGroupWithId:(id)arg1 groupMetadata:(id)arg2 interactionTimestamp:(id)arg3;
- (void)updateGroupVideoChatParamsWithId:(id)arg1 videoChatParams:(id)arg2;
- (void)updateGroupParticipantLastContentWithId:(id)arg1 participantLastContent:(id)arg2;
- (void)updateGroupNotificationWithId:(id)arg1 notificationOn:(_Bool)arg2 source:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateGroupNameWithId:(id)arg1 groupName:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateGroupMuteStateWithId:(id)arg1 isMuted:(_Bool)arg2 shouldLog:(_Bool)arg3 completion:(CDUnknownBlockType)arg4 callbackQueue:(id)arg5;
- (void)updateGroupMentionNotificationWithId:(id)arg1 notificationsOn:(_Bool)arg2 source:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)leaveGroupWithId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)grantGroupExemptBlockedUsersWithId:(id)arg1 newBlockedParticipantExceptions:(id)arg2 completion:(CDUnknownBlockType)arg3 callbackQueue:(id)arg4;
- (void)addToGroupWithId:(id)arg1 friends:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)nativeConversationManager;
- (id)initWithNativeSessionManager:(id)arg1 conversationIdsManager:(id)arg2 groupsDataTracker:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

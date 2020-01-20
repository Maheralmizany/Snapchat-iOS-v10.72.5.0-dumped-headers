//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCTIdentityServices.h"

@class NSMutableDictionary, NSString, SCLazy, SCUserSession;

@interface SCTLazyIdentityServices : NSObject <SCTIdentityServices>
{
    SCUserSession *_userSession;
    SCLazy *_snapchatterFetcher;
    SCLazy *_groupRepository;
    SCLazy *_nativeSessionManager;
    SCLazy *_arroyoConvoIdsManager;
    NSMutableDictionary *_talkAuthMap;
    NSMutableDictionary *_cognacAuthMap;
    NSMutableDictionary *_talkPartipantIdMappings;
}

- (void).cxx_destruct;
- (void)_ensureArroyoConvoExistsOnServerForConvoId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_ensureLegacyConvoExistsOnServerForConvoId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_videoChatParamsFromSCTAuth:(id)arg1;
- (id)_talkParticipantFromChatGroupParticipant:(id)arg1;
- (void)_storeTalkAuth:(id)arg1 convoId:(id)arg2;
- (id)_groupManager;
- (id)_userIdForUsername:(id)arg1 conversationId:(id)arg2;
- (void)ensureConvoExistsOnServerForConvoId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isBestFriendConvoId:(id)arg1;
- (id)displayNameForConvoId:(id)arg1;
- (void)getConversationCtxInfoForConvoId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)refreshTalkAuthForConvoId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)talkAuthForConvoId:(id)arg1;
- (void)setPushTalkAuth:(id)arg1 convoId:(id)arg2;
- (void)localParticipantForConvoId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)localParticipantForConvoId:(id)arg1;
- (id)remoteParticipantsForConvoId:(id)arg1;
- (void)refreshCognacAuthForConvoId:(id)arg1 cognacId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)cognacAuthForConvoId:(id)arg1 cognacId:(id)arg2;
- (id)initWithUserSession:(id)arg1 snapchattersDataFetcher:(id)arg2 groupSnapchatterRepository:(id)arg3 nativeSessionManager:(id)arg4 arroyoConvoIdsManager:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

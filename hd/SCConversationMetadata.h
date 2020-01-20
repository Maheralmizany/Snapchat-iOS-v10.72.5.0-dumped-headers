//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCDocObject.h"

#import "NSCopying.h"
#import "SCChatConversationMetadataProtocol.h"

@class NSArray, NSData, NSString, SCConversationGroupInfo, SCConversationLastOpenTimestampInfo, SCConversationOneOnOneInfo;

@interface SCConversationMetadata : SCDocObject <SCChatConversationMetadataProtocol, NSCopying>
{
    BOOL _loadStatus;
    BOOL _historyLoadStatus;
    BOOL _visibility;
    _Bool _notificationStatus;
    _Bool _hasPendingSnapUpdates;
    _Bool _earlierContentExists;
    _Bool _isCognacNotificationMuted;
    BOOL _migrationState;
    NSString *_id;
    NSArray *_sequenceStates;
    NSArray *_releaseStates;
    double _lastInteractionTimestampInEpochSecs;
    double _lastClearedTimestampInEpochSecs;
    NSArray *_lastMessageMetadatas;
    SCConversationLastOpenTimestampInfo *_lastOpenTimestampInfo;
    NSData *_chatDraftData;
    SCConversationOneOnOneInfo *_oneOnOneInfo;
    SCConversationGroupInfo *_groupInfo;
    NSArray *_stickerUsages;
    NSArray *_pendingSnapUpdates;
    NSArray *_unknownMessageTyes;
    NSData *_failedMessages;
}

+ (struct SCDocObjectClassFunctionPointer)objectClassFunctionPointer;
+ (id)immutableObjectParse:(const void *)arg1 bufferSize:(unsigned long long)arg2;
+ (const char *)table;
@property(readonly, nonatomic) BOOL migrationState; // @synthesize migrationState=_migrationState;
@property(readonly, nonatomic) _Bool isCognacNotificationMuted; // @synthesize isCognacNotificationMuted=_isCognacNotificationMuted;
@property(readonly, nonatomic) _Bool earlierContentExists; // @synthesize earlierContentExists=_earlierContentExists;
@property(readonly, copy, nonatomic) NSData *failedMessages; // @synthesize failedMessages=_failedMessages;
@property(readonly, copy, nonatomic) NSArray *unknownMessageTyes; // @synthesize unknownMessageTyes=_unknownMessageTyes;
@property(readonly, nonatomic) _Bool hasPendingSnapUpdates; // @synthesize hasPendingSnapUpdates=_hasPendingSnapUpdates;
@property(readonly, copy, nonatomic) NSArray *pendingSnapUpdates; // @synthesize pendingSnapUpdates=_pendingSnapUpdates;
@property(readonly, copy, nonatomic) NSArray *stickerUsages; // @synthesize stickerUsages=_stickerUsages;
@property(readonly, copy, nonatomic) SCConversationGroupInfo *groupInfo; // @synthesize groupInfo=_groupInfo;
@property(readonly, copy, nonatomic) SCConversationOneOnOneInfo *oneOnOneInfo; // @synthesize oneOnOneInfo=_oneOnOneInfo;
@property(readonly, nonatomic) _Bool notificationStatus; // @synthesize notificationStatus=_notificationStatus;
@property(readonly, copy, nonatomic) NSData *chatDraftData; // @synthesize chatDraftData=_chatDraftData;
@property(readonly, nonatomic) BOOL visibility; // @synthesize visibility=_visibility;
@property(readonly, copy, nonatomic) SCConversationLastOpenTimestampInfo *lastOpenTimestampInfo; // @synthesize lastOpenTimestampInfo=_lastOpenTimestampInfo;
@property(readonly, copy, nonatomic) NSArray *lastMessageMetadatas; // @synthesize lastMessageMetadatas=_lastMessageMetadatas;
@property(readonly, nonatomic) double lastClearedTimestampInEpochSecs; // @synthesize lastClearedTimestampInEpochSecs=_lastClearedTimestampInEpochSecs;
@property(readonly, nonatomic) double lastInteractionTimestampInEpochSecs; // @synthesize lastInteractionTimestampInEpochSecs=_lastInteractionTimestampInEpochSecs;
@property(readonly, nonatomic) BOOL historyLoadStatus; // @synthesize historyLoadStatus=_historyLoadStatus;
@property(readonly, nonatomic) BOOL loadStatus; // @synthesize loadStatus=_loadStatus;
@property(readonly, copy, nonatomic) NSArray *releaseStates; // @synthesize releaseStates=_releaseStates;
@property(readonly, copy, nonatomic) NSArray *sequenceStates; // @synthesize sequenceStates=_sequenceStates;
@property(readonly, copy, nonatomic) NSString *id; // @synthesize id=_id;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithId:(id)arg1 sequenceStates:(id)arg2 releaseStates:(id)arg3 loadStatus:(BOOL)arg4 historyLoadStatus:(BOOL)arg5 lastInteractionTimestampInEpochSecs:(double)arg6 lastClearedTimestampInEpochSecs:(double)arg7 lastMessageMetadatas:(id)arg8 lastOpenTimestampInfo:(id)arg9 visibility:(BOOL)arg10 chatDraftData:(id)arg11 notificationStatus:(_Bool)arg12 oneOnOneInfo:(id)arg13 groupInfo:(id)arg14 stickerUsages:(id)arg15 pendingSnapUpdates:(id)arg16 hasPendingSnapUpdates:(_Bool)arg17 unknownMessageTyes:(id)arg18 failedMessages:(id)arg19 earlierContentExists:(_Bool)arg20 isCognacNotificationMuted:(_Bool)arg21 migrationState:(BOOL)arg22;
- (id)unknownMessageTypes;
- (struct NSDictionary *)knownStateUpdateSequenceNums;
- (struct NSDictionary *)knownChatSequenceNumsForViewing;
- (struct NSDictionary *)knownChatSequenceNums;
- (_Bool)isGroupConversation;
- (struct NSDictionary *)earliestKnownChatSequenceNums;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

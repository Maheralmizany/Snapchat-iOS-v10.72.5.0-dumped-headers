//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCDocObjectChangeRequest.h"

@class NSArray, NSString, SCProfileChatMediaGeneralMediaDataModel;

@interface SCProfileChatMediaDataModelChangeRequest : NSObject <SCDocObjectChangeRequest>
{
    long long _rowid;
    int _requestType;
    BOOL _messageType;
    _Bool _isGroupMessage;
    int _senderChatSequenceNumber;
    NSString *_ownerId;
    NSString *_chatMediaId;
    unsigned long long _expirationTimestamp;
    NSString *_messageId;
    long long _type;
    NSString *_senderUsername;
    NSString *_conversationId;
    unsigned long long _sequenceNumber;
    unsigned long long _messageTimeStamp;
    SCProfileChatMediaGeneralMediaDataModel *_generalMedia;
    NSArray *_memoryStories;
    NSArray *_savedStates;
    NSArray *_mediaCardAttributes;
    NSArray *_mentions;
    unsigned long long _retentionInMinutes;
}

+ (id)deletionRequestForProfileChatMediaDataModel:(id)arg1;
+ (id)changeRequestForProfileChatMediaDataModel:(id)arg1;
+ (id)creationRequestWithProfileChatMediaDataModel:(id)arg1;
@property(nonatomic) int senderChatSequenceNumber; // @synthesize senderChatSequenceNumber=_senderChatSequenceNumber;
@property(nonatomic) unsigned long long retentionInMinutes; // @synthesize retentionInMinutes=_retentionInMinutes;
@property(copy, nonatomic) NSArray *mentions; // @synthesize mentions=_mentions;
@property(nonatomic) _Bool isGroupMessage; // @synthesize isGroupMessage=_isGroupMessage;
@property(copy, nonatomic) NSArray *mediaCardAttributes; // @synthesize mediaCardAttributes=_mediaCardAttributes;
@property(nonatomic) BOOL messageType; // @synthesize messageType=_messageType;
@property(copy, nonatomic) NSArray *savedStates; // @synthesize savedStates=_savedStates;
@property(copy, nonatomic) NSArray *memoryStories; // @synthesize memoryStories=_memoryStories;
@property(copy, nonatomic) SCProfileChatMediaGeneralMediaDataModel *generalMedia; // @synthesize generalMedia=_generalMedia;
@property(nonatomic) unsigned long long messageTimeStamp; // @synthesize messageTimeStamp=_messageTimeStamp;
@property(nonatomic) unsigned long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
@property(copy, nonatomic) NSString *senderUsername; // @synthesize senderUsername=_senderUsername;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(nonatomic) unsigned long long expirationTimestamp; // @synthesize expirationTimestamp=_expirationTimestamp;
@property(copy, nonatomic) NSString *chatMediaId; // @synthesize chatMediaId=_chatMediaId;
@property(copy, nonatomic) NSString *ownerId; // @synthesize ownerId=_ownerId;
- (void).cxx_destruct;
- (id)transactWithSQLite:(struct SQLiteConnection *)arg1 flatbuffers:(struct FlatBufferBuilder *)arg2;
- (id)_profileChatMediaDataModel;
- (id)initWithRowid:(long long)arg1 ownerId:(id)arg2 chatMediaId:(id)arg3 expirationTimestamp:(unsigned long long)arg4 messageId:(id)arg5 type:(long long)arg6 senderUsername:(id)arg7 conversationId:(id)arg8 sequenceNumber:(unsigned long long)arg9 messageTimeStamp:(unsigned long long)arg10 generalMedia:(id)arg11 memoryStories:(id)arg12 savedStates:(id)arg13 messageType:(BOOL)arg14 mediaCardAttributes:(id)arg15 isGroupMessage:(_Bool)arg16 mentions:(id)arg17 retentionInMinutes:(unsigned long long)arg18 senderChatSequenceNumber:(int)arg19;
- (void)createTableWithSQLite:(struct sqlite3 *)arg1;
- (const char *)table;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


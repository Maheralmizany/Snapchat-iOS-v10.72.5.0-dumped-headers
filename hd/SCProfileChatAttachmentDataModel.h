//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCDocObject.h"

#import "NSCopying.h"

@class NSString, SCProfileChatAttachmentInfoDataModel, SCProfileChatAttachmentSnapchatterDataModel;

@interface SCProfileChatAttachmentDataModel : SCDocObject <NSCopying>
{
    NSString *_ownerId;
    NSString *_chatAttachmentId;
    unsigned long long _expirationTimestamp;
    NSString *_messageId;
    long long _type;
    NSString *_senderUsername;
    NSString *_conversationId;
    unsigned long long _messageTimeStamp;
    SCProfileChatAttachmentSnapchatterDataModel *_snapchatter;
    SCProfileChatAttachmentInfoDataModel *_info;
}

+ (struct SCDocObjectClassFunctionPointer)objectClassFunctionPointer;
+ (id)immutableObjectParse:(const void *)arg1 bufferSize:(unsigned long long)arg2;
+ (const char *)table;
@property(readonly, copy, nonatomic) SCProfileChatAttachmentInfoDataModel *info; // @synthesize info=_info;
@property(readonly, copy, nonatomic) SCProfileChatAttachmentSnapchatterDataModel *snapchatter; // @synthesize snapchatter=_snapchatter;
@property(readonly, nonatomic) unsigned long long messageTimeStamp; // @synthesize messageTimeStamp=_messageTimeStamp;
@property(readonly, copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
@property(readonly, copy, nonatomic) NSString *senderUsername; // @synthesize senderUsername=_senderUsername;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(readonly, nonatomic) unsigned long long expirationTimestamp; // @synthesize expirationTimestamp=_expirationTimestamp;
@property(readonly, copy, nonatomic) NSString *chatAttachmentId; // @synthesize chatAttachmentId=_chatAttachmentId;
@property(readonly, copy, nonatomic) NSString *ownerId; // @synthesize ownerId=_ownerId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOwnerId:(id)arg1 chatAttachmentId:(id)arg2 expirationTimestamp:(unsigned long long)arg3 messageId:(id)arg4 type:(long long)arg5 senderUsername:(id)arg6 conversationId:(id)arg7 messageTimeStamp:(unsigned long long)arg8 snapchatter:(id)arg9 info:(id)arg10;

@end


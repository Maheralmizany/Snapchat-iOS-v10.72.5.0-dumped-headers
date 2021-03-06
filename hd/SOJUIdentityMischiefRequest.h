//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUIdentityMischiefRequest.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@interface SOJUIdentityMischiefRequest : NSObject <SOJUIdentityMischiefRequest>
{
    NSString *_timestamp;
    NSString *_reqToken;
    NSString *_username;
    NSString *_mischiefId;
    NSString *_mischiefAction;
    NSString *_mischiefName;
    NSArray *_participantsToAdd;
    NSNumber *_turnNotificationOn;
    NSDictionary *_latestSequenceNumbers;
    NSDictionary *_earliestSequenceNumbers;
    NSString *_paginationType;
    NSDictionary *_sojuNewBlockedParticipantExceptions;
    NSNumber *_muteMischiefStory;
    NSNumber *_muteCognacNotification;
    NSString *_groupInviteId;
    NSString *_groupInviteType;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSString *groupInviteType; // @synthesize groupInviteType=_groupInviteType;
@property(readonly, copy, nonatomic) NSString *groupInviteId; // @synthesize groupInviteId=_groupInviteId;
@property(readonly, copy, nonatomic) NSNumber *muteCognacNotification; // @synthesize muteCognacNotification=_muteCognacNotification;
@property(readonly, copy, nonatomic) NSNumber *muteMischiefStory; // @synthesize muteMischiefStory=_muteMischiefStory;
@property(readonly, copy, nonatomic) NSDictionary *sojuNewBlockedParticipantExceptions; // @synthesize sojuNewBlockedParticipantExceptions=_sojuNewBlockedParticipantExceptions;
@property(readonly, copy, nonatomic) NSString *paginationType; // @synthesize paginationType=_paginationType;
@property(readonly, copy, nonatomic) NSDictionary *earliestSequenceNumbers; // @synthesize earliestSequenceNumbers=_earliestSequenceNumbers;
@property(readonly, copy, nonatomic) NSDictionary *latestSequenceNumbers; // @synthesize latestSequenceNumbers=_latestSequenceNumbers;
@property(readonly, copy, nonatomic) NSNumber *turnNotificationOn; // @synthesize turnNotificationOn=_turnNotificationOn;
@property(readonly, copy, nonatomic) NSArray *participantsToAdd; // @synthesize participantsToAdd=_participantsToAdd;
@property(readonly, copy, nonatomic) NSString *mischiefName; // @synthesize mischiefName=_mischiefName;
@property(readonly, copy, nonatomic) NSString *mischiefAction; // @synthesize mischiefAction=_mischiefAction;
@property(readonly, copy, nonatomic) NSString *mischiefId; // @synthesize mischiefId=_mischiefId;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, copy, nonatomic) NSString *reqToken; // @synthesize reqToken=_reqToken;
@property(readonly, copy, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTimestamp:(id)arg1 reqToken:(id)arg2 username:(id)arg3 mischiefId:(id)arg4 mischiefAction:(id)arg5 mischiefName:(id)arg6 participantsToAdd:(id)arg7 turnNotificationOn:(id)arg8 latestSequenceNumbers:(id)arg9 earliestSequenceNumbers:(id)arg10 paginationType:(id)arg11 sojuNewBlockedParticipantExceptions:(id)arg12 muteMischiefStory:(id)arg13 muteCognacNotification:(id)arg14 groupInviteId:(id)arg15 groupInviteType:(id)arg16;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)groupInviteTypeEnum;
- (_Bool)muteCognacNotificationValue;
- (_Bool)muteMischiefStoryValue;
- (long long)paginationTypeEnum;
- (_Bool)turnNotificationOnValue;
- (long long)mischiefActionEnum;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


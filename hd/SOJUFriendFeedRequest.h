//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUFriendFeedRequest.h"

@class NSArray, NSNumber, NSString, SOJUBroadcastStoryFriendFeedRequest, SOJUChatFeedRequest, SOJUFriendFeedRequestDebugParam;

@interface SOJUFriendFeedRequest : NSObject <SOJUFriendFeedRequest>
{
    NSString *_timestamp;
    NSString *_reqToken;
    NSString *_username;
    SOJUChatFeedRequest *_chatFeedRequest;
    SOJUBroadcastStoryFriendFeedRequest *_storyFriendFeedRequest;
    NSString *_sessionId;
    NSString *_requestId;
    NSString *_callOriginationType;
    NSNumber *_creationTimestamp;
    NSString *_layoutType;
    NSArray *_conversationIdsToFetch;
    NSArray *_previousPagesItemIds;
    SOJUFriendFeedRequestDebugParam *_debugParam;
    NSNumber *_lastFullSyncTimestamp;
    NSNumber *_returnRankedStoriesOnly;
    NSString *_notificationId;
    NSNumber *_sinceTimestamp;
    NSNumber *_limit;
    NSNumber *_returnFriendStoriesOnly;
    NSNumber *_returnFeedItemWithSignals;
    NSArray *_userStoryInteractionHistory;
    NSArray *_friendRankingSignals;
    NSNumber *_filterOutUnidirectionalFriendStories;
    NSString *_friendStoryRankingSignals;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSString *friendStoryRankingSignals; // @synthesize friendStoryRankingSignals=_friendStoryRankingSignals;
@property(readonly, copy, nonatomic) NSNumber *filterOutUnidirectionalFriendStories; // @synthesize filterOutUnidirectionalFriendStories=_filterOutUnidirectionalFriendStories;
@property(readonly, copy, nonatomic) NSArray *friendRankingSignals; // @synthesize friendRankingSignals=_friendRankingSignals;
@property(readonly, copy, nonatomic) NSArray *userStoryInteractionHistory; // @synthesize userStoryInteractionHistory=_userStoryInteractionHistory;
@property(readonly, copy, nonatomic) NSNumber *returnFeedItemWithSignals; // @synthesize returnFeedItemWithSignals=_returnFeedItemWithSignals;
@property(readonly, copy, nonatomic) NSNumber *returnFriendStoriesOnly; // @synthesize returnFriendStoriesOnly=_returnFriendStoriesOnly;
@property(readonly, copy, nonatomic) NSNumber *limit; // @synthesize limit=_limit;
@property(readonly, copy, nonatomic) NSNumber *sinceTimestamp; // @synthesize sinceTimestamp=_sinceTimestamp;
@property(readonly, copy, nonatomic) NSString *notificationId; // @synthesize notificationId=_notificationId;
@property(readonly, copy, nonatomic) NSNumber *returnRankedStoriesOnly; // @synthesize returnRankedStoriesOnly=_returnRankedStoriesOnly;
@property(readonly, copy, nonatomic) NSNumber *lastFullSyncTimestamp; // @synthesize lastFullSyncTimestamp=_lastFullSyncTimestamp;
@property(readonly, copy, nonatomic) SOJUFriendFeedRequestDebugParam *debugParam; // @synthesize debugParam=_debugParam;
@property(readonly, copy, nonatomic) NSArray *previousPagesItemIds; // @synthesize previousPagesItemIds=_previousPagesItemIds;
@property(readonly, copy, nonatomic) NSArray *conversationIdsToFetch; // @synthesize conversationIdsToFetch=_conversationIdsToFetch;
@property(readonly, copy, nonatomic) NSString *layoutType; // @synthesize layoutType=_layoutType;
@property(readonly, copy, nonatomic) NSNumber *creationTimestamp; // @synthesize creationTimestamp=_creationTimestamp;
@property(readonly, copy, nonatomic) NSString *callOriginationType; // @synthesize callOriginationType=_callOriginationType;
@property(readonly, copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(readonly, copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(readonly, copy, nonatomic) SOJUBroadcastStoryFriendFeedRequest *storyFriendFeedRequest; // @synthesize storyFriendFeedRequest=_storyFriendFeedRequest;
@property(readonly, copy, nonatomic) SOJUChatFeedRequest *chatFeedRequest; // @synthesize chatFeedRequest=_chatFeedRequest;
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
- (id)initWithTimestamp:(id)arg1 reqToken:(id)arg2 username:(id)arg3 chatFeedRequest:(id)arg4 storyFriendFeedRequest:(id)arg5 sessionId:(id)arg6 requestId:(id)arg7 callOriginationType:(id)arg8 creationTimestamp:(id)arg9 layoutType:(id)arg10 conversationIdsToFetch:(id)arg11 previousPagesItemIds:(id)arg12 debugParam:(id)arg13 lastFullSyncTimestamp:(id)arg14 returnRankedStoriesOnly:(id)arg15 notificationId:(id)arg16 sinceTimestamp:(id)arg17 limit:(id)arg18 returnFriendStoriesOnly:(id)arg19 returnFeedItemWithSignals:(id)arg20 userStoryInteractionHistory:(id)arg21 friendRankingSignals:(id)arg22 filterOutUnidirectionalFriendStories:(id)arg23 friendStoryRankingSignals:(id)arg24;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)filterOutUnidirectionalFriendStoriesValue;
- (_Bool)returnFeedItemWithSignalsValue;
- (_Bool)returnFriendStoriesOnlyValue;
- (int)limitValue;
- (long long)sinceTimestampValue;
- (_Bool)returnRankedStoriesOnlyValue;
- (long long)lastFullSyncTimestampValue;
- (long long)layoutTypeEnum;
- (long long)creationTimestampValue;
- (long long)callOriginationTypeEnum;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


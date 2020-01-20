//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSArray, NSNumber, NSString, SOJUChatFeedResponse, SOJUFriendFeedRankingMetadata, SOJUFriendFeedResponseDebugInfo, SOJUFriendFeedUserSignals, SOJUStoriesResponse;

@protocol SOJUFriendFeedResponse <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) SOJUFriendFeedUserSignals *userSignals;
@property(readonly, copy, nonatomic) NSNumber *forceFullSyncFeedItems;
@property(readonly, copy, nonatomic) SOJUFriendFeedResponseDebugInfo *debugInfo;
@property(readonly, copy, nonatomic) NSString *requestId;
@property(readonly, copy, nonatomic) NSString *sessionId;
@property(readonly, copy, nonatomic) NSNumber *creationTimestamp;
@property(readonly, copy, nonatomic) SOJUFriendFeedRankingMetadata *rankingMetadata;
@property(readonly, copy, nonatomic) NSArray *feedItems;
@property(readonly, copy, nonatomic) SOJUStoriesResponse *storyFeedResponse;
@property(readonly, copy, nonatomic) SOJUChatFeedResponse *chatFeedResponse;
@end


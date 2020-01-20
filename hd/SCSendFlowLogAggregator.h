//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet, SCLazy;

@interface SCSendFlowLogAggregator : NSObject
{
    id <SCSendFlowMetricsEmitting> _metricsEmitter;
    SCLazy *_autoShakeToReporter;
    NSMutableDictionary *_messageIdToTimeline;
    NSMutableDictionary *_mediaIdToMessageId;
    NSMutableDictionary *_temporaryMediaIdToTimestamps;
    NSMutableDictionary *_clientIdToStoryTypes;
    NSMutableDictionary *_clientIdToStoryPostContext;
    NSMutableSet *_clientIdsWithStoryPostAsyncFail;
}

- (void).cxx_destruct;
- (id)_timelineForMediaId:(id)arg1;
- (id)_timelineForMessageId:(id)arg1;
- (void)_cleanupTimelineForMessageId:(id)arg1;
- (void)_flushTemporaryTimestampsForMediaId:(id)arg1;
- (void)_storeTimestamp:(id)arg1 forMediaId:(id)arg2;
- (void)clearTemporaryMediaIds:(id)arg1;
- (id)messageIdForMediaId:(id)arg1;
- (void)logTimestamp:(id)arg1 forMediaId:(id)arg2;
- (void)_logSendMessageStoryPostWithSendMessageAttemptId:(id)arg1 clientId:(id)arg2;
- (void)logTimestamp:(id)arg1 forMessageId:(id)arg2;
- (void)addMediaMetadata:(id)arg1 forMessageId:(id)arg2;
- (void)addStoryPostWithAsyncFailForClientId:(id)arg1;
- (void)setStoryPostContext:(long long)arg1 forClientId:(id)arg2;
- (void)setStoryTypeToCount:(id)arg1 forClientId:(id)arg2;
- (void)setRecipientTypeToCount:(id)arg1 forMessageId:(id)arg2;
- (void)setMetadata:(id)arg1 forMessageId:(id)arg2;
- (id)initWithMetricsEmitter:(id)arg1 autoShakeToReporter:(id)arg2;

@end


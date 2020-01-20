//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCSendFlowLogging.h"

@class NSString, SCSendFlowLogAggregator;

@interface SCSendFlowLogger : NSObject <SCSendFlowLogging>
{
    id <SCPerforming> _performer;
    SCSendFlowLogAggregator *_aggregator;
}

- (void).cxx_destruct;
- (void)_logStepWithMessageId:(id)arg1 mediaId:(id)arg2 stepType:(long long)arg3 timestamp:(double)arg4 timestampType:(long long)arg5 result:(unsigned long long)arg6;
- (void)_logStepWithMediaId:(id)arg1 stepType:(long long)arg2 timestamp:(double)arg3 timestampType:(long long)arg4 result:(unsigned long long)arg5;
- (void)_logStepWithMessageId:(id)arg1 stepType:(long long)arg2 timestamp:(double)arg3 timestampType:(long long)arg4 result:(unsigned long long)arg5;
- (void)clearTemporaryMediaIds:(id)arg1;
- (void)logStepEndWithMediaId:(id)arg1 stepType:(long long)arg2 timestamp:(double)arg3 result:(unsigned long long)arg4;
- (void)logStepStartWithMediaId:(id)arg1 stepType:(long long)arg2 timestamp:(double)arg3;
- (void)logDiscreteStepWithMessageId:(id)arg1 stepType:(long long)arg2 timestamp:(double)arg3;
- (void)logStepEndWithMessageId:(id)arg1 stepType:(long long)arg2 timestamp:(double)arg3 result:(unsigned long long)arg4;
- (void)logStepStartWithMessageId:(id)arg1 stepType:(long long)arg2 timestamp:(double)arg3;
- (void)_aggregateStoryPostWithAsyncFailForClientId:(id)arg1;
- (void)addStoryPostWithAsyncFailForClientId:(id)arg1;
- (void)_aggregateStoryTypeToCount:(id)arg1 forClientId:(id)arg2;
- (void)updateStoryMetadataWithClientId:(id)arg1 storyTypeToCountDict:(id)arg2;
- (void)_aggregateStoryPostContext:(long long)arg1 forClientId:(id)arg2;
- (void)updateStoryMetadataWithClientId:(id)arg1 storyPostContext:(long long)arg2;
- (void)updateMetadataWithMessageId:(id)arg1 sendToFriendCount:(long long)arg2 sendToGroupCount:(long long)arg3 sendToStoryCount:(long long)arg4;
- (void)setMediaType:(long long)arg1 forMediaId:(id)arg2 messageId:(id)arg3;
- (void)updateMetadataWithMessageId:(id)arg1 captureId:(id)arg2 messageBodyType:(long long)arg3 mediaType:(long long)arg4;
- (id)initWithMetricsEmitter:(id)arg1 performer:(id)arg2 autoShakeToReporter:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


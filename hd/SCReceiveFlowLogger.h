//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCReceiveFlowLogging.h"

@class NSString, SCReceiveFlowLogAggregator;

@interface SCReceiveFlowLogger : NSObject <SCReceiveFlowLogging>
{
    id <SCPerforming> _performer;
    SCReceiveFlowLogAggregator *_aggregator;
    id <SCTimeProviding> _timeProvider;
}

- (void).cxx_destruct;
- (void)_logStepWithConversationId:(id)arg1 receiveStep:(long long)arg2 timestampType:(long long)arg3 result:(long long)arg4 timestampInSeconds:(double)arg5;
- (void)logDeltaFetchEndForConversationIds:(id)arg1;
- (void)logDeltaFetchStartForConversationIds:(id)arg1;
- (void)flushTimelinesForConversationIds:(id)arg1;
- (void)_processTimestamp:(id)arg1 forMessageId:(id)arg2;
- (void)processBridgedTimestamps:(id)arg1 forMessageId:(id)arg2;
- (void)setReceiptTypeForMessageId:(id)arg1 conversationId:(id)arg2 receiptType:(long long)arg3;
- (void)addMetadataForMessageId:(id)arg1 conversationId:(id)arg2 isGroupConversation:(_Bool)arg3 messageBodyType:(id)arg4 mediaType:(long long)arg5;
- (void)_logStepStartWithConversationId:(id)arg1 receiveStep:(long long)arg2 timestampInSeconds:(double)arg3;
- (void)logStepStartWithConversationId:(id)arg1 receiveStep:(long long)arg2;
- (void)_logStepEndWithConversationId:(id)arg1 receiveStep:(long long)arg2 result:(long long)arg3 timestampInSeconds:(double)arg4;
- (void)logStepEndWithConversationId:(id)arg1 receiveStep:(long long)arg2 result:(long long)arg3;
- (void)_logDiscreteStepWithConversationId:(id)arg1 receiveStep:(long long)arg2 timestampInSeconds:(double)arg3;
- (void)logDiscreteStepWithConversationId:(id)arg1 receiveStep:(long long)arg2;
- (id)initWithMetricsEmitter:(id)arg1 performer:(id)arg2 timeProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


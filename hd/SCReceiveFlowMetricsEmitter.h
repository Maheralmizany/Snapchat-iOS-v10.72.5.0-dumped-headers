//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCReceiveFlowMetricsEmitting.h"

@class NSString;

@interface SCReceiveFlowMetricsEmitter : NSObject <SCReceiveFlowMetricsEmitting>
{
    id <SCUserTrackedLogger> _logger;
    id <SCGraphene> _graphene;
}

- (void).cxx_destruct;
- (void)_logLoadMessageStepLatencyWithMediaType:(id)arg1 messageType:(id)arg2 stepToLatencyString:(id)arg3;
- (void)_logLoadMessagePerceivedLatencyWithMediaType:(id)arg1 messageType:(id)arg2 triggerType:(id)arg3 loadMessageStatus:(id)arg4 latencyInMillis:(double)arg5;
- (void)_logLoadMessageFatalWithMediaType:(id)arg1 messageType:(id)arg2 isGroupConversation:(_Bool)arg3 loadMessageStatus:(id)arg4 failedStep:(id)arg5;
- (void)_logLoadMessageConnectivityWithMediaType:(id)arg1 messageType:(id)arg2 isGroupConversation:(_Bool)arg3 loadMessageStatus:(id)arg4 failedStep:(id)arg5;
- (void)_logLoadMessageFailureWithMediaType:(id)arg1 messageType:(id)arg2 isGroupConversation:(_Bool)arg3 loadMessageStatus:(id)arg4 failedStep:(id)arg5;
- (void)_logLoadMessageResultWithMediaType:(id)arg1 messageType:(id)arg2 isGroupConversation:(_Bool)arg3 mediaSizeBytes:(unsigned long long)arg4 loadMessageStatus:(id)arg5;
- (void)_logReceiveMessageStepLatencyWithReceiptType:(id)arg1 messageType:(id)arg2 stepToLatencyString:(id)arg3;
- (void)_logReceiveMessageLatencyWithReceiptType:(id)arg1 messageType:(id)arg2 receiveMessageStatus:(id)arg3 receiveMessageStartTimestamp:(long long)arg4 receiveMessageEndTimestamp:(long long)arg5;
- (void)_logReceiveMessageConnectivityWithReceiptType:(id)arg1 messageType:(id)arg2 receiveMessageStatus:(id)arg3 failedStep:(id)arg4;
- (void)_logReceiveMessageFailureWithReceiptType:(id)arg1 messageType:(id)arg2 receiveMessageStatus:(id)arg3 failedStep:(id)arg4;
- (void)_logReceiveMessageResultWithReceiptType:(id)arg1 messageType:(id)arg2 receiveMessageStatus:(id)arg3;
- (void)logLoadMessage:(id)arg1;
- (void)logReceiveMessage:(id)arg1;
- (id)initWithLogger:(id)arg1 graphene:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

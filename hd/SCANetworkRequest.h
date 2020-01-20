//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCANetworkEventBase.h"

@interface SCANetworkRequest : SCANetworkEventBase
{
}

- (void)setUserContext:(id)arg1;
- (void)setUserBlockingQueuingLatency:(long long)arg1;
- (void)setUserBlockingNetworkLatency:(long long)arg1;
- (void)setUploadBandwidthRangeClassStart:(id)arg1;
- (void)setUploadBandwidthEstimationStart:(long long)arg1;
- (void)setTtlb:(long long)arg1;
- (void)setTtfb:(long long)arg1;
- (void)setTrigger:(long long)arg1;
- (void)setTrackingId:(id)arg1;
- (void)setTimeSinceAppStart:(long long)arg1;
- (void)setTaskContext:(id)arg1;
- (void)setSuccess:(_Bool)arg1;
- (void)setStatusCode:(long long)arg1;
- (void)setServerTime:(long long)arg1;
- (void)setServerReqId:(id)arg1;
- (void)setServerIp:(id)arg1;
- (void)setSecureConnectionTime:(long long)arg1;
- (void)setRttEstimationStart:(long long)arg1;
- (void)setRttEstimationAverage:(long long)arg1;
- (void)setResumeByteOffset:(long long)arg1;
- (void)setRespWireSize:(long long)arg1;
- (void)setRespSize:(long long)arg1;
- (void)setRespContentType:(id)arg1;
- (void)setRespContentLength:(long long)arg1;
- (void)setRequestId:(id)arg1;
- (void)setReqWireSize:(long long)arg1;
- (void)setReqTimestamp:(id)arg1;
- (void)setReqTime:(long long)arg1;
- (void)setReqStartToEnd:(long long)arg1;
- (void)setReqSize:(long long)arg1;
- (void)setReqContentType:(id)arg1;
- (void)setRedirectLatency:(long long)arg1;
- (void)setReachabilityStart:(long long)arg1;
- (void)setReachabilityChanges:(id)arg1;
- (void)setQueueingLatency:(long long)arg1;
- (void)setQueryParameters:(id)arg1;
- (void)setProtocol:(id)arg1;
- (void)setPopEdgeInfo:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setNetworkTtlb:(long long)arg1;
- (void)setNetworkTtfb:(long long)arg1;
- (void)setNetworkLatency:(long long)arg1;
- (void)setNetworkInterface:(long long)arg1;
- (void)setMaskedRemoteIp:(id)arg1;
- (void)setIsResumed:(_Bool)arg1;
- (void)setIsResumable:(_Bool)arg1;
- (void)setIsRedirected:(_Bool)arg1;
- (void)setIsPaused:(_Bool)arg1;
- (void)setHttpMethod:(id)arg1;
- (void)setHost:(id)arg1;
- (void)setFsToDnsLookupStart:(long long)arg1;
- (void)setFkSendMessageAttemptId:(id)arg1;
- (void)setFkMediaOrchestrationAttemptId:(id)arg1;
- (void)setFinalRespondingHost:(id)arg1;
- (void)setErrorCode:(long long)arg1;
- (void)setErrorCategory:(long long)arg1;
- (void)setDnsLookupTime:(long long)arg1;
- (void)setContentResolveTime:(long long)arg1;
- (void)setContentResolveId:(id)arg1;
- (void)setConnectionType:(id)arg1;
- (void)setConnectionTime:(long long)arg1;
- (void)setConnectionReused:(_Bool)arg1;
- (void)setConcurrentUploadStreamNumAvg:(double)arg1;
- (void)setConcurrentStreamNumAvg:(double)arg1;
- (void)setConcurrentRequestIds:(id)arg1;
- (void)setCdnReqId:(id)arg1;
- (void)setCdnCacheHit:(_Bool)arg1;
- (void)setCarrierName:(id)arg1;
- (void)setCacheControl:(id)arg1;
- (void)setBandwidthRangeClassStart:(id)arg1;
- (void)setBandwidthEstimationStart:(long long)arg1;
- (void)setBandwidthEstimationAverage:(long long)arg1;
- (void)setBandwidthClassStart:(long long)arg1;
- (void)setBandwidthClassChanges:(id)arg1;
- (void)setAsn:(id)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

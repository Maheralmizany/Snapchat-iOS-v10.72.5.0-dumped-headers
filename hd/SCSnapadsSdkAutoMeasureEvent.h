//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCBaseAutoMeasureEvent.h"

@interface SCSnapadsSdkAutoMeasureEvent : SCBaseAutoMeasureEvent
{
}

+ (id)SCAutoEventSnapadsSdkTrackRequestDiskPersistenceRetrySuccess;
+ (id)SCAutoEventSnapadsSdkTrackRequestDiskPersistenceRetryMissedPercent;
+ (id)SCAutoEventSnapadsSdkTrackRequestDiskPersistenceRetryFailure;
+ (id)SCAutoEventSnapadsSdkTrackRequestDiskPersistenceRetry;
+ (id)SCAutoEventSnapadsSdkTrackRequestDiskPersistenceQueueSize;
+ (id)SCAutoEventSnapadsSdkTrackRequestDiskPersistencePersistFailure;
+ (id)SCAutoEventSnapadsSdkTrackRequestDiskPersistencePersist;
+ (id)SCAutoEventSnapadsSdkTrackRequestDiskPersistenceMaxRetryTimeReached;
+ (id)SCAutoEventSnapadsSdkTrackRequestDiskPersistenceDrop;
+ (id)SCAutoEventSnapadsSdkTrackRequest5XxLatency;
+ (id)SCAutoEventSnapadsSdkTrackRequest4XxLatency;
+ (id)SCAutoEventSnapadsSdkTrackRequest408Latency;
+ (id)SCAutoEventSnapadsSdkTrackRequest2XxLatency;
+ (id)SCAutoEventSnapadsSdkTrackImpressionDataValid;
+ (id)SCAutoEventSnapadsSdkTrackImpressionDataInvalidVideoNotPlay;
+ (id)SCAutoEventSnapadsSdkTrackImpressionDataInvalidNoInteraction;
+ (id)SCAutoEventSnapadsSdkTrackImpressionDataInvalidNegativeViewTime;
+ (id)SCAutoEventSnapadsSdkTrackAndGetRequestResponseSize;
+ (id)SCAutoEventSnapadsSdkTrackAndGetRequest5XxLatency;
+ (id)SCAutoEventSnapadsSdkTrackAndGetRequest4XxLatency;
+ (id)SCAutoEventSnapadsSdkTrackAndGetRequest408Latency;
+ (id)SCAutoEventSnapadsSdkTrackAndGetRequest2XxLatency;
+ (id)SCAutoEventSnapadsSdkTrackAndGetDeserializationLatency;
+ (id)SCAutoEventSnapadsSdkRetroTrackAndGetRequestConversionFailure;
+ (id)SCAutoEventSnapadsSdkRetroRetrySuccessFailure;
+ (id)SCAutoEventSnapadsSdkProtoAdRequestResponseSize;
+ (id)SCAutoEventSnapadsSdkProtoAdRequestResponseDeserializationLatency;
+ (id)SCAutoEventSnapadsSdkProtoAdRequest5XxLatency;
+ (id)SCAutoEventSnapadsSdkProtoAdRequest4XxLatency;
+ (id)SCAutoEventSnapadsSdkProtoAdRequest408Latency;
+ (id)SCAutoEventSnapadsSdkProtoAdRequest2XxLatency;
+ (id)SCAutoEventSnapadsSdkPromotedStoriesTrackRequest5XxLatency;
+ (id)SCAutoEventSnapadsSdkPromotedStoriesTrackRequest4XxLatency;
+ (id)SCAutoEventSnapadsSdkPromotedStoriesTrackRequest408Latency;
+ (id)SCAutoEventSnapadsSdkPromotedStoriesTrackRequest2XxLatency;
+ (id)SCAutoEventSnapadsSdkPromotedStoriesInvalidNoFillTrack;
+ (id)SCAutoEventSnapadsSdkPromotedStoriesDataSize;
+ (id)SCAutoEventSnapadsSdkPromotedStoriesDataDeserializationLatency;
+ (id)SCAutoEventSnapadsSdkLongformVideoTotalDurationMissingOnExit;
+ (id)SCAutoEventSnapadsSdkDiscoverAdViewCount;
+ (id)SCAutoEventSnapadsSdkDiscoverAdSkipCount;
+ (id)SCAutoEventSnapadsSdkCreativeDownloadLatency;
+ (id)SCAutoEventSnapadsSdkCreativeDownloadFailure;
+ (id)SCAutoEventSnapadsSdkCreativeDownload;
+ (id)SCAutoEventSnapadsSdkCachedAdValid;
+ (id)SCAutoEventSnapadsSdkCachedAdNotExist;
+ (id)SCAutoEventSnapadsSdkCachedAdExpired;
+ (id)SCAutoEventSnapadsSdkAdRequestResponseSize;
+ (id)SCAutoEventSnapadsSdkAdRequestResponseDeserializationLatency;
+ (id)SCAutoEventSnapadsSdkAdRequest5XxLatency;
+ (id)SCAutoEventSnapadsSdkAdRequest4XxLatency;
+ (id)SCAutoEventSnapadsSdkAdRequest408Latency;
+ (id)SCAutoEventSnapadsSdkAdRequest2XxLatency;
+ (id)SCAutoEventSnapadsSdkAdOpportunityNoFillNotBrandSafe;
+ (id)SCAutoEventSnapadsSdkAdOpportunityNoFillMediaLoadError;
+ (id)SCAutoEventSnapadsSdkAdOpportunityNoFillMediaLoading;
+ (id)SCAutoEventSnapadsSdkAdOpportunityNoFillAdResolving;
+ (id)SCAutoEventSnapadsSdkAdOpportunityNoFillAdResolvedError;
+ (id)SCAutoEventSnapadsSdkAdOpportunityNoFillAdPendingRequest;
+ (id)SCAutoEventSnapadsSdkAdOpportunityNoFillAd;
+ (id)SCAutoEventSnapadsSdkAdOpportunityFill;
- (id)initWithEventName:(id)arg1 sampleRate:(double)arg2 measureType:(long long)arg3 sliceNames:(id)arg4 loggingTypes:(id)arg5;

@end

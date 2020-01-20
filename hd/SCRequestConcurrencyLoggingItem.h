//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, NSString;

@interface SCRequestConcurrencyLoggingItem : NSObject
{
    double _startTimestamp;
    double _finishTimestamp;
    long long _requestType;
    NSString *_requestId;
    double _accumulatedOverlappedDownloadDurationOfOtherRequests;
    double _accumulatedOverlappedDownloadDurationOfOtherDownloadRequests;
    double _accumulatedOverlappedDownloadDurationOfOtherMetadataRequests;
    double _accumulatedOverlappedUploadDurationOfOtherRequests;
    double _accumulatedOverlappedUploadDurationOfOtherUploadRequests;
    double _accumulatedOverlappedUploadDurationOfOtherAnalyticsRequests;
    double _accumulatedOverlappedUploadDurationOfOtherAnalyticsV2Requests;
    NSMutableSet *_overlappedRequests;
}

@property(retain, nonatomic) NSMutableSet *overlappedRequests; // @synthesize overlappedRequests=_overlappedRequests;
@property(nonatomic) double accumulatedOverlappedUploadDurationOfOtherAnalyticsV2Requests; // @synthesize accumulatedOverlappedUploadDurationOfOtherAnalyticsV2Requests=_accumulatedOverlappedUploadDurationOfOtherAnalyticsV2Requests;
@property(nonatomic) double accumulatedOverlappedUploadDurationOfOtherAnalyticsRequests; // @synthesize accumulatedOverlappedUploadDurationOfOtherAnalyticsRequests=_accumulatedOverlappedUploadDurationOfOtherAnalyticsRequests;
@property(nonatomic) double accumulatedOverlappedUploadDurationOfOtherUploadRequests; // @synthesize accumulatedOverlappedUploadDurationOfOtherUploadRequests=_accumulatedOverlappedUploadDurationOfOtherUploadRequests;
@property(nonatomic) double accumulatedOverlappedUploadDurationOfOtherRequests; // @synthesize accumulatedOverlappedUploadDurationOfOtherRequests=_accumulatedOverlappedUploadDurationOfOtherRequests;
@property(nonatomic) double accumulatedOverlappedDownloadDurationOfOtherMetadataRequests; // @synthesize accumulatedOverlappedDownloadDurationOfOtherMetadataRequests=_accumulatedOverlappedDownloadDurationOfOtherMetadataRequests;
@property(nonatomic) double accumulatedOverlappedDownloadDurationOfOtherDownloadRequests; // @synthesize accumulatedOverlappedDownloadDurationOfOtherDownloadRequests=_accumulatedOverlappedDownloadDurationOfOtherDownloadRequests;
@property(nonatomic) double accumulatedOverlappedDownloadDurationOfOtherRequests; // @synthesize accumulatedOverlappedDownloadDurationOfOtherRequests=_accumulatedOverlappedDownloadDurationOfOtherRequests;
@property(copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(nonatomic) long long requestType; // @synthesize requestType=_requestType;
@property(nonatomic) double finishTimestamp; // @synthesize finishTimestamp=_finishTimestamp;
@property(nonatomic) double startTimestamp; // @synthesize startTimestamp=_startTimestamp;
- (void).cxx_destruct;
- (_Bool)isAnalyticsV2RequestItem;
- (_Bool)isAnalyticsRequestItem;
- (_Bool)isUploadRequestItem;
- (_Bool)isMetadataRequestItem;
- (_Bool)isDownloadRequestItem;
- (_Bool)isSendDataRequestItem;
- (_Bool)isReceiveDataRequestItem;
- (void)updateOverlappedRequestsListWithOverlappedRequest:(id)arg1;
- (void)updateAccumulatedOverlappedDurationOfOtherRequestsWithDuration:(double)arg1 overlappedRequest:(id)arg2;
- (void)updateRequestConcurrencyLoggingItemWithFinishTimestamp:(double)arg1;
- (id)initRequestConcurrencyLoggingItemWithStartTimestamp:(double)arg1 requestType:(long long)arg2 requestId:(id)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, SCLogger, SCPreferences, SCQueuePerformer;

@interface SCSnapAdsAdLifecycleWatermarkEventsTracker : NSObject
{
    SCLogger *_logger;
    SCPreferences *_preferences;
    SCQueuePerformer *_performer;
    NSMutableDictionary *_adLifecycleInfoMap;
}

+ (_Bool)_isValidAdLifecycleAdRequest:(unsigned long long)arg1;
@property(retain, nonatomic) NSMutableDictionary *adLifecycleInfoMap; // @synthesize adLifecycleInfoMap=_adLifecycleInfoMap;
- (void).cxx_destruct;
- (void)reportAdMediaDownloadMetrics:(id)arg1 mediaURL:(id)arg2;
- (void)reportAdLifecycleMetrics:(id)arg1;
- (void)reportNoFillNoAdRequestMade;
- (void)updateAdOpportunityInfo:(unsigned long long)arg1 adOpportunityTimestamp:(long long)arg2 adLifecycleInfo:(id)arg3;
- (void)updateAdInsertionTimestamp:(id)arg1;
- (void)adExpired:(id)arg1;
- (void)onUpdateVideoLoadingStatus:(id)arg1;
- (void)_onAdHidden:(id)arg1 adHiddenTimestamp:(double)arg2;
- (void)onAdHidden:(id)arg1 adHiddenTimestamp:(double)arg2;
- (void)_onAdShown:(id)arg1 adShowTimestamp:(double)arg2;
- (void)onAdShown:(id)arg1 adShowTimestamp:(double)arg2;
- (void)_onAdOpportunity:(id)arg1 adOpportunityType:(unsigned long long)arg2 adOpportunityTimestamp:(double)arg3;
- (void)onAdOpportunity:(id)arg1 adOpportunityType:(unsigned long long)arg2 adOpportunityTimestamp:(double)arg3;
- (void)onStreamingMetricsReportEvent:(id)arg1;
- (void)_onAdMediaFinishDownload:(id)arg1 mediaFinishDownloadTimestamp:(double)arg2 topSnapMediaType:(long long)arg3 mediaCacheHit:(_Bool)arg4 mediaURL:(id)arg5;
- (void)onAdMediaFinishDownload:(id)arg1 mediaFinishDownloadTimestamp:(double)arg2 topSnapMediaType:(long long)arg3 mediaCacheHit:(_Bool)arg4 mediaURL:(id)arg5;
- (void)_onAdMediaStartDownload:(id)arg1 mediaStartDownloadTimestamp:(double)arg2;
- (void)onAdMediaStartDownload:(id)arg1 mediaStartDownloadTimestamp:(double)arg2;
- (void)_onAdResponseResolved:(id)arg1;
- (void)onAdResponseResolved:(id)arg1;
- (void)onAdResponseStartDeserialize:(id)arg1;
- (void)onAdServerRequestResolved:(id)arg1;
- (void)onAdServerRequestSubmitted:(id)arg1;
- (void)_didEnterBackground;
- (void)_didEnterForeground;
- (void)onAdOperationEvent:(id)arg1;
- (id)init;

@end

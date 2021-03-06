//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLLocation, NSDate, NSObject<OS_dispatch_queue>, NSString, NSUUID, SCSessionRequestManager;

@interface SCLocationDataFetcher : NSObject
{
    SCSessionRequestManager *_requestManager;
    NSDate *_retryTimestamp;
    NSString *_lastRequestUUID;
    CLLocation *_lastRequestLocation;
    _Bool _limitAdTracking;
    NSUUID *_deviceId;
    NSString *_deviceModel;
    double _lastRetryId;
    NSObject<OS_dispatch_queue> *_locationDataFetcherQueue;
    id <SCLocationDataFetcherDelegate> _delegate;
}

+ (id)_stringForTrigger:(long long)arg1;
+ (id)_stringForContext:(long long)arg1;
@property(nonatomic) __weak id <SCLocationDataFetcherDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_retryFetchDataForLocation:(id)arg1 delay:(double)arg2 sensitivity:(id)arg3 context:(long long)arg4 trigger:(long long)arg5 referenceId:(id)arg6 retryId:(double)arg7;
- (void)_logFetchDataFailure:(id)arg1;
- (void)_fetchDataForLocationWithParameters:(id)arg1 callbackQueue:(id)arg2 referenceId:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)fetchDataForLocation:(id)arg1 sensitivity:(id)arg2 context:(long long)arg3 trigger:(long long)arg4 referenceId:(id)arg5 retryId:(double)arg6;
- (void)fetchDataForLocation:(id)arg1 sensitivity:(id)arg2 context:(long long)arg3 trigger:(long long)arg4 referenceId:(id)arg5;
- (id)initWithRequestManager:(id)arg1;

@end


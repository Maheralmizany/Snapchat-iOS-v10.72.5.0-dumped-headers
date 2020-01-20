//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCNetworkConnectivityListenerAnnouncer, SCQueuePerformer;

@interface SCNetworkConnectivityAnnouncer : NSObject
{
    SCNetworkConnectivityListenerAnnouncer *_announcer;
    long long _connectivityStatusMainThread;
    long long _connectivityStatus;
    NSString *_hostName;
    SCQueuePerformer *_performer;
    SCQueuePerformer *_notificationPerformer;
    struct __SCNetworkReachability *_networkReachability;
    _Bool _isMonitoring;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_setConnectivityStatus:(long long)arg1;
- (void)_startMonitoringNetworkReachability;
- (long long)currentNetworkReachabilityStatusRealTime;
- (long long)getCurrentNetworkReachabilityStatus;
- (long long)connectivityStatus;
- (void)setHostNameAsynchronously:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)initWithDefaultHostName:(id)arg1;
- (id)initWithDefaultURL:(id)arg1;

@end

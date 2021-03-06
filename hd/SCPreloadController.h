//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCNetworkConnectivityListener.h"
#import "SCPreloadControllerProtocol.h"
#import "SCPreloadInfoProvider.h"

@class NSString, SCPreloadListenerAnnouncer;

@interface SCPreloadController : NSObject <SCNetworkConnectivityListener, SCPreloadControllerProtocol, SCPreloadInfoProvider>
{
    SCPreloadListenerAnnouncer *_announcer;
    long long _connectivity;
    double _preloadModeCachedTime;
    CDUnknownBlockType _connectivityProvider;
    id <SCObserving> _travelModeObserveContext;
    _Bool _isUserSessionConfigured;
    _Bool _travelModeUserEnabled;
    long long _preloadMode;
    long long _bandwidthClass;
    double _dataSaverExpirationMillis;
    id <SCPerforming> _queuePerformer;
}

+ (id)sharedInstance;
@property(retain, nonatomic) id <SCPerforming> queuePerformer; // @synthesize queuePerformer=_queuePerformer;
@property double dataSaverExpirationMillis; // @synthesize dataSaverExpirationMillis=_dataSaverExpirationMillis;
@property _Bool travelModeUserEnabled; // @synthesize travelModeUserEnabled=_travelModeUserEnabled;
@property long long bandwidthClass; // @synthesize bandwidthClass=_bandwidthClass;
@property(readonly, nonatomic) _Bool isUserSessionConfigured; // @synthesize isUserSessionConfigured=_isUserSessionConfigured;
- (void).cxx_destruct;
- (void)configureWithUserSession:(id)arg1;
@property long long preloadMode; // @synthesize preloadMode=_preloadMode;
- (_Bool)travelModeEnabled;
- (void)logPreloadMode;
- (_Bool)isUnderPoorBandwidth;
- (_Bool)shouldPrefetchExpensiveContent;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (_Bool)isUnderWifi;
- (void)_updatePreloadMode;
- (void)_didLogout;
- (void)updatePreloadMode;
- (void)_bandwidthClassChanged:(id)arg1;
- (void)_appWillEnterForeground;
- (void)networkConnectivityStatusDidChange:(long long)arg1;
- (id)initWithQueuePerformer:(id)arg1 networkConnectivityProvider:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


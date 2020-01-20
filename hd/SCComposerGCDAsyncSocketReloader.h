//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GCDAsyncUdpSocketDelegate.h"
#import "SCComposerReloader.h"
#import "SCComposerReloaderConnectionDelegate.h"
#import "SCComposerReloaderServiceDiscoveryDelegate.h"

@class NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString, SCComposerReloaderRegistryDiscovery, SCComposerReloaderServiceUDPDiscovery;

@interface SCComposerGCDAsyncSocketReloader : NSObject <GCDAsyncUdpSocketDelegate, SCComposerReloaderConnectionDelegate, SCComposerReloaderServiceDiscoveryDelegate, SCComposerReloader>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_deviceUUID;
    CDUnknownBlockType _startListeningBlock;
    double _reloaderStartDelay;
    _Bool _running;
    _Bool _debug;
    id <SCComposerReloaderDelegate> _delegate;
    NSString *_currentUsername;
    SCComposerReloaderServiceUDPDiscovery *_localNetworkServiceDiscovery;
    SCComposerReloaderRegistryDiscovery *_globalRegistryServiceDiscovery;
    NSMutableDictionary *_connections;
    NSMutableSet *_discoveredServices;
    NSMutableDictionary *_serviceDiscoveryDates;
    NSMutableDictionary *_serviceConnectionAttemptCounters;
}

@property(retain, nonatomic) NSMutableDictionary *serviceConnectionAttemptCounters; // @synthesize serviceConnectionAttemptCounters=_serviceConnectionAttemptCounters;
@property(retain, nonatomic) NSMutableDictionary *serviceDiscoveryDates; // @synthesize serviceDiscoveryDates=_serviceDiscoveryDates;
@property(retain, nonatomic) NSMutableSet *discoveredServices; // @synthesize discoveredServices=_discoveredServices;
@property(retain, nonatomic) NSMutableDictionary *connections; // @synthesize connections=_connections;
@property(retain, nonatomic) SCComposerReloaderRegistryDiscovery *globalRegistryServiceDiscovery; // @synthesize globalRegistryServiceDiscovery=_globalRegistryServiceDiscovery;
@property(retain, nonatomic) SCComposerReloaderServiceUDPDiscovery *localNetworkServiceDiscovery; // @synthesize localNetworkServiceDiscovery=_localNetworkServiceDiscovery;
@property(nonatomic) _Bool debug; // @synthesize debug=_debug;
@property(copy, nonatomic) NSString *currentUsername; // @synthesize currentUsername=_currentUsername;
@property(nonatomic) __weak id <SCComposerReloaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)serviceDiscovery:(id)arg1 discoveredServices:(id)arg2;
- (void)reloaderConnectionDidClose:(id)arg1 error:(id)arg2;
- (void)reloaderConnectionDidConnect:(id)arg1;
- (void)udpSocket:(id)arg1 didNotSendDataWithTag:(long long)arg2 dueToError:(id)arg3;
- (void)udpSocket:(id)arg1 didSendDataWithTag:(long long)arg2;
- (void)udpSocketDidClose:(id)arg1 withError:(id)arg2;
- (void)doNextConnectionAttempt;
- (void)scheduleNextConnectionAttempt;
- (void)removeAllDiscoveredServices;
- (void)handleDiscoveredServices:(id)arg1;
- (void)_connectToService:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)_doStopListening;
- (void)_doStartListening;
- (void)stopListening;
- (void)startListening;
- (void)_cancelListeningWithError:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

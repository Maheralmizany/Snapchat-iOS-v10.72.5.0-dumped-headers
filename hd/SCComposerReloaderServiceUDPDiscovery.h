//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GCDAsyncUdpSocketDelegate.h"
#import "SCComposerReloaderServiceDiscovery.h"

@class GCDAsyncUdpSocket, NSObject<OS_dispatch_queue>, NSString;

@interface SCComposerReloaderServiceUDPDiscovery : NSObject <GCDAsyncUdpSocketDelegate, SCComposerReloaderServiceDiscovery>
{
    GCDAsyncUdpSocket *_multicastSocket;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_deviceUUID;
    double _reloaderStartDelay;
    struct __SCNetworkReachability *_reachabilityRef;
    _Bool _reachableFromNetwork;
    _Bool _shouldStartListening;
    _Bool _debug;
    NSString *_currentUsername;
    id <SCComposerReloaderServiceDiscoveryDelegate> _delegate;
}

@property(nonatomic) _Bool debug; // @synthesize debug=_debug;
@property(nonatomic) __weak id <SCComposerReloaderServiceDiscoveryDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *currentUsername; // @synthesize currentUsername=_currentUsername;
- (void).cxx_destruct;
- (void)udpSocket:(id)arg1 didNotSendDataWithTag:(long long)arg2 dueToError:(id)arg3;
- (void)udpSocket:(id)arg1 didSendDataWithTag:(long long)arg2;
- (void)udpSocketDidClose:(id)arg1 withError:(id)arg2;
- (void)udpSocket:(id)arg1 didReceiveData:(id)arg2 fromAddress:(id)arg3 withFilterContext:(id)arg4;
- (id)serviceAddressesFromMessage:(const struct DaemonAwakeMessage *)arg1;
- (_Bool)_daemonAwakeMessageContainsDeviceIdOrCurrentUsername:(const struct DaemonAwakeMessage *)arg1;
- (void)sendClientAwakeMessage;
- (void)startListening;
- (void)stopListening;
- (void)setReachableFromNetwork:(_Bool)arg1;
- (void)_updateSocketIfNeeded;
- (void)_setupSocket;
- (void)_teardownSocket;
- (void)_cancelListeningWithError:(id)arg1;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 deviceUUID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


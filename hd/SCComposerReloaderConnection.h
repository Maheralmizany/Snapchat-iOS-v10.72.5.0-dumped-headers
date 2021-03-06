//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GCDAsyncSocketDelegate.h"
#import "SCNComposerDaemonClientDataSender.h"

@class GCDAsyncSocket, NSObject<OS_dispatch_queue>, NSString, SCComposerReloaderDiscoveredService, SCNComposerDaemonClient;

@interface SCComposerReloaderConnection : NSObject <GCDAsyncSocketDelegate, SCNComposerDaemonClientDataSender>
{
    GCDAsyncSocket *_socket;
    id <SCComposerReloaderConnectionDelegate> _delegate;
    SCComposerReloaderDiscoveredService *_service;
    NSObject<OS_dispatch_queue> *_queue;
    SCNComposerDaemonClient *_deamonClient;
    _Bool _debug;
    _Bool _connecting;
}

- (void).cxx_destruct;
- (void)socket:(id)arg1 didWriteDataWithTag:(long long)arg2;
- (void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3;
- (void)socketDidDisconnect:(id)arg1 withError:(id)arg2;
- (void)socket:(id)arg1 didConnectToHost:(id)arg2 port:(unsigned short)arg3;
- (void)submitData:(id)arg1;
@property(retain, nonatomic) SCNComposerDaemonClient *daemonClient;
- (void)readNext;
- (void)stop;
- (_Bool)startWithError:(id *)arg1;
@property(readonly, nonatomic) SCComposerReloaderDiscoveredService *discoveredService;
@property(readonly, nonatomic) NSString *key;
- (id)initWithDiscoveredService:(id)arg1 delegateQueue:(id)arg2 delegate:(id)arg3 debug:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GCDAsyncUdpSocketDelegate.h"
#import "SCStartupReporter.h"

@class GCDAsyncUdpSocket, NSObject<OS_dispatch_queue>, NSString;

@interface SCUDPStartupReporter : NSObject <GCDAsyncUdpSocketDelegate, SCStartupReporter>
{
    NSString *_host;
    unsigned long long _port;
    NSObject<OS_dispatch_queue> *_queue;
    GCDAsyncUdpSocket *_udp;
}

- (void).cxx_destruct;
- (void)reportLaunchToCreationOffsetMilliseconds:(double)arg1 launchToFirstPreviewFrameReceivedMilliseconds:(double)arg2 launchToUIRenderedMilliseconds:(double)arg3 appStartupTimeMilliseconds:(double)arg4;
- (id)initWithHost:(id)arg1 port:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


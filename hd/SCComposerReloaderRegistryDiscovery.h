//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCComposerReloaderServiceDiscovery.h"

@class NSObject<OS_dispatch_queue>, NSString, NSTimer, NSURLSessionDataTask;

@interface SCComposerReloaderRegistryDiscovery : NSObject <SCComposerReloaderServiceDiscovery>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_deviceUUID;
    double _reloaderStartDelay;
    NSTimer *_timer;
    NSURLSessionDataTask *_currentTask;
    long long _failedRequestCount;
    _Bool _debug;
    NSString *_currentUsername;
    id <SCComposerReloaderServiceDiscoveryDelegate> _delegate;
}

@property(nonatomic) _Bool debug; // @synthesize debug=_debug;
@property(nonatomic) __weak id <SCComposerReloaderServiceDiscoveryDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *currentUsername; // @synthesize currentUsername=_currentUsername;
- (void).cxx_destruct;
- (id)discoveredServicesFromWire:(struct ReloaderService)arg1;
- (void)handleResponse:(struct ListServicesResponse)arg1;
- (void)sendRequest;
- (void)scheduleSendRequest;
- (id)urlWithPath:(id)arg1;
- (id)baseURL;
- (void)stopListening;
- (void)startListening;
- (id)initWithQueue:(id)arg1 deviceUUID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


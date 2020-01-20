//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GRPCProtoResponseHandler.h"
#import "SCLocationListener.h"
#import "SCStreamingLocationsProviding.h"

@class GRPCStreamingProtoCall, NSDate, NSObject<OS_dispatch_queue>, NSString, SCLazy, SCQueuePerformer, SCVSValis;

@interface SCStreamingLocationsProvider : NSObject <GRPCProtoResponseHandler, SCLocationListener, SCStreamingLocationsProviding>
{
    SCLazy *_snapTokenProvider;
    SCVSValis *_valisService;
    GRPCStreamingProtoCall *_communicationSession;
    SCQueuePerformer *_queuePerformer;
    NSDate *_lastDeviceReport;
    id <SCLocationProvider> _locationProvider;
    id <SCObserving> _locationObservationToken;
    id <SCStreamingFriendClustersProviding> _friendClustersProvider;
}

@property(readonly, nonatomic) id <SCStreamingFriendClustersProviding> friendClustersProvider; // @synthesize friendClustersProvider=_friendClustersProvider;
- (void).cxx_destruct;
- (void)locationProvider:(id)arg1 didUpdateAuthorization:(int)arg2;
- (void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2;
- (void)didCloseWithTrailingMetadata:(id)arg1 error:(id)arg2;
- (void)didReceiveProtoMessage:(id)arg1;
- (void)didReceiveInitialMetadata:(id)arg1;
@property(readonly) NSObject<OS_dispatch_queue> *dispatchQueue;
- (void)_setupLocationListeners;
- (void)_setupCommunicationSessionWithToken:(id)arg1;
- (void)_teardown;
- (void)_setup;
- (void)_maybeReportDeviceData;
- (void)_reportLocationUpdate:(id)arg1;
@property(nonatomic, getter=isActive) _Bool active;
- (id)initWithSnapTokenProvider:(id)arg1 initWithFriendClustersProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


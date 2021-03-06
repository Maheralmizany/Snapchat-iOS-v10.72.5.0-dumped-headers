//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCCoreMessagingServices, SCMediaOrchestrationServices, SCServicesExposer;

@interface SCDrawerMediaSendingServicesEntryPoint : SCEntryPoint
{
    SCCoreMessagingServices *_coreMessagingServices;
    SCMediaOrchestrationServices *_mediaOrchestrationServices;
    SCServicesExposer *_drawerMediaSendingServicesExposer;
}

@property(retain, nonatomic) SCServicesExposer *drawerMediaSendingServicesExposer; // @synthesize drawerMediaSendingServicesExposer=_drawerMediaSendingServicesExposer;
@property(nonatomic) __weak SCMediaOrchestrationServices *mediaOrchestrationServices; // @synthesize mediaOrchestrationServices=_mediaOrchestrationServices;
@property(nonatomic) __weak SCCoreMessagingServices *coreMessagingServices; // @synthesize coreMessagingServices=_coreMessagingServices;
- (void).cxx_destruct;
- (void)begin;
- (id)_initializeDrawerMediaSenderWithMediaPreparer:(id)arg1;
- (id)_initializeExternalMediaPreparer;

@end


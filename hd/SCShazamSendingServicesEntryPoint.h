//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCCoreMessagingServices, SCMediaOrchestrationServices, SCServicesExposer, SCTextSendingServices;

@interface SCShazamSendingServicesEntryPoint : SCEntryPoint
{
    SCCoreMessagingServices *_coreMessagingServices;
    SCTextSendingServices *_textSendingServices;
    SCMediaOrchestrationServices *_mediaOrchestrationServices;
    SCServicesExposer *_shazamSendingServicesExposer;
}

@property(retain, nonatomic) SCServicesExposer *shazamSendingServicesExposer; // @synthesize shazamSendingServicesExposer=_shazamSendingServicesExposer;
@property(nonatomic) __weak SCMediaOrchestrationServices *mediaOrchestrationServices; // @synthesize mediaOrchestrationServices=_mediaOrchestrationServices;
@property(nonatomic) __weak SCTextSendingServices *textSendingServices; // @synthesize textSendingServices=_textSendingServices;
@property(nonatomic) __weak SCCoreMessagingServices *coreMessagingServices; // @synthesize coreMessagingServices=_coreMessagingServices;
- (void).cxx_destruct;
- (void)begin;
- (id)_initializeShazamShareSenderWithMediaPreparer:(id)arg1;
- (id)_initializeExternalMediaPreparer;

@end


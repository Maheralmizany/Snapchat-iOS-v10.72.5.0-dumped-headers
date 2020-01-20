//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCCoreMessagingServices, SCMediaOrchestrationServices, SCServicesExposer, SCStartupCompleteScope;

@interface SCAudioNoteSendingServicesEntryPoint : SCEntryPoint
{
    SCStartupCompleteScope *_startupCompleteScope;
    SCCoreMessagingServices *_coreMessagingServices;
    SCMediaOrchestrationServices *_mediaOrchestrationServices;
    SCServicesExposer *_audioNoteSendingServicesExposer;
}

@property(retain, nonatomic) SCServicesExposer *audioNoteSendingServicesExposer; // @synthesize audioNoteSendingServicesExposer=_audioNoteSendingServicesExposer;
@property(nonatomic) __weak SCMediaOrchestrationServices *mediaOrchestrationServices; // @synthesize mediaOrchestrationServices=_mediaOrchestrationServices;
@property(nonatomic) __weak SCCoreMessagingServices *coreMessagingServices; // @synthesize coreMessagingServices=_coreMessagingServices;
@property(nonatomic) __weak SCStartupCompleteScope *startupCompleteScope; // @synthesize startupCompleteScope=_startupCompleteScope;
- (void).cxx_destruct;
- (void)begin;
- (id)_initializeAudioNoteSenderWithMediaPreparer:(id)arg1;
- (id)_initializeExternalMediaPreparer;

@end


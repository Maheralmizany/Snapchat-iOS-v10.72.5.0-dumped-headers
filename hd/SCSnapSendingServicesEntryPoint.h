//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCCoreMessagingServices, SCServicesExposer, SCStartupCompleteScope;

@interface SCSnapSendingServicesEntryPoint : SCEntryPoint
{
    SCStartupCompleteScope *_startupCompleteScope;
    SCCoreMessagingServices *_coreMessagingServices;
    SCServicesExposer *_snapSendingServicesExposer;
}

@property(retain, nonatomic) SCServicesExposer *snapSendingServicesExposer; // @synthesize snapSendingServicesExposer=_snapSendingServicesExposer;
@property(nonatomic) __weak SCCoreMessagingServices *coreMessagingServices; // @synthesize coreMessagingServices=_coreMessagingServices;
@property(nonatomic) __weak SCStartupCompleteScope *startupCompleteScope; // @synthesize startupCompleteScope=_startupCompleteScope;
- (void).cxx_destruct;
- (void)begin;

@end


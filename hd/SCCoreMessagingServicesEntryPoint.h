//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCNativeMessagingServices, SCServicesExposer;

@interface SCCoreMessagingServicesEntryPoint : SCEntryPoint
{
    SCNativeMessagingServices *_nativeMessagingServices;
    SCServicesExposer *_coreMessagingServicesExposer;
}

@property(retain, nonatomic) SCServicesExposer *coreMessagingServicesExposer; // @synthesize coreMessagingServicesExposer=_coreMessagingServicesExposer;
@property(nonatomic) __weak SCNativeMessagingServices *nativeMessagingServices; // @synthesize nativeMessagingServices=_nativeMessagingServices;
- (void).cxx_destruct;
- (void)begin;

@end


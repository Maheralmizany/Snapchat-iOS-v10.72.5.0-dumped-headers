//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCServicesExposer, SCUnauthenticatedScope, SCUnauthenticatedStorageServices;

@interface SCUnauthenticatedCrashDetectionServicesEntryPoint : SCEntryPoint
{
    SCUnauthenticatedScope *_unauthenticatedScope;
    SCUnauthenticatedStorageServices *_unauthenticatedStorageServices;
    SCServicesExposer *_unauthenticatedCrashDetectionServicesExposer;
}

@property(nonatomic) __weak SCServicesExposer *unauthenticatedCrashDetectionServicesExposer; // @synthesize unauthenticatedCrashDetectionServicesExposer=_unauthenticatedCrashDetectionServicesExposer;
@property(nonatomic) __weak SCUnauthenticatedStorageServices *unauthenticatedStorageServices; // @synthesize unauthenticatedStorageServices=_unauthenticatedStorageServices;
@property(nonatomic) __weak SCUnauthenticatedScope *unauthenticatedScope; // @synthesize unauthenticatedScope=_unauthenticatedScope;
- (void).cxx_destruct;
- (void)begin;

@end


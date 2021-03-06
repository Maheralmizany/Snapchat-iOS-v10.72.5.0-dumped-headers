//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCEntryPoint.h"

#import "SCTraceEnabled.h"

@class NSString, SCRegistrationDeviceInfoServices, SCServicesExposer, SCSystemScope;

@interface SCIdentityLoggerEntryPoint : SCEntryPoint <SCTraceEnabled>
{
    SCSystemScope *_systemScope;
    SCRegistrationDeviceInfoServices *_deviceInfoServices;
    SCServicesExposer *_serviceExposer;
}

@property(retain, nonatomic) SCServicesExposer *serviceExposer; // @synthesize serviceExposer=_serviceExposer;
@property(nonatomic) __weak SCRegistrationDeviceInfoServices *deviceInfoServices; // @synthesize deviceInfoServices=_deviceInfoServices;
@property(nonatomic) __weak SCSystemScope *systemScope; // @synthesize systemScope=_systemScope;
- (void).cxx_destruct;
- (id)end;
- (void)begin;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


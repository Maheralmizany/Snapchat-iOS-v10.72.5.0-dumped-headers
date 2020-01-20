//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCLoggerServices, SCServicesExposer, SCShakeToReportServices;

@interface SCSendMessageLoggerEntryPoint : SCEntryPoint
{
    SCLoggerServices *_loggerServices;
    SCShakeToReportServices *_shakeToReportServices;
    SCServicesExposer *_sendFlowLogger;
}

@property(retain, nonatomic) SCServicesExposer *sendFlowLogger; // @synthesize sendFlowLogger=_sendFlowLogger;
@property(nonatomic) __weak SCShakeToReportServices *shakeToReportServices; // @synthesize shakeToReportServices=_shakeToReportServices;
@property(nonatomic) __weak SCLoggerServices *loggerServices; // @synthesize loggerServices=_loggerServices;
- (void).cxx_destruct;
- (void)begin;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCApplicationStorageServices, SCServicesExposer;

@interface SCApplicationCircumstanceEngineServicesEntryPoint : SCEntryPoint
{
    SCApplicationStorageServices *_applicationStorageServices;
    SCServicesExposer *_applicationCircumstanceEngineServicesExposer;
}

@property(retain, nonatomic) SCServicesExposer *applicationCircumstanceEngineServicesExposer; // @synthesize applicationCircumstanceEngineServicesExposer=_applicationCircumstanceEngineServicesExposer;
@property(nonatomic) __weak SCApplicationStorageServices *applicationStorageServices; // @synthesize applicationStorageServices=_applicationStorageServices;
- (void).cxx_destruct;
- (void)begin;

@end


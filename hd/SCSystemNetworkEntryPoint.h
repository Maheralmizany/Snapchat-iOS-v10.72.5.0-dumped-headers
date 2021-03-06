//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCServicesExposer, SCSystemScope;

@interface SCSystemNetworkEntryPoint : SCEntryPoint
{
    SCSystemScope *_systemScope;
    SCServicesExposer *_systemNetworkServices;
}

@property(retain, nonatomic) SCServicesExposer *systemNetworkServices; // @synthesize systemNetworkServices=_systemNetworkServices;
@property(nonatomic) __weak SCSystemScope *systemScope; // @synthesize systemScope=_systemScope;
- (void).cxx_destruct;
- (id)_httpRequestModifier;
- (id)_httpMetadataService;
- (void)begin;

@end


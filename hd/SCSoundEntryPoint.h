//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCContentDeliveryServices, SCServicesExposer;

@interface SCSoundEntryPoint : SCEntryPoint
{
    SCContentDeliveryServices *_contentDeliveryServices;
    SCServicesExposer *_soundServicesExposer;
}

@property(retain, nonatomic) SCServicesExposer *soundServicesExposer; // @synthesize soundServicesExposer=_soundServicesExposer;
@property(nonatomic) __weak SCContentDeliveryServices *contentDeliveryServices; // @synthesize contentDeliveryServices=_contentDeliveryServices;
- (void).cxx_destruct;
- (void)begin;

@end

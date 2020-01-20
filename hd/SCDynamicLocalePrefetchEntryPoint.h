//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCApplicationCircumstanceEngineServices, SCDynamicLocaleProviderServices, SCServicesExposer, SCSystemContentDeliveryServices;

@interface SCDynamicLocalePrefetchEntryPoint : SCEntryPoint
{
    SCSystemContentDeliveryServices *_contentDeliveryServices;
    SCApplicationCircumstanceEngineServices *_circumstanceEngineServices;
    SCDynamicLocaleProviderServices *_dynamicLocaleProviderServices;
    SCServicesExposer *_dynamicLocalePrefetchServicesExposer;
}

@property(retain, nonatomic) SCServicesExposer *dynamicLocalePrefetchServicesExposer; // @synthesize dynamicLocalePrefetchServicesExposer=_dynamicLocalePrefetchServicesExposer;
@property(nonatomic) __weak SCDynamicLocaleProviderServices *dynamicLocaleProviderServices; // @synthesize dynamicLocaleProviderServices=_dynamicLocaleProviderServices;
@property(nonatomic) __weak SCApplicationCircumstanceEngineServices *circumstanceEngineServices; // @synthesize circumstanceEngineServices=_circumstanceEngineServices;
@property(nonatomic) __weak SCSystemContentDeliveryServices *contentDeliveryServices; // @synthesize contentDeliveryServices=_contentDeliveryServices;
- (void).cxx_destruct;
- (id)_createLocaleBackgroundPrefetcher:(id)arg1;
- (void)begin;

@end

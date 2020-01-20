//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCLensMetadataProviderSortStrategy.h"
#import "SCTraceEnabled.h"

@class NSString, SCExperimentManager;

@interface SCMainCameraLensDataProviderSortStrategy : NSObject <SCTraceEnabled, SCLensMetadataProviderSortStrategy>
{
    SCExperimentManager *_experimentManager;
    id <SCBundledLensProvider> _bundledLensProvider;
    id <SCMainSortStrategyFeatureStateProvider> _featureStateProvider;
}

- (void).cxx_destruct;
- (id)executeWithLenses:(id)arg1 cameraPosition:(unsigned long long)arg2 parameters:(id)arg3;
- (id)initWithExperimentManager:(id)arg1 bundledLensProvider:(id)arg2 featureStateProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

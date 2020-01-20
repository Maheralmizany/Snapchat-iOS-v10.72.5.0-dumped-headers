//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, SCBehaviorSubject, SCFeatureSet;

@interface SCFeatureProvider : NSObject
{
    SCFeatureSet *_featureSet;
    _Bool _hasFeatureProviderBeenInitialized;
    _Bool _hasFeatureProviderBeenSetup;
    SCBehaviorSubject *_mainCameraViewControllerLifecycleObservable;
    SCBehaviorSubject *_viewControllerLifecycleObservable;
}

- (void).cxx_destruct;
- (id)usageMetrics;
- (void)resetMetrics;
- (id)mainCameraViewControllerLifecycleObservable;
- (id)viewControllerLifecycleObservable;
- (void)resetInstances;
- (void)updateFeature:(id)arg1 forSelector:(SEL)arg2;
- (void)initializeFeaturesOnce:(id)arg1;
- (void)initializeFeatures:(id)arg1;
@property(readonly, nonatomic) NSArray *responderChain;
@property(readonly, nonatomic) NSArray *supportedFeatures;
- (id)setupProvider;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCFeatureSettingsManager, SCPreferences;

@interface SCResurrectionServices : NSObject
{
    SCPreferences *_preferences;
    SCFeatureSettingsManager *_featureSettingsManager;
    id <SCPerforming> _queuePerformer;
    id <SCObserving> _resDaysObserveContext;
}

- (void).cxx_destruct;
- (void)_updateResurrectionFieldIfNeeded:(long long)arg1;
- (void)_resDaysChangeHandler:(id)arg1;
- (void)_observeResDaysChange;
- (id)initWithPreferences:(id)arg1 featureSettingsManager:(id)arg2;

@end

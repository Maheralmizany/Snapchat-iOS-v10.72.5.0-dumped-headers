//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCLazy;

@interface SCFeatureSceneIntelligencePrivacyPrompter : NSObject
{
    SCLazy *_experimentManager;
    SCLazy *_featureSettingsManager;
}

- (void).cxx_destruct;
- (id)_promptBody;
- (void)_markShown;
- (void)showPrompt;
@property(readonly, nonatomic) _Bool needsPrompt;
- (id)initWithExperimentManager:(id)arg1 featureSettingsManager:(id)arg2;

@end

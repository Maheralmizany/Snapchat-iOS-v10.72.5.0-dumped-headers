//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCDiscoverFeedStoryPositionProviding.h"

@class NSString, SCDiscoverFeedDataStore, SCExperimentManager, SCFeatureSettingsManager;

@interface SCDiscoverFeedStoryPositionProvider : NSObject <SCDiscoverFeedStoryPositionProviding>
{
    SCDiscoverFeedDataStore *_dataStore;
    SCExperimentManager *_experimentManager;
    SCFeatureSettingsManager *_featureSettingsManager;
}

- (void).cxx_destruct;
- (unsigned long long)itemIndexForStory:(id)arg1 inFeedType:(unsigned long long)arg2;
- (unsigned long long)sectionIndexForSectionKey:(id)arg1;
- (id)initWithDataStore:(id)arg1 experimentManager:(id)arg2 featureSettingsManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


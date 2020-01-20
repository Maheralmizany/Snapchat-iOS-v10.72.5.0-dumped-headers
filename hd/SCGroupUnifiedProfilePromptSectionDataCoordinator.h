//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCUnifiedProfileSinglePromptSectionDataCoordinating.h"

@class NSString, SCFeatureSettingsManager, SCUpdateListenerAnnouncer;

@interface SCGroupUnifiedProfilePromptSectionDataCoordinator : NSObject <SCUnifiedProfileSinglePromptSectionDataCoordinating>
{
    SCFeatureSettingsManager *_featureSettingsManager;
    SCUpdateListenerAnnouncer *_updateAnnouncer;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (id)_viewModelsForPrivacyExplainer;
- (id)promptItemCellViewModel;
- (void)_announceUpdate;
- (void)setHasDismissedItemWithIdentifier:(id)arg1;
- (id)contentCellClassesByReuseIdentifier;
- (void)removeUpdateListener:(id)arg1;
- (void)addUpdateListener:(id)arg1;
- (id)initWithFeatureSettingsManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


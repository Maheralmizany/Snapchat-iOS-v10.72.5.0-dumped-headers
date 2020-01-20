//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCLensExplorerStudySettingsProviderProtocol.h"

@class NSString, SCLazy;

@interface SCLensExplorerStudySettingsProvider : NSObject <SCLensExplorerStudySettingsProviderProtocol>
{
    NSString *_eventPrefix;
    SCLazy *_experimentManager;
}

- (void).cxx_destruct;
- (id)_studiesWithPrefix:(id)arg1;
@property(readonly, nonatomic) _Bool lensExplorerBatchRequestSupportEnabled;
@property(readonly, nonatomic) long long lensExplorerSubscriptionCategoryPosition;
@property(readonly, nonatomic) long long lensExplorerWorldCategoryPosition;
@property(readonly, nonatomic) long long lensExplorerTrendingCategoryPosition;
@property(readonly, nonatomic) long long lensExplorerFaceCategoryPosition;
- (id)studyInfoDictionary;
- (id)studyInfoArray;
@property(readonly, nonatomic) _Bool includeABSessionId;
@property(readonly, nonatomic) _Bool lensExplorerCategoriesEnabled;
@property(readonly, nonatomic) _Bool lensExplorerPreviewAnimationEnabled;
@property(readonly, nonatomic) unsigned long long entryPointIconTreatment;
@property(readonly, nonatomic) unsigned long long creatorSnapProPageState;
- (id)initWithEventPrefix:(id)arg1 experimentManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

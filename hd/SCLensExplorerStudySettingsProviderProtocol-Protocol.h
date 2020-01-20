//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary;

@protocol SCLensExplorerStudySettingsProviderProtocol <NSObject>
@property(readonly, nonatomic) _Bool lensExplorerBatchRequestSupportEnabled;
@property(readonly, nonatomic) _Bool includeABSessionId;
@property(readonly, nonatomic) long long lensExplorerSubscriptionCategoryPosition;
@property(readonly, nonatomic) long long lensExplorerWorldCategoryPosition;
@property(readonly, nonatomic) long long lensExplorerTrendingCategoryPosition;
@property(readonly, nonatomic) long long lensExplorerFaceCategoryPosition;
@property(readonly, nonatomic) _Bool lensExplorerCategoriesEnabled;
@property(readonly, nonatomic) _Bool lensExplorerPreviewAnimationEnabled;
@property(readonly, nonatomic) unsigned long long entryPointIconTreatment;
@property(readonly, nonatomic) unsigned long long creatorSnapProPageState;
- (NSDictionary *)studyInfoDictionary;
- (NSArray *)studyInfoArray;
@end

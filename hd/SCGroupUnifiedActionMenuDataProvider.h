//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCUnifiedActionMenuDataProvider.h"

@class NSString, SCFeatureSettingsManager, SCGroupUnifiedProfileDataSource;

@interface SCGroupUnifiedActionMenuDataProvider : NSObject <SCUnifiedActionMenuDataProvider>
{
    NSString *_groupId;
    NSString *_groupNameToDisplay;
    NSString *_sourcePageType;
    _Bool _hideProfileOption;
    SCFeatureSettingsManager *_featureSettingsManager;
    SCGroupUnifiedProfileDataSource *_dataSource;
    _Bool _shouldDisplayBadgeInManageGroup;
    id <SCUnifiedActionMenuDataProviderDelegate> _delegate;
}

@property(nonatomic) __weak id <SCUnifiedActionMenuDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateViewModelWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithGroupManager:(id)arg1 groupId:(id)arg2 sourcePageType:(id)arg3 hideProfileOption:(_Bool)arg4 featureSettingsManager:(id)arg5 dataSource:(id)arg6 shouldDisplayBadgeInManageGroup:(_Bool)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


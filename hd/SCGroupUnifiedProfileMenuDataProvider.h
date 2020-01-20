//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCUnifiedActionMenuDataProvider.h"
#import "SCUpdateListener.h"

@class NSString, SCFeatureSettingsManager, SCGroupUnifiedProfileDataSource, SCUnifiedProfileMyStoriesDataSource;

@interface SCGroupUnifiedProfileMenuDataProvider : NSObject <SCUpdateListener, SCUnifiedActionMenuDataProvider>
{
    SCGroupUnifiedProfileDataSource *_dataSource;
    SCUnifiedProfileMyStoriesDataSource *_myStoriesDataSource;
    SCFeatureSettingsManager *_featureSettingsManager;
    _Bool _shouldDisplayBadgeInAddToGroup;
    id <SCUnifiedActionMenuDataProviderDelegate> _delegate;
}

@property(nonatomic) __weak id <SCUnifiedActionMenuDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (void)updateViewModelWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithDataSource:(id)arg1 myStoriesDataSource:(id)arg2 featureSettingsManager:(id)arg3 shouldDisplayBadgeInAddToGroup:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCUnifiedProfileStoriesSectionDataProviding.h"
#import "SCUpdateListener.h"

@class NSString, SCEventListenerAnnouncer, SCUserSession;

@interface SCUnifiedProfileStoriesSectionDataProvider : NSObject <SCUpdateListener, SCUnifiedProfileStoriesSectionDataProviding>
{
    SCEventListenerAnnouncer *_eventAnnouncer;
    id <SCImageDownloading> _imageDownloader;
    SCUserSession *_userSession;
    id <SCUnifiedProfileStoriesDataSource> _dataSource;
    _Bool _showEmptyState;
    id <SCUnifiedProfileStoriesSectionDataProvidingDelegate> _dataProviderDelegate;
    id <SCPerforming> _updateQueuePerformer;
}

+ (id)announcerIdentifier;
@property(retain, nonatomic) id <SCPerforming> updateQueuePerformer; // @synthesize updateQueuePerformer=_updateQueuePerformer;
@property(nonatomic) __weak id <SCUnifiedProfileStoriesSectionDataProvidingDelegate> dataProviderDelegate; // @synthesize dataProviderDelegate=_dataProviderDelegate;
- (void).cxx_destruct;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (void)_configureStoriesListViewCell:(id)arg1;
- (void)_configureStoriesCollectionViewCell:(id)arg1;
- (unsigned long long)viewMoreExpansionIncrementThreshold;
- (unsigned long long)viewMoreExpansionThreshold;
- (id)storySectionIdentifier;
- (CDUnknownBlockType)configurationBlockForStoriesListViewCell;
- (CDUnknownBlockType)configurationBlockForStoriesCell;
- (id)storyListViewCellViewModels;
- (id)storiesCellViewModel;
- (void)setSectionDataModel:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)initWithImageDownloader:(id)arg1 userSession:(id)arg2 dataSource:(id)arg3 showEmptyState:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

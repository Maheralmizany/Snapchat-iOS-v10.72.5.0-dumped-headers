//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCSnapchattersDataRequestListener.h"
#import "SCUnifiedProfileIdentitySectionDataProviding.h"
#import "SCUpdateListener.h"

@class NSString, SCLazy, SCUnifiedProfileIdentityCellViewModel, SCUnifiedProfileMyStoriesDataSource, SCUserSession;

@interface SCMyUnifiedProfileIdentitySectionDataProvider : NSObject <SCUpdateListener, SCSnapchattersDataRequestListener, SCUnifiedProfileIdentitySectionDataProviding>
{
    id <SCImageDownloading> _imageDownloader;
    SCUserSession *_userSession;
    SCUnifiedProfileMyStoriesDataSource *_dataSource;
    SCLazy *_snapchattersDataTracker;
    long long _dataLoadingStatus;
    id <SCUnifiedProfileIdentitySectionDataProvidingDelegate> _dataProviderDelegate;
    SCUnifiedProfileIdentityCellViewModel *_identityViewModel;
    id <SCPerforming> _updateQueuePerformer;
}

@property(retain, nonatomic) id <SCPerforming> updateQueuePerformer; // @synthesize updateQueuePerformer=_updateQueuePerformer;
@property(copy, nonatomic) SCUnifiedProfileIdentityCellViewModel *identityViewModel; // @synthesize identityViewModel=_identityViewModel;
@property(nonatomic) __weak id <SCUnifiedProfileIdentitySectionDataProvidingDelegate> dataProviderDelegate; // @synthesize dataProviderDelegate=_dataProviderDelegate;
- (void).cxx_destruct;
- (void)didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didStartSnapchattersUpdateDataRequest:(id)arg1;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (void)_reloadSectionWithIdentityCellViewModel:(id)arg1;
- (void)_reloadIdentitySection;
- (void)_configureSnapcodeCellConfigurationBlock:(id)arg1;
- (void)_configureAvatarCellConfigurationBlock:(id)arg1;
- (id)_snapcodeCollectionViewItemViewModel;
- (id)_storyCollectionViewItemViewModel;
- (void)setUp;
- (long long)dataLoadingStatus;
- (_Bool)shouldShowBounceAnimationWhenAppearOnScreen;
- (id)itemCellConfigurationBlocksByReuseIdentifier;
- (id)itemCellClassesByReuseIdentifier;
- (id)initWithImageDownloader:(id)arg1 userSession:(id)arg2 dataSource:(id)arg3 snapchattersDataTracker:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCGallerySingleItemOperaDataSource.h"

@class NSMutableSet, NSString, SCGalleryOperaConfiguration, SCGalleryOperaMediaManager, SCGalleryPhotoLibraryObserver, SCOperaViewModel, SCUserSession;

@interface SCGallerySinglePHAssetOperaDataSource : NSObject <SCGallerySingleItemOperaDataSource>
{
    SCUserSession *_userSession;
    id <SCGallerySingleItemOperaDataSourceDelegate> _delegate;
    SCGalleryOperaMediaManager *_mediaManager;
    SCOperaViewModel *_currentViewModel;
    SCGalleryOperaConfiguration *_configuration;
    NSString *_dataSourceId;
    CDStruct_bac8f6e9 _mediaScenePath;
    NSMutableSet *_existingMediaLoadedProperties;
    id <SCGalleryItem> _item;
    SCGalleryPhotoLibraryObserver *_photoLibraryObserver;
}

@property(nonatomic) CDStruct_bac8f6e9 mediaScenePath; // @synthesize mediaScenePath=_mediaScenePath;
@property(readonly, copy, nonatomic) NSString *singleDataSourceId; // @synthesize singleDataSourceId=_dataSourceId;
@property(retain, nonatomic) SCOperaViewModel *currentViewModel; // @synthesize currentViewModel=_currentViewModel;
@property(nonatomic) __weak SCGalleryOperaMediaManager *mediaManager; // @synthesize mediaManager=_mediaManager;
@property(nonatomic) __weak id <SCGallerySingleItemOperaDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_reloadMediaContent:(id)arg1;
- (void)_unobservePHAssetChanges;
- (void)_observePHAssetChanges;
- (void)_appendMediaLoadedProperties:(id)arg1;
- (void)_removeAllMediaLoadedProperties;
- (void)didFailToDisplayAtPageId:(id)arg1 error:(id)arg2;
- (void)updateMagicMomentFrameTime:(id)arg1 forPageId:(id)arg2;
- (void)attemptToAttachPresentationFrame:(id)arg1 toPageId:(id)arg2;
- (void)handleMoveToNextEventAtPageId:(id)arg1 didTapToNext:(_Bool)arg2;
- (void)manualFetchHDMediaWithPageId:(id)arg1;
- (id)resolveGalleryOperaSnapWithPageId:(id)arg1;
- (id)resolveGallerySnapWithPageId:(id)arg1;
- (void)removeMediaWithPageId:(id)arg1;
- (void)startToBrowsePageWithPageId:(id)arg1 distanceToCurrentDataSource:(long long)arg2;
- (void)prepareToViewPageWithPageId:(id)arg1;
- (void)buildViewModels;
- (void)dealloc;
- (id)initWithItem:(id)arg1 configuration:(id)arg2 userSession:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


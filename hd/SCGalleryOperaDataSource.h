//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCGalleryOperaSnapResolving.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSObject<SCGalleryOperaMagicMomentCaching>, NSString, SCGalleryOperaConfiguration, SCGalleryOperaMediaManager, SCUserSession;

@interface SCGalleryOperaDataSource : NSObject <SCGalleryOperaSnapResolving>
{
    SCGalleryOperaConfiguration *_configuration;
    SCUserSession *_userSession;
    NSString *_currentGroupId;
    NSString *_currentBrowseSnapId;
    NSArray *_groups;
    NSDictionary *_groupIdToOperaGroup;
    NSMutableDictionary *_groupIdToDataSource;
    NSObject<SCGalleryOperaMagicMomentCaching> *_magicMomentCache;
    SCGalleryOperaMediaManager *_galleryOperaMediaManager;
}

@property(readonly, nonatomic) SCGalleryOperaMediaManager *galleryOperaMediaManager; // @synthesize galleryOperaMediaManager=_galleryOperaMediaManager;
@property(readonly, nonatomic) NSObject<SCGalleryOperaMagicMomentCaching> *magicMomentCache; // @synthesize magicMomentCache=_magicMomentCache;
- (void).cxx_destruct;
- (void)_buildSingleGroupDataSourceIfNecessary:(id)arg1;
- (void)_buildGroupIdToGroupMaps:(id)arg1;
- (void)_updateViewModels;
- (id)magicMomentUpdatedSnaps;
- (id)resolveAllGallerySnaps;
- (void)updateMagicMomentFrameTime:(id)arg1 forPage:(id)arg2;
- (id)resolveGalleryOperaSnapAtPage:(id)arg1;
- (id)resolveGallerySnapAtPage:(id)arg1;
- (void)_updateGroupViewModelsIfNeeded:(id)arg1;
- (_Bool)updateGroups:(id)arg1;
- (void)handleMoveToNextEventAtPage:(id)arg1 didTapToNext:(_Bool)arg2;
- (void)removeMediaAtPage:(id)arg1;
- (void)startToBrowsePage:(id)arg1;
- (void)prepareToViewPage:(id)arg1;
- (void)buildRootViewModels;
- (id)currentViewSnap;
- (id)currentViewModel;
- (id)initWithGroups:(id)arg1 initialIndex:(long long)arg2 configuration:(id)arg3 userSession:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


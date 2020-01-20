//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCOperaPlaylistItemGroupResolver.h"
#import "SCOperaPlaylistItemMediaPreparationController.h"

@class IMPShowProfileLaunchInfo, NSArray, NSDictionary, NSString, SCDiscoverEdition, SCLazy, SCUserSession;

@interface SCSingleLongformShowOperaDataSource : NSObject <SCOperaPlaylistItemGroupResolver, SCOperaPlaylistItemMediaPreparationController>
{
    SCUserSession *_userSession;
    NSArray *_snaps;
    SCDiscoverEdition *_edition;
    IMPShowProfileLaunchInfo *_showProfileLaunchInfo;
    NSDictionary *_snapIdToDiscoverChunk;
    NSDictionary *_itemIdToSnap;
    SCLazy *_lazyPublisherStoriesMetadataCoordinator;
}

- (void).cxx_destruct;
- (void)removeMediaForItem:(id)arg1;
- (void)prepareMediaForItem:(id)arg1 waitForDownloading:(_Bool)arg2 startWaitingForDownloadCallback:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_discoverChunkFromPublisherSnap:(id)arg1 editionId:(id)arg2;
- (id)discoverChunkForSnapId:(id)arg1;
- (id)dataModelForItem:(id)arg1;
- (void)loadMediaForPlaylistItemGroup:(id)arg1;
- (void)unresolvePlaylistItemGroup:(id)arg1;
- (void)resolvePlaylistItemGroup:(id)arg1;
- (id)initWithUserSession:(id)arg1 show:(id)arg2 editionId:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


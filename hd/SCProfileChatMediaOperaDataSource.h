//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCOperaPlaylistDataSource.h"
#import "SCUpdateListener.h"

@class NSArray, NSMutableDictionary, NSMutableSet, NSString, SCProfileChatMediaDataSource, SCProfileChatMediaOperaMediaManager, SCQueuePerformer, SCUserSession;

@interface SCProfileChatMediaOperaDataSource : NSObject <SCUpdateListener, SCOperaPlaylistDataSource>
{
    SCProfileChatMediaDataSource *_profileChatMediaDataSource;
    SCUserSession *_userSession;
    SCQueuePerformer *_chatMediaDownloadPerformer;
    id <SCOperaViewProvider> _chromeAvatarProvider;
    NSMutableSet *_loadingChatMediaIds;
    NSArray *_currentChatMedia;
    NSMutableDictionary *_groupIdToGroupDataModel;
    NSMutableDictionary *_itemIdToGroupDataModel;
    id <SCOperaPlaylistItemController> _playlistItemController;
    SCProfileChatMediaOperaMediaManager *_chatMediaOperaMediaManager;
}

@property(readonly, nonatomic) SCProfileChatMediaOperaMediaManager *chatMediaOperaMediaManager; // @synthesize chatMediaOperaMediaManager=_chatMediaOperaMediaManager;
@property(nonatomic) __weak id <SCOperaPlaylistItemController> playlistItemController; // @synthesize playlistItemController=_playlistItemController;
- (void).cxx_destruct;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (void)_unarchiveChatMediaContent:(id)arg1;
- (void)_didFailFetchChatMediaContent:(id)arg1;
- (void)_didSucceedFetchChatMediaContent:(id)arg1;
- (void)_downloadChatMediaDataModel:(id)arg1 chatMediaContent:(id)arg2;
- (_Bool)needToPrepareMediaBeforeDisplay;
- (id)playlistItemGroupForDataModel:(id)arg1;
- (_Bool)canResolvePlaylistItemGroupDataModel:(id)arg1;
- (void)removeMediaForItem:(id)arg1;
- (void)prepareMediaForItem:(id)arg1 waitForDownloading:(_Bool)arg2 startWaitingForDownloadCallback:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)pagesPropertiesForDataModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadMediaForPlaylistItemGroup:(id)arg1;
- (void)unresolvePlaylistItemGroup:(id)arg1;
- (void)_fetchMoreChatMediaDataModelsWithCurrentDataModel:(id)arg1;
- (void)resolvePlaylistItemGroup:(id)arg1;
- (id)dataModelForGroup:(id)arg1;
- (void)teardownDataModelForItem:(id)arg1;
- (id)dataModelForItem:(id)arg1;
- (id)groupDataModelForItemId:(id)arg1;
- (id)initWithProfileChatMediaDataSource:(id)arg1 initialChatMedia:(id)arg2 userSession:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCChatCellMediaDelegate.h"
#import "SCChatConversationUpdaterListener.h"
#import "SCChatViewLifeCycleListener.h"
#import "SCTraceEnabled.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, SCChatLoadHistoryActionHandler, SCChatMetadataFetchActionHandler, UIViewController<SCChatCellGestureDelegate><SCChatFullscreenMediaChatTableCellDelegate><SCChatVisibilityProvider><SCActionable><SCPageNameLogging>;

@interface SCChatTableViewV3Delegate : NSObject <SCTraceEnabled, UITableViewDelegate, UITableViewDataSource, SCChatConversationUpdaterListener, SCChatViewLifeCycleListener, SCChatCellMediaDelegate>
{
    id <SCChatConversationViewModel> _conversationViewModel;
    double _reloadingOldChatsTableHeight;
    id <UIScrollViewDelegate> _scrollDelegate;
    UIViewController<SCChatCellGestureDelegate><SCChatFullscreenMediaChatTableCellDelegate><SCChatVisibilityProvider><SCActionable><SCPageNameLogging> *_parentVC;
    id <SCSavableItemChatTableViewCellDelegate> _savableCellDelegate;
    id <SCTextChatTableViewCellV2Delegate> _textCellDelegate;
    id <SCSnapReplayViewCellDelegate> _replayCellDelegate;
    id <SCActionHandling> _chatActionHandler;
    double _lastXOffset;
    _Bool _showedChatDeletionCell;
    SCChatMetadataFetchActionHandler *_fetchActionHandler;
    SCChatLoadHistoryActionHandler *_loadHistoryActionHandler;
}

- (void).cxx_destruct;
- (id)_cellToStackedChatTableViewCell:(id)arg1;
- (id)_cellToMediaCell:(id)arg1;
- (void)_fetchSearchStoryForId:(id)arg1 snapId:(id)arg2 messageId:(id)arg3 conversationId:(id)arg4;
- (void)_fetchMapSnapViewModel:(id)arg1;
- (void)_fetchStorySnapForId:(id)arg1 messageId:(id)arg2 conversationId:(id)arg3;
- (void)_fetchSnapchatterForId:(id)arg1 messageId:(id)arg2 conversationId:(id)arg3;
- (void)_fetchMediaCardsForViewModel:(id)arg1 cell:(id)arg2;
- (void)_fetchStackedMediaForStackedViewModel:(id)arg1;
- (void)_fetchMediaForMediaViewModel:(id)arg1;
- (void)_fetchMediaWithReplyMessageViewModel:(id)arg1;
- (void)_fetchMedia:(id)arg1 mediaLoadState:(long long)arg2 messageId:(id)arg3 conversationId:(id)arg4 shouldDismissPrefetchRule:(_Bool)arg5;
- (void)_fetchMedia:(id)arg1 messageId:(id)arg2 conversationId:(id)arg3 shouldDismissPrefetchRule:(_Bool)arg4;
- (void)_fetchMedia:(id)arg1 messageId:(id)arg2 conversationId:(id)arg3;
- (void)_fetchMedias:(id)arg1 forStoryMediaMessageId:(id)arg2 conversationId:(id)arg3;
- (void)viewDidSwipeOut;
- (void)stopAudioVideoNotePlayer;
- (void)clearMediaForCells:(id)arg1;
- (void)loadMediaForVisibleCells:(id)arg1;
- (void)loadVideoForVisibleCells:(id)arg1;
- (void)_loadHistoryForLoadingCell:(id)arg1;
- (void)loadHistoryIfLoadingCellIsVisibleInTableView:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableViewDidLoadOldMessages:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_fetchMetadataForMessageViewModel:(id)arg1 cell:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)didConversationViewModelChange:(id)arg1;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)setLastXOffset:(double)arg1;
- (id)initWithScrollDelegate:(id)arg1 withParentVC:(id)arg2 savableCellDelegate:(id)arg3 textCellDelegate:(id)arg4 replayCellDelegate:(id)arg5 chatActionHandler:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


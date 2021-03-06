//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCActionHandling.h"

@class NSString, SCEventListenerAnnouncer, SCSendToDocObjectRecipientDataSource;

@interface SCSendToSelectAllActionHandler : NSObject <SCActionHandling>
{
    SCSendToDocObjectRecipientDataSource *_recipientDataSource;
    id <SCSendToListsDataFetching> _listsDataFetcher;
    id <SCUserSelectionManaging> _selectionStateManager;
    SCEventListenerAnnouncer *_eventAnnouncer;
}

- (void).cxx_destruct;
- (void)_announceSelectAllListSelectionWithUserIdBatchToSelect:(id)arg1 userIdBatchToDeselect:(id)arg2;
- (void)_handleTapSelectAllWithUserIds:(id)arg1 groups:(id)arg2;
- (void)_handleTapSelectAllFromListWithListId:(id)arg1;
- (void)_handleTapSelectAllBestFriendsWithSnapchatters:(id)arg1;
- (void)_handleTapSelectAllBestFriends;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithRecipientDataSource:(id)arg1 listsDataFetcher:(id)arg2 selectionStateManager:(id)arg3 eventAnnouncer:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCAnnouncing.h"
#import "SCUserSelectionManaging.h"

@class NSOrderedSet, NSString, SCUserSelectionListenerAnnouncer;

@interface SCSendToSelectionStateManager : NSObject <SCUserSelectionManaging, SCAnnouncing>
{
    SCUserSelectionListenerAnnouncer *_updateAnnouncer;
    id <SCPerforming> _performer;
    NSOrderedSet *_previouslySelectedItems;
    NSOrderedSet *_selectedItems;
    long long _numberOfNonPrivateGroupStoriesSelected;
    long long _numberOfStoriesSelected;
    long long _numberOfRecipientsSelected;
    long long _maxNumberOfSelectedRecipientsAllowed;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)removeListener:(id)arg1;
- (_Bool)addListener:(id)arg1;
- (id)orderedItemIds;
- (id)_selectedRecipientIds;
- (id)_selectionResults;
- (_Bool)_wasItemJustToggledItemType:(long long)arg1 itemId:(id)arg2;
- (_Bool)_isItemSelectedItemType:(long long)arg1 itemId:(id)arg2;
- (void)_announceUpdateWithItems:(id)arg1 isSelected:(_Bool)arg2;
- (void)_announceUpdateWithItemId:(id)arg1 itemType:(long long)arg2 isSelected:(_Bool)arg3;
- (void)_updateForNewlyAddedFriend:(id)arg1;
- (void)_deselectedGroupParticipantsInGroup:(id)arg1;
- (void)_didUpdateItemType:(long long)arg1 selected:(_Bool)arg2;
- (_Bool)_canSelectItemType:(long long)arg1;
- (void)_setBatch:(id)arg1 selected:(_Bool)arg2 announceUpdate:(_Bool)arg3;
- (void)_setItemType:(long long)arg1 itemId:(id)arg2 selected:(_Bool)arg3 announceUpdate:(_Bool)arg4;
- (void)_setItemType:(long long)arg1 itemId:(id)arg2 selected:(_Bool)arg3;
- (void)_updatePreviouslySelectedItemsWithItemId:(id)arg1 itemType:(long long)arg2 isSelected:(_Bool)arg3;
- (id)selectedRecipientIds;
- (void)selectNewlyAddedFriend:(id)arg1;
- (long long)numberOfRecipientsSelected;
- (long long)numberOfStoriesSelected;
- (long long)numberOfNonPrivateGroupStoriesSelected;
- (id)selectionResults;
- (_Bool)wasItemJustToggledItemType:(long long)arg1 itemId:(id)arg2;
- (_Bool)isItemSelectedItemType:(long long)arg1 itemId:(id)arg2;
- (void)updatePreviouslySelectedItemsWithItemId:(id)arg1 itemType:(long long)arg2 isSelected:(_Bool)arg3;
- (void)setMaxNumberOfSelectedRecipientsAllowed:(long long)arg1;
- (void)setBatch:(id)arg1 selected:(_Bool)arg2;
- (void)setItemType:(long long)arg1 itemId:(id)arg2 selected:(_Bool)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


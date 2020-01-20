//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCUpdateAnnouncing.h"

@class NSString, SCLazy, SCScopedAccess, SCUpdateListenerAnnouncer, SCUserSession;

@interface SCMyUnifiedProfilePostRegistrationStateManager : NSObject <SCUpdateAnnouncing>
{
    SCUpdateListenerAnnouncer *_updateAnnouncer;
    SCLazy *_snapchattersDataFetcher;
    id <SCPerforming> _performer;
    NSString *_userId;
    _Bool _isUserEligibleToCreateGroup;
    SCUserSession *_userSession;
    SCScopedAccess *_scopedCircumstanceEngine;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (_Bool)_shouldShowCreateGroup;
- (void)_updateUserEligibilityWithMutualFriendsCount:(unsigned long long)arg1;
- (id)_itemIdentifiersToOpenedKey;
- (id)_itemIdentifiersToDismissedKey;
- (id)_itemIdentifiersToBadgeKey;
- (void)_announceItemUpdate;
- (void)_logEventWithActionType:(long long)arg1 identifier:(id)arg2;
- (void)didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didStartSnapchattersUpdateDataRequest:(id)arg1;
- (void)didOpenItemWithIdentifier:(id)arg1;
- (void)dismissItemWithIdentifier:(id)arg1;
- (void)unbadgeItemWithIdentifier:(id)arg1;
- (_Bool)hasOpenedItemWithIdentifier:(id)arg1;
- (void)_updateCircumstanceEngineRules;
- (_Bool)_shouldShowActivityCard;
- (_Bool)_shouldShowBitmoji;
- (_Bool)needsToUpdateItemWithIdentifier:(id)arg1;
- (_Bool)hasDismissedItemWithIdentifier:(id)arg1;
- (_Bool)shouldBadgeItemWithIdentifier:(id)arg1;
- (_Bool)shouldAlwaysShowItemWithIdentifier:(id)arg1;
- (void)removeUpdateListener:(id)arg1;
- (void)addUpdateListener:(id)arg1;
- (id)initWithSnapchattersDataFetcher:(id)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

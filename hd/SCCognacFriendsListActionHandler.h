//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCActionHandling.h"

@class NSMutableSet, NSString, SCCognacFriendsListViewController;

@interface SCCognacFriendsListActionHandler : NSObject <SCActionHandling>
{
    SCCognacFriendsListViewController *_presentingViewController;
    NSMutableSet *_selectedFriendIds;
}

- (void).cxx_destruct;
- (void)clear;
- (void)_showMaxPlayersNumberLimitAlert:(unsigned long long)arg1;
- (void)_toggleFriendListCellWithActionModel:(id)arg1;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithPresentingViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

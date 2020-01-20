//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCMiniProfileSectionController.h"

#import "SCMiniProfileFooterRowControllerDelegate.h"
#import "SCMiniProfileFriendRowControllerDelegate.h"
#import "SCSnapchattersDataRequestListener.h"

@class Friend, NSString, SCLazy, SCUserSession;

@interface SCMiniProfileFriendIdentitySectionController : SCMiniProfileSectionController <SCMiniProfileFriendRowControllerDelegate, SCMiniProfileFooterRowControllerDelegate, SCSnapchattersDataRequestListener>
{
    Friend *_friend;
    SCUserSession *_userSession;
    _Bool _hideStory;
    _Bool _showMore;
    id <SCMiniProfileFriendIdentitySectionControllerDelegate> _delegate;
    SCLazy *_storiesDataProvider;
}

- (void).cxx_destruct;
- (void)_tapPlayFriendStoriesWithSummaryInfo:(id)arg1 baseView:(id)arg2;
- (void)didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didStartSnapchattersUpdateDataRequest:(id)arg1;
- (void)footerRowControllerDidSelect:(id)arg1;
- (void)friendIdentityRowControllerDidTapFriendStory:(id)arg1 baseView:(id)arg2;
- (void)friendIdentityRowControllerDidTapAddFriend:(id)arg1;
- (id)rowControllerAtIndex:(long long)arg1;
- (long long)numberOfRows;
- (double)extraBottomInsetSpacing;
- (void)setShowsMore:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithFriend:(id)arg1 userSession:(id)arg2 hideStory:(_Bool)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

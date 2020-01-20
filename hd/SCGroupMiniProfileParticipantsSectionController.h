//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCMiniProfileSectionController.h"

#import "SCMiniProfileFooterRowControllerDelegate.h"
#import "SCMiniProfileFriendRowControllerDelegate.h"

@class NSArray, NSString, SCUserSession;

@interface SCGroupMiniProfileParticipantsSectionController : SCMiniProfileSectionController <SCMiniProfileFooterRowControllerDelegate, SCMiniProfileFriendRowControllerDelegate>
{
    NSString *_displayName;
    SCUserSession *_userSession;
    _Bool _hideStories;
    id <SCGroupMiniProfileParticipantsSectionControllerDelegate> _delegate;
    NSArray *_friends;
    _Bool _needsFooter;
    _Bool _showsAll;
}

- (void).cxx_destruct;
- (void)friendIdentityRowControllerDidTapFriendStory:(id)arg1 baseView:(id)arg2;
- (void)friendIdentityRowControllerDidLongPressFriend:(id)arg1;
- (void)friendIdentityRowControllerDidTapFriend:(id)arg1;
- (void)friendIdentityRowControllerDidTapAddFriend:(id)arg1;
- (void)footerRowControllerDidSelect:(id)arg1;
- (id)rowControllerAtIndex:(long long)arg1;
- (long long)numberOfRows;
- (_Bool)_shouldShowFooter;
- (_Bool)_shouldShowAll;
- (id)_initWithFriends:(id)arg1 displayName:(id)arg2 userSession:(id)arg3 hideStories:(_Bool)arg4 delegate:(id)arg5;
- (id)initWithCustomStory:(id)arg1 userSession:(id)arg2 hideStories:(_Bool)arg3 delegate:(id)arg4;
- (id)initWithGroup:(id)arg1 userSession:(id)arg2 hideStories:(_Bool)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

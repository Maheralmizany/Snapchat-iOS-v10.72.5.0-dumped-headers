//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCUserTaggingFriendsProvider.h"

@class NSString, SCSortableRecipientFilter, SCUserSession;

@interface SCManagerBasedUserTaggingFriendsProvider : NSObject <SCUserTaggingFriendsProvider>
{
    SCUserSession *_userSession;
    SCSortableRecipientFilter *_friendsFilter;
}

- (void).cxx_destruct;
- (id)_constructDefaultFriendList;
- (id)userTagsFromText:(id)arg1 excludeCarouselTaggedUsers:(id)arg2;
- (id)friendForUsername:(id)arg1;
- (id)friendsListForUsertaggingWithQueryName:(id)arg1;
- (_Bool)isStoryPrivacyCustom;
- (id)bitmojiSelfieFetcher;
- (id)blockedStoryFriends;
- (_Bool)shouldShowUserTaggingOnboardingTooltip;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


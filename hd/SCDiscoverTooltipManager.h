//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCOnboardingTooltipManager.h"

#import "SCDataCoordinatorListener.h"

@class NSString, SCLazy, SCUserSession, UICollectionView;

@interface SCDiscoverTooltipManager : SCOnboardingTooltipManager <SCDataCoordinatorListener>
{
    SCUserSession *_userSession;
    UICollectionView *_parentView;
    SCLazy *_newUserStoryOnboardingTooltip;
    SCLazy *_friendStoriesDataCoordinator;
}

- (void).cxx_destruct;
- (void)_hideTeamSnapchatStoryTooltipIfNeeded:(id)arg1;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (void)storyWillPlayWithFriendUserName:(id)arg1;
- (id)_createNewUserStoryOnboardingTooltip;
- (void)markTooltipCompleted:(id)arg1;
- (void)_setupWithParentView:(id)arg1;
- (id)initWithUserSession:(id)arg1 parentView:(id)arg2 friendStoriesDataCoordinator:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


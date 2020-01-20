//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCAddFriendsSnapchatterDataProvider, SCMomentsOperaPresenter, SCSearchDiscoverStoriesPresenter, SCSearchFriendProvider, SCSearchFriendsDataProvider, SCSearchStoriesPresenter, SCUserSession;

@interface SCSearchSession : NSObject
{
    NSString *_sessionId;
    SCUserSession *_userSession;
    long long _launchSource;
    long long _entryPoint;
    SCSearchFriendProvider *_friendProvider;
    SCSearchFriendsDataProvider *_friendsDataProvider;
    SCAddFriendsSnapchatterDataProvider *_addFriendsSnapchatterDataProvider;
    SCSearchStoriesPresenter *_storiesPresenter;
    SCSearchDiscoverStoriesPresenter *_discoverStoriesPresenter;
    SCMomentsOperaPresenter *_momentsOperaPresenter;
    id <SCLensUnlockerProtocol> _lensUnlocker;
}

@property(retain, nonatomic) id <SCLensUnlockerProtocol> lensUnlocker; // @synthesize lensUnlocker=_lensUnlocker;
@property(readonly, nonatomic) SCMomentsOperaPresenter *momentsOperaPresenter; // @synthesize momentsOperaPresenter=_momentsOperaPresenter;
@property(readonly, nonatomic) SCSearchDiscoverStoriesPresenter *discoverStoriesPresenter; // @synthesize discoverStoriesPresenter=_discoverStoriesPresenter;
@property(readonly, nonatomic) SCSearchStoriesPresenter *storiesPresenter; // @synthesize storiesPresenter=_storiesPresenter;
@property(readonly, nonatomic) SCAddFriendsSnapchatterDataProvider *addFriendsSnapchatterDataProvider; // @synthesize addFriendsSnapchatterDataProvider=_addFriendsSnapchatterDataProvider;
@property(readonly, nonatomic) SCSearchFriendsDataProvider *friendsDataProvider; // @synthesize friendsDataProvider=_friendsDataProvider;
@property(readonly, nonatomic) SCSearchFriendProvider *friendProvider; // @synthesize friendProvider=_friendProvider;
@property(readonly, nonatomic) long long entryPoint; // @synthesize entryPoint=_entryPoint;
@property(readonly, nonatomic) long long launchSource; // @synthesize launchSource=_launchSource;
@property(readonly, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (void).cxx_destruct;
- (id)presentingStoryId;
- (id)debugInfo;
- (id)initWithUserSession:(id)arg1 launchSource:(long long)arg2 pageType:(unsigned long long)arg3;
- (id)initWithUserSession:(id)arg1 launchSource:(long long)arg2;

@end

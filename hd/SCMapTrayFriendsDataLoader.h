//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCMapTrayBaseDataLoader.h"

#import "SCMapPeopleFriendsListener.h"
#import "SCMapPersonLocationsListener.h"

@class NSArray, NSDate, NSString, SCCallbackCancelable, SCMapSnapTokenService, SCMapUserPreferences;

@interface SCMapTrayFriendsDataLoader : SCMapTrayBaseDataLoader <SCMapPersonLocationsListener, SCMapPeopleFriendsListener>
{
    id <SCMapPersonLocationsProviding> _personLocationProvider;
    id <SCMapPeopleFriendsProvider> _friendsProvider;
    SCMapSnapTokenService *_snapTokenService;
    SCMapUserPreferences *_mapUserPreferences;
    NSString *_currentUserId;
    SCCallbackCancelable *_overallCancelToken;
    id <SCCanceling> _rpcCancelToken;
    unsigned long long _maxFriendCount;
    NSDate *_lastProcessDate;
    NSArray *_processedUserIds;
    NSArray *_loadedPeople;
    NSArray *_loadedPeopleLocations;
}

@property(readonly, nonatomic) NSArray *loadedPeopleLocations; // @synthesize loadedPeopleLocations=_loadedPeopleLocations;
@property(readonly, nonatomic) NSArray *loadedPeople; // @synthesize loadedPeople=_loadedPeople;
- (void).cxx_destruct;
- (void)peopleFriendsProviderDidUpdate:(id)arg1;
- (void)personLocationsProviderDidUpdate:(id)arg1;
- (void)_parseLoadedData;
- (void)_handleLoadedUserIds:(id)arg1;
- (void)_handleLoadFailure:(id)arg1;
- (void)_loadFriendIdsIfNecessary;
- (void)_cleanUp;
@property(readonly, nonatomic) NSArray *cachedFriendIds;
- (_Bool)needsUpdate;
- (void)handleTasksCompleted;
- (id)initializeLoad;
- (unsigned long long)bestFriendCountWithinPeople:(id)arg1;
- (void)dealloc;
- (id)initWithFriendsProvider:(id)arg1 personLocationProvider:(id)arg2 snapTokenService:(id)arg3 mapUserPreferences:(id)arg4 performer:(id)arg5 currentUserId:(id)arg6 maxFriendCount:(unsigned long long)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCCognacWVJBRequestOperation.h"

@class NSArray, NSDictionary, NSError, NSString, SCCognacAppSessionPresentUser, SCCognacServiceCoordinator;

@interface SCCognacFetchLeaderboardScoresOperation : SCCognacWVJBRequestOperation
{
    NSString *_leaderboardId;
    NSArray *_userIds;
    NSDictionary *_userMap;
    NSDictionary *_leaderboardEntryMap;
    NSDictionary *_externalUserProfileInfoMap;
    NSError *_error;
    SCCognacServiceCoordinator *_cognacServiceCoordinator;
    NSString *_appId;
    SCCognacAppSessionPresentUser *_localUser;
    NSArray *_presentUsers;
}

@property(copy, nonatomic) NSArray *presentUsers; // @synthesize presentUsers=_presentUsers;
@property(retain, nonatomic) SCCognacAppSessionPresentUser *localUser; // @synthesize localUser=_localUser;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) SCCognacServiceCoordinator *cognacServiceCoordinator; // @synthesize cognacServiceCoordinator=_cognacServiceCoordinator;
- (void).cxx_destruct;
- (id)_makeScoresResponse;
- (struct NSDictionary *)_makeErrorResponse;
- (void)_fetchExternalUserProfileInfosWithDispatchGroup:(id)arg1;
- (void)_fetchLeaderboardEntriesWithDispatchGroup:(id)arg1;
- (void)teardown;
- (void)run;

@end


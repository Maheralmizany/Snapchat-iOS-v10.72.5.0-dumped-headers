//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCMapPersonLocationHelpers : NSObject
{
}

+ (_Bool)_canCurrentUserFriendLocation:(id)arg1 mergeWithCandidateFriendCluster:(id)arg2;
+ (id)_personLocationClustersFromFriendClusters:(id)arg1 mapPeopleProvider:(id)arg2 mapStatusFetcher:(id)arg3 currentUserId:(id)arg4;
+ (id)currentFriendLocationFromFriendLocation:(id)arg1 userLocation:(id)arg2 userId:(id)arg3;
+ (id)personLocationClustersFromFriendClusters:(id)arg1 currentUserFriendLocation:(id)arg2 mapPeopleProvider:(id)arg3 mapStatusFetcher:(id)arg4 currentUserId:(id)arg5;
+ (_Bool)isSCMT1Sticker:(id)arg1 sameTypeAsSCMT1Sticker:(id)arg2;

@end

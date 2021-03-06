//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCDataCoordinating.h"

@class NSString, SCStoriesSnapViewers;

@protocol SCStoriesPlaybackManagementDataProviding <SCDataCoordinating>
- (id <SCStoriesPlaybackDataProviding>)friendStoriesPlaybackDataProvider;
- (void)queryFriendStorySummaryInfoWithUsername:(NSString *)arg1 completion:(void (^)(SCStoriesSummaryInfo *))arg2;
- (SCStoriesSnapViewers *)viewersWithSnapId:(NSString *)arg1;
- (long long)postingStateByClientId:(NSString *)arg1;
- (long long)saveStateBySnapUniqueConsistentId:(NSString *)arg1;
- (long long)deleteStateBySnapUniqueConsistentId:(NSString *)arg1;
@end


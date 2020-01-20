//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCAddFriendsTakeoverSnapchatterDataProviding.h"

@class SCLazy, SCPreferences, SCQueuePerformer;

@interface SCAddFriendsTakeoverSnapchatterDataProvider : NSObject <SCAddFriendsTakeoverSnapchatterDataProviding>
{
    SCLazy *_snapchattersDataFetcher;
    SCLazy *_userDataProvider;
    SCLazy *_viewedIncomingFriendsTracker;
    SCPreferences *_friendsTakeoverPreferences;
    SCQueuePerformer *_performer;
}

- (void).cxx_destruct;
- (void)_didFetchIncomingSnapchattersToDisplay:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 completionQueue:(id)arg3;
- (void)_fetchIncomingSnapchattersToDisplay:(CDUnknownBlockType)arg1 completionQueue:(id)arg2;
- (void)_fetchAllIncomingSnapchattersTo:(CDUnknownBlockType)arg1 completionQueue:(id)arg2;
- (_Bool)_shouldTryShowTakeOverWithSnapchatters:(id)arg1;
- (void)fetchFriendsTakeoverSnapchatters:(CDUnknownBlockType)arg1 completionQueue:(id)arg2;
- (id)initWithSnapchattersDataFetcher:(id)arg1 userDataProvider:(id)arg2 viewedIncomingFriendsTracker:(id)arg3 friendsTakeoverPreferences:(id)arg4;

@end


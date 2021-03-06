//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCSnapchattersFetchedResultObserverRepository;

@interface SCDocObjectFetchingServiceAdaptor : NSObject
{
    SCSnapchattersFetchedResultObserverRepository *_snapchattersFetchedResultObserverRepository;
}

- (void).cxx_destruct;
- (id)blockedSnapchattersObserver;
- (id)incomingSnapchattersObserver;
- (id)outgoingSnapchattersObserver;
- (id)sortedIncomingSnapchatters;
- (id)sortedOutgoingSnapchatters;
- (struct NSDictionary *)usernameToBlockedSnapchatterMap;
- (struct NSDictionary *)userIdToBlockedSnapchatterMap;
- (struct NSDictionary *)usernameToIncomingSnapchatterMap;
- (struct NSDictionary *)userIdToIncomingSnapchatterMap;
- (struct NSDictionary *)usernameToOutgoingSnapchatterMap;
- (struct NSDictionary *)userIdToOutgoingSnapchatterMap;
- (id)initWithSnapchattersFetchedResultObserverRepository:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface SCGroupSyncStateTracker : NSObject
{
    id <SCPerforming> _performer;
    long long _syncState;
    NSMutableArray *_syncGroupsCallbacks;
}

- (void).cxx_destruct;
- (void)didSyncGroups;
- (void)didLoadGroupsFromDisk;
- (void)waitUntilGroupsHaveSynced:(CDUnknownBlockType)arg1;
- (id)init;

@end

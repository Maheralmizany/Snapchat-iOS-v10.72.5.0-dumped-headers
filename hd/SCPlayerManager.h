//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable;

@interface SCPlayerManager : NSObject
{
    NSHashTable *_allocatedPlayers;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopAllPlayers;
- (id)snapshot;
- (void)removePlayer:(id)arg1;
- (void)registerPlayer:(id)arg1;
- (id)init;

@end


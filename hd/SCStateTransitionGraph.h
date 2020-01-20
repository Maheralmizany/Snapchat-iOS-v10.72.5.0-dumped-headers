//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet;

@interface SCStateTransitionGraph : NSObject
{
    NSMutableSet *_pendingStates;
    NSMutableSet *_visitedPaths;
    NSMutableSet *_paths;
}

- (void).cxx_destruct;
- (_Bool)_hasPath:(id)arg1 to:(id)arg2;
- (void)_addPath:(id)arg1;
- (void)_updatePendingStates:(id)arg1;
- (void)_init;
- (void)_markTransitionsUnvisitedFrom:(id)arg1;
- (id)_newVisitedTransitionsTo:(id)arg1;
- (void)reset;
- (id)visit:(id)arg1 by:(id)arg2;
- (void)addPath:(id)arg1 to:(id)arg2;
- (id)init;

@end


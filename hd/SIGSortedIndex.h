//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSOrderedSet;

@interface SIGSortedIndex : NSObject
{
    NSArray *_sparseGroupMapping;
    NSArray *_contiguousGroupMapping;
    NSArray *_sparseGroupEntites;
    NSOrderedSet *_contiguousGroups;
    NSOrderedSet *_sparseGroups;
}

@property(readonly, nonatomic) NSOrderedSet *sparseGroups; // @synthesize sparseGroups=_sparseGroups;
@property(readonly, nonatomic) NSOrderedSet *contiguousGroups; // @synthesize contiguousGroups=_contiguousGroups;
- (void).cxx_destruct;
- (unsigned long long)indexOfNearestSparseGroupForContiguousGroupAtIndex:(unsigned long long)arg1;
- (id)indexPathOfNearestSparseGroupForContiguousGroupAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfNearestSparseGroupForContiguousGroup:(id)arg1;
- (unsigned long long)indexOfContiguousGroupForSparseGroupAtIndex:(unsigned long long)arg1;
- (id)sortedEntitiesInGroupAtSparseIndex:(unsigned long long)arg1;
- (id)sortedEntitiesInGroup:(id)arg1;
- (id)initWithUnsortedEntities:(id)arg1 orderedPredefinedGroups:(id)arg2 keyLookup:(CDUnknownBlockType)arg3;
- (id)initWithUnsortedEntities:(id)arg1 orderedPredefinedGroups:(id)arg2;
- (id)initWithUnsortedEntities:(id)arg1;

@end


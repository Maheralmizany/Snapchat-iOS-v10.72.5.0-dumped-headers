//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCLRUCacheDelegate.h"

@class NSMutableSet, NSString, SCLRUCache, SCMTTileSetInfo;

@interface SCXTileSet : NSObject <SCLRUCacheDelegate>
{
    NSMutableSet *_pendingTiles;
    SCLRUCache *_loadedTiles;
    _Bool _evictsTilesOnIDChange;
    int _type;
    NSString *_name;
    SCMTTileSetInfo *_tileSetInfo;
}

@property(copy, nonatomic) SCMTTileSetInfo *tileSetInfo; // @synthesize tileSetInfo=_tileSetInfo;
@property(nonatomic) _Bool evictsTilesOnIDChange; // @synthesize evictsTilesOnIDChange=_evictsTilesOnIDChange;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)cache:(id)arg1 didEvictObject:(id)arg2 forKey:(id)arg3;
- (void)_setTile:(id)arg1 forID:(id)arg2;
- (void)purgeNonVisibleTileIds:(id)arg1;
- (void)requestDidFailForTileIds:(id)arg1;
- (void)willRequestTileIds:(id)arg1;
- (id)tilesStillNeededFromTileIds:(id)arg1;
- (id)tileForId:(id)arg1;
- (void)loadTiles:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

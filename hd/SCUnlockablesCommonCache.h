//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, SCUnlockablesStickyCache;

@interface SCUnlockablesCommonCache : NSObject
{
    SCUnlockablesStickyCache *_stickyCache;
    int _logContext;
    id <SCUnlockableCommonCacheDelegate> delegate;
    long long _cacheType;
    unsigned long long _capacity;
    id <SCPerforming> _performer;
    NSDictionary *_activeUnlockables;
    NSMutableDictionary *_cache;
    CDUnknownBlockType _parser;
}

@property(readonly, nonatomic) CDUnknownBlockType parser; // @synthesize parser=_parser;
@property(retain, nonatomic) NSMutableDictionary *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) NSDictionary *activeUnlockables; // @synthesize activeUnlockables=_activeUnlockables;
@property(retain, nonatomic) id <SCPerforming> performer; // @synthesize performer=_performer;
@property(readonly, nonatomic) int logContext; // @synthesize logContext=_logContext;
@property(readonly, nonatomic) unsigned long long capacity; // @synthesize capacity=_capacity;
@property(readonly, nonatomic) long long cacheType; // @synthesize cacheType=_cacheType;
@property(nonatomic) __weak id <SCUnlockableCommonCacheDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)_updateActiveUnlockables:(id)arg1 atLocation:(id)arg2;
- (void)_removeExpiredItemsFromCache;
- (void)_pruneCacheIfNecessary;
- (void)_syncCache:(id)arg1 atLocation:(id)arg2 fromSources:(id)arg3 checksumList:(id)arg4 creationDate:(id)arg5;
- (id)_updateLocalUnlockable:(id)arg1 newClientTtlMinutes:(id)arg2 newCreationDate:(id)arg3;
- (id)_activeUnlockablesAtLocation:(id)arg1;
- (id)getChecksumMap;
- (id)getAllUnlockablesIncludingSticky;
- (id)allValues;
- (void)clear;
- (void)updateLocation:(id)arg1;
- (void)preFetch:(id)arg1;
- (void)insertUnlockables:(id)arg1 forLocation:(id)arg2 fromSources:(id)arg3 checksumList:(id)arg4 creationDate:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)removeUnlockablesWithKeys:(id)arg1;
- (id)initWithUnlockables:(id)arg1 cacheType:(long long)arg2 cacheDelegate:(id)arg3;

@end


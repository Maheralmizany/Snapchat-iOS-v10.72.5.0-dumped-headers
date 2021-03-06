//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PINCaching.h"

@class NSString, PINDiskCache, PINMemoryCache, PINOperationQueue;

@interface PINCache : NSObject <PINCaching>
{
    PINDiskCache *_diskCache;
    PINMemoryCache *_memoryCache;
    NSString *_name;
    PINOperationQueue *_operationQueue;
}

+ (id)sharedCache;
@property(retain, nonatomic) PINOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly) PINMemoryCache *memoryCache; // @synthesize memoryCache=_memoryCache;
@property(readonly) PINDiskCache *diskCache; // @synthesize diskCache=_diskCache;
- (void).cxx_destruct;
- (void)removeAllObjects;
- (void)trimToDate:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 metadata:(id)arg3;
- (id)objectForKeyedSubscript:(id)arg1 metadata:(out id *)arg2;
- (_Bool)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3 metadata:(id)arg4;
- (_Bool)setObject:(id)arg1 forKey:(id)arg2 metadata:(id)arg3;
- (id)objectForKey:(id)arg1 metadata:(out id *)arg2;
- (id)objectForKey:(id)arg1;
- (_Bool)containsObjectForKey:(id)arg1;
@property(readonly) unsigned long long diskByteCount;
- (void)trimToDateAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeAllObjectsAsync:(CDUnknownBlockType)arg1;
- (void)removeObjectsForKeysAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeObjectForKeyAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setObjectAsync:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3 metadata:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setObjectAsync:(id)arg1 forKey:(id)arg2 metadata:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateMetadataAsync:(id)arg1 forKey:(id)arg2;
- (void)objectForKeyAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)containsObjectForKeyAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, copy) NSString *description;
- (id)initWithName:(id)arg1 rootPath:(id)arg2 serializer:(CDUnknownBlockType)arg3 deserializer:(CDUnknownBlockType)arg4 fileExtension:(id)arg5;
- (id)initWithName:(id)arg1 rootPath:(id)arg2 fileExtension:(id)arg3;
- (id)initWithName:(id)arg1 fileExtension:(id)arg2;
- (id)initWithName:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


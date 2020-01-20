//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCQueuePerformer, SCStickerDataCache;

@interface SCStickerMetadataCache : NSObject
{
    SCQueuePerformer *_cacheQueuePerformer;
    SCStickerDataCache *_cache;
}

@property(readonly, nonatomic) SCStickerDataCache *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (void)reset;
- (void)stickerPackListForKey:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)stickerPackMetadataForPackID:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeStickerPackListForKey:(id)arg1;
- (void)removeStickerMetadataDataForPackID:(id)arg1;
- (void)setStickerPackList:(id)arg1 forKey:(id)arg2;
- (void)setStickerMetadataData:(id)arg1 forPackID:(id)arg2;
- (id)init;
- (id)initWithCache:(id)arg1;

@end

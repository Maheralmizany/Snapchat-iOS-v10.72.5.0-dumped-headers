//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCCache;

@interface SCMediaCardCache : NSObject
{
    SCCache *_oldCache;
}

+ (id)sharedCache;
- (void).cxx_destruct;
- (void)setMediaCardImageData:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)containsImageKey:(id)arg1;
- (void)_migrateDataForKey:(id)arg1 data:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fetchFromOldCacheWithKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)mediaCardImageDataForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end

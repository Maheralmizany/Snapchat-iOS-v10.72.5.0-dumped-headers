//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, SCLens, SCLensAsset, SCQueuePerformer;

@protocol SCLensDataFetcher <NSObject>
- (void)removeListener:(id <SCLensDataFetcherListener>)arg1;
- (void)addListener:(id <SCLensDataFetcherListener>)arg1;
- (void)clearCacheWithCompletionBlock:(void (^)(void))arg1;
- (void)resumeDownloads;
- (void)pauseDownloads;
- (void)cancelDownloads;
- (void)fetchAsset:(SCLensAsset *)arg1 lens:(SCLens *)arg2 completionPerformer:(SCQueuePerformer *)arg3 completion:(void (^)(id))arg4;
- (void)fetchLenses:(NSArray *)arg1 requestTiming:(long long)arg2;
- (void)fetchLenses:(NSArray *)arg1;
@end


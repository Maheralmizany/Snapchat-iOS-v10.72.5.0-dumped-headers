//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCStickerImageLoaderProtocol.h"

@class NSString, SCQueuePerformer, SCStickerFilesDownloader;

@interface SCContentManagerStickerImageLoader : NSObject <SCStickerImageLoaderProtocol>
{
    SCQueuePerformer *_performer;
    SCStickerFilesDownloader *_downloader;
}

- (void).cxx_destruct;
- (void)_logMetricsWithSuccess:(_Bool)arg1 cacheHit:(_Bool)arg2;
- (id)_loadStickerImageForSticker:(id)arg1 downloadURL:(id)arg2 downloadType:(unsigned long long)arg3 completionQueue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)loadStickerImageForSticker:(id)arg1 contexts:(id)arg2 willAcceptLowRes:(_Bool)arg3 isDecoded:(_Bool)arg4 completionQueue:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (id)initWithPerformer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


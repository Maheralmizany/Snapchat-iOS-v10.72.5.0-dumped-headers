//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCChatStickerCacheEntityLoader.h"
#import "SCStickerImageLoaderProtocol.h"
#import "SCStickerThumbnailImageLoaderProtocol.h"

@class NSString, SCQueuePerformer, SCStickerFilesDownloader, SCStickerImageCache;

@interface SCDefaultStickerImageLoader : NSObject <SCChatStickerCacheEntityLoader, SCStickerImageLoaderProtocol, SCStickerThumbnailImageLoaderProtocol>
{
    SCStickerImageCache *_imageCache;
    SCQueuePerformer *_performer;
    SCStickerFilesDownloader *_downloader;
}

@property(readonly, nonatomic) SCStickerFilesDownloader *downloader; // @synthesize downloader=_downloader;
@property(readonly, nonatomic) SCQueuePerformer *performer; // @synthesize performer=_performer;
@property(readonly, nonatomic) SCStickerImageCache *imageCache; // @synthesize imageCache=_imageCache;
- (void).cxx_destruct;
- (void)loadStickerImageForSticker:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)_loadNonAnimatedStickerThumbnailImageForSticker:(id)arg1 size:(struct CGSize)arg2 contexts:(id)arg3 completionQueue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)loadStickerThumbnailImageForSticker:(id)arg1 size:(struct CGSize)arg2 contexts:(id)arg3 completionQueue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)_processDownloadedData:(id)arg1 forSticker:(id)arg2 request:(id)arg3 completionQueue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)_completeWithImage:(id)arg1 imageRequest:(id)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_handleCachedImage:(id)arg1 forSticker:(id)arg2 imageRequest:(id)arg3 downloadRequest:(id)arg4 completionQueue:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)_loadImageFromCacheForSticker:(id)arg1 imageRequest:(id)arg2 downloadRequest:(id)arg3 completionQueue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)_loadStickerImageForSticker:(id)arg1 downloadURL:(id)arg2 downloadType:(unsigned long long)arg3 completionQueue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)loadStickerImageForSticker:(id)arg1 contexts:(id)arg2 willAcceptLowRes:(_Bool)arg3 isDecoded:(_Bool)arg4 completionQueue:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (id)initWithImageCache:(id)arg1 performer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


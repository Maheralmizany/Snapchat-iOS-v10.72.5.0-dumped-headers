//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCStickerImageLoaderProtocol.h"
#import "SCStickerProtocolThumbnailImageLoaderProtocol.h"
#import "SCStickerThumbnailImageLoaderProtocol.h"

@class NSString, SCQueuePerformer, SCStickerImageCache;

@interface SCEmojiStickerImageLoader : NSObject <SCStickerThumbnailImageLoaderProtocol, SCStickerProtocolThumbnailImageLoaderProtocol, SCStickerImageLoaderProtocol>
{
    SCStickerImageCache *_imageCache;
    SCQueuePerformer *_performer;
    SCQueuePerformer *_renderingPerformer;
}

@property(readonly, nonatomic) SCQueuePerformer *renderingPerformer; // @synthesize renderingPerformer=_renderingPerformer;
@property(readonly, nonatomic) SCQueuePerformer *performer; // @synthesize performer=_performer;
@property(readonly, nonatomic) SCStickerImageCache *imageCache; // @synthesize imageCache=_imageCache;
- (void).cxx_destruct;
- (void)_renderImageForEmojiTextConvertible:(id)arg1 size:(struct CGSize)arg2 cacheKey:(id)arg3 imageRequest:(id)arg4 completionQueue:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)_processCachedImage:(id)arg1 emojiTextConvertible:(id)arg2 size:(struct CGSize)arg3 cacheKey:(id)arg4 imageRequest:(id)arg5 completionQueue:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (id)_loadEmojiStickerImageForEmojiTextConvertible:(id)arg1 size:(struct CGSize)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)_loadEmojiStickerImageForEmojiTextConvertible:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)loadStickerImageForSticker:(id)arg1 contexts:(id)arg2 willAcceptLowRes:(_Bool)arg3 isDecoded:(_Bool)arg4 completionQueue:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (id)loadStickerThumbnailImageForStickerProtocol:(id)arg1 size:(struct CGSize)arg2 contexts:(id)arg3 completionQueue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)loadStickerThumbnailImageForSticker:(id)arg1 size:(struct CGSize)arg2 contexts:(id)arg3 completionQueue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)initWithImageCache:(id)arg1 performer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

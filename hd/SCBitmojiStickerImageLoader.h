//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCStickerImageLoaderProtocol.h"
#import "SCStickerThumbnailImageLoaderProtocol.h"

@class NSString, SCQueuePerformer;

@interface SCBitmojiStickerImageLoader : NSObject <SCStickerImageLoaderProtocol, SCStickerThumbnailImageLoaderProtocol>
{
    id <SCBitmojiImageFetcher> _bitmojiImageFetcher;
    SCQueuePerformer *_performer;
}

@property(readonly, nonatomic) SCQueuePerformer *performer; // @synthesize performer=_performer;
@property(readonly, nonatomic) id <SCBitmojiImageFetcher> bitmojiImageFetcher; // @synthesize bitmojiImageFetcher=_bitmojiImageFetcher;
- (void).cxx_destruct;
- (long long)_determineAttributionFromContext:(id)arg1;
- (id)_buildContexts:(id)arg1 withSticker:(id)arg2;
- (id)loadStickerThumbnailImageForSticker:(id)arg1 size:(struct CGSize)arg2 contexts:(id)arg3 completionQueue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)loadStickerImageForSticker:(id)arg1 contexts:(id)arg2 willAcceptLowRes:(_Bool)arg3 isDecoded:(_Bool)arg4 completionQueue:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (id)_issueStickerFetchForSticker:(id)arg1 forThumbnail:(_Bool)arg2 contexts:(id)arg3 isDecoded:(_Bool)arg4 completionQueue:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (id)initWithBitmojiImageFetcher:(id)arg1 performer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

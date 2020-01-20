//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCNetworkImage, SCQueuePerformer, UIImage;

@interface SCUnifiedProfileSquadmojiNetworkImageFetcher : NSObject
{
    id <SCImageDownloading> _imageDownloader;
    id <SCImageDownloaderCancellable> _imageDownloaderCancellable;
    SCQueuePerformer *_imageFetchPerformer;
    _Bool _hasFinishedFetching;
    id <SCUnifiedProfileSquadmojiNetworkImageFetcherDelegate> _delegate;
    SCNetworkImage *_networkImage;
    UIImage *_loadingImage;
    UIImage *_loadedImage;
}

@property(readonly, nonatomic) UIImage *loadedImage; // @synthesize loadedImage=_loadedImage;
@property(readonly, nonatomic) UIImage *loadingImage; // @synthesize loadingImage=_loadingImage;
@property(readonly, nonatomic) SCNetworkImage *networkImage; // @synthesize networkImage=_networkImage;
@property(readonly, nonatomic) _Bool hasFinishedFetching; // @synthesize hasFinishedFetching=_hasFinishedFetching;
@property(nonatomic) __weak id <SCUnifiedProfileSquadmojiNetworkImageFetcherDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_didFinishFetchingNetworkImageWithLoadedImage:(id)arg1;
- (void)_loadNetworkImage:(id)arg1;
- (void)loadImage;
- (void)teardown;
- (id)initWithImageDownloader:(id)arg1 networkImage:(id)arg2 loadingImage:(id)arg3;

@end


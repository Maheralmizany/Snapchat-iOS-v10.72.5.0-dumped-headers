//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCChatSingleMediaThumbnailViewModel.h"

@class FLAnimatedImage, NSString, SCUserSession, UIImage;

@interface SCBaseMediaThumbnailViewModel : NSObject <SCChatSingleMediaThumbnailViewModel>
{
    _Bool _alphaSetForDisplay;
    _Bool _isFailed;
    _Bool _isSentByUser;
    _Bool _isSaved;
    _Bool _isCustomSticker;
    _Bool _isSnap3D;
    UIImage *_miniThumbnailImage;
    NSString *_messageId;
    NSString *_conversationId;
    NSString *_senderUsername;
    long long _bodyType;
    SCUserSession *_userSession;
    NSString *_attachedURL;
    UIImage *_image;
    UIImage *_customStickerImage;
    FLAnimatedImage *_gif;
    UIImage *_videoOverlayThumbnailImage;
    struct CGSize _thumbnailSize;
}

@property(retain) UIImage *videoOverlayThumbnailImage; // @synthesize videoOverlayThumbnailImage=_videoOverlayThumbnailImage;
@property(retain, nonatomic) FLAnimatedImage *gif; // @synthesize gif=_gif;
@property(retain, nonatomic) UIImage *customStickerImage; // @synthesize customStickerImage=_customStickerImage;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *attachedURL; // @synthesize attachedURL=_attachedURL;
@property(nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) _Bool isSnap3D; // @synthesize isSnap3D=_isSnap3D;
@property(nonatomic) _Bool isCustomSticker; // @synthesize isCustomSticker=_isCustomSticker;
@property(nonatomic) _Bool isSaved; // @synthesize isSaved=_isSaved;
@property(nonatomic) _Bool isSentByUser; // @synthesize isSentByUser=_isSentByUser;
@property(nonatomic) _Bool isFailed; // @synthesize isFailed=_isFailed;
@property(nonatomic) long long bodyType; // @synthesize bodyType=_bodyType;
@property(copy, nonatomic) NSString *senderUsername; // @synthesize senderUsername=_senderUsername;
@property(copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
@property(copy, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(copy, nonatomic) UIImage *miniThumbnailImage; // @synthesize miniThumbnailImage=_miniThumbnailImage;
@property(nonatomic) struct CGSize thumbnailSize; // @synthesize thumbnailSize=_thumbnailSize;
@property(nonatomic) _Bool alphaSetForDisplay; // @synthesize alphaSetForDisplay=_alphaSetForDisplay;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (id)audioStitch;
- (id)videoURL;
- (id)videoOverlayThumbnailImageToDisplay;
- (void)fetchVideoOverlayThumbnailWithSize:(struct CGSize)arg1 WithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)fetchVideoOverlayWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)containsVideo;
- (id)gifToDisplay;
- (_Bool)containsGif;
- (void)fetchGifToDisplayWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)imageToDisplay;
- (void)fetchCustomStickerImageToDisplayWithCompletionHandler:(CDUnknownBlockType)arg1 cellSize:(struct CGSize)arg2;
- (void)fetchOriginalImageToDisplayWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchImageToDisplayWithCompletionHandler:(CDUnknownBlockType)arg1 scaledToSize:(struct CGSize)arg2;
- (_Bool)shouldShowFullScreenView;
- (_Bool)shouldDisplayFailedToLoad;
- (_Bool)shouldDisplayTapToLoad;
- (_Bool)shouldDisplayFailedToSend;
- (_Bool)shouldDisplaySendingOverlay;
- (_Bool)shouldDisplayActivityIndicator;
- (_Bool)readyForDisplay;
- (_Bool)mediaLoaded;
- (_Bool)mediaSaved;
- (_Bool)shouldCropCircularMedia;
- (_Bool)isCircular;
- (double)width;
- (double)height;
- (void)loadMediaUserInitiated;
- (void)loadMedia;
- (void)mediaFailedToLoadFromCache;
- (long long)mediaType;
- (id)trackingId;
- (id)mediaIdentifier;
- (_Bool)representsMedia:(id)arg1;
- (id)displayedMedia;
- (_Bool)useDisplayedMediaDirectly;
- (void)clearOldData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


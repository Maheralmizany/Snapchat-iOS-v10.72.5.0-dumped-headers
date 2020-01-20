//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCBaseMediaThumbnailViewModel.h"

@class NSString, SCChatMediaContent, SCChatMediaContentMetadata;

@interface SCReplyMessageThumbnailViewModelV3 : SCBaseMediaThumbnailViewModel
{
    SCChatMediaContent *_replyMedia;
    NSString *_conversationId;
    NSString *_senderUsername;
    NSString *_messageId;
    SCChatMediaContentMetadata *_mediaMetadata;
}

@property(readonly, nonatomic) SCChatMediaContentMetadata *mediaMetadata; // @synthesize mediaMetadata=_mediaMetadata;
- (void)setMessageId:(id)arg1;
- (id)messageId;
- (void)setSenderUsername:(id)arg1;
- (id)senderUsername;
- (void)setConversationId:(id)arg1;
- (id)conversationId;
- (void).cxx_destruct;
- (id)videoURL;
- (void)fetchVideoOverlayThumbnailWithSize:(struct CGSize)arg1 WithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)fetchVideoOverlayWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_fetchOriginalImageToDisplayWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchImageToDisplayWithCompletionHandler:(CDUnknownBlockType)arg1 scaledToSize:(struct CGSize)arg2;
- (_Bool)shouldDisplayFailedToSend;
- (_Bool)shouldDisplaySendingOverlay;
- (_Bool)shouldDisplayActivityIndicator;
- (_Bool)readyForDisplay;
- (_Bool)mediaLoaded;
- (_Bool)shouldCropCircularMedia;
- (_Bool)isCircular;
- (double)width;
- (double)height;
- (long long)mediaType;
- (id)trackingId;
- (id)mediaIdentifier;
- (_Bool)representsMedia:(id)arg1;
- (id)displayedMedia;
- (_Bool)useDisplayedMediaDirectly;
- (_Bool)isEqual:(id)arg1;
- (_Bool)shouldDisplayTapToLoad;
- (_Bool)containsVideo;
- (id)initWithChatMediaContent:(id)arg1 mediaMetadata:(id)arg2 message:(id)arg3;

@end


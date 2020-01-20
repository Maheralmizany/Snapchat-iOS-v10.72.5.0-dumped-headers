//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCTextEntryStickerView.h"

@class NSString, SCFuture, SCPromise, UIImage;

@interface SCPrivateStoryInviteStickerView : SCTextEntryStickerView
{
    UIImage *_icon;
    SCPromise *_bitmojiImagePromise;
    SCFuture *_bitmojiImageFuture;
    NSString *_publicationId;
    NSString *_inviteId;
}

@property(retain, nonatomic) NSString *inviteId; // @synthesize inviteId=_inviteId;
@property(retain, nonatomic) NSString *publicationId; // @synthesize publicationId=_publicationId;
@property(readonly, nonatomic) SCFuture *bitmojiImageFuture; // @synthesize bitmojiImageFuture=_bitmojiImageFuture;
- (void).cxx_destruct;
- (void)_completePromiseForNoBitmojiAvatarImage:(id)arg1;
- (void)_updateIconWithBitmojiAvatarImage:(id)arg1 bitmojiImagePromise:(id)arg2;
- (id)_circleLayerWithFrame:(struct CGRect)arg1 backgroundColor:(id)arg2 borderColor:(id)arg3 borderWidth:(double)arg4;
- (id)_iconImageForBitmojiAvatarImage:(id)arg1;
- (_Bool)shouldReceiveTapsViaStickerContainer;
- (id)config;
- (id)shortLoggingName;
- (id)loggingParameters;
- (id)stickerId;
- (id)packId;
- (unsigned long long)type;
- (unsigned long long)infoType;
- (long long)textAutocapitalizationType;
- (long long)iconRenderingMode;
- (id)placeHolderText;
- (id)icon;
- (id)defaultText;
- (id)initWithFrame:(struct CGRect)arg1;

@end


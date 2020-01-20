//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCFeatureSnapReply.h"

@class SCQuickStickerImage, SCReplyParameters, UIImageView;

@interface SCFeatureSnapReplyImpl : SCFeature <SCFeatureSnapReply>
{
    SCReplyParameters *_replyParameters;
    UIImageView *_quickStickerView;
    SCQuickStickerImage *_quickStickerImage;
}

@property(readonly, copy, nonatomic) SCQuickStickerImage *quickStickerImage; // @synthesize quickStickerImage=_quickStickerImage;
- (void).cxx_destruct;
- (void)_sendScreenCaptureNotificationWithType:(long long)arg1;
- (void)removeScreenCaptureNotificationObserver;
- (void)_didScreenRecord;
- (void)_didScreenShot;
- (void)addScreenCaptureNotificationObserver;
- (void)setReplyParameters:(id)arg1;
@property(readonly, nonatomic) UIImageView *snapReplyStickerView;
- (void)configureWithView:(id)arg1;
- (id)initWithStickerImage:(id)arg1;

@end

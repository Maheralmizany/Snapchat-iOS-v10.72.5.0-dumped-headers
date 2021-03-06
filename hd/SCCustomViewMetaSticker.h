//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCMetaSticker.h"

#import "SCInfoStickerProtocol.h"

@class NSString, UIImage, UIView;

@interface SCCustomViewMetaSticker : SCMetaSticker <SCInfoStickerProtocol>
{
    UIView *_view;
    UIImage *_image;
}

@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (struct CGSize)intrinsicSize;
@property(readonly, nonatomic) unsigned long long infoType;
- (id)thumbnailImageWithUserSession:(id)arg1 contexts:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithType:(unsigned long long)arg1 stickerId:(id)arg2 packId:(id)arg3 view:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


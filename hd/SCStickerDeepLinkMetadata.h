//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCStickerState, UIImage;

@interface SCStickerDeepLinkMetadata : NSObject
{
    SCStickerState *_stickerState;
    UIImage *_image;
}

@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) SCStickerState *stickerState; // @synthesize stickerState=_stickerState;
- (void).cxx_destruct;
- (id)initWithStickerState:(id)arg1 image:(id)arg2;

@end


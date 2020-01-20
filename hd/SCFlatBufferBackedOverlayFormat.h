//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCOverlayFormat.h"

@class NSData;

@interface SCFlatBufferBackedOverlayFormat : SCOverlayFormat
{
    struct DetachedBuffer _overlayBuffer;
    NSData *_overlayData;
    const struct Overlay *_overlay;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_genericAssetDataOverlayForTag:(long long)arg1;
- (id)_imageForCanvasType:(int)arg1 tag:(long long)arg2;
- (id)blob;
- (id)genericAssetDataOverlayForTag:(long long)arg1;
- (id)screenOverlayImageForTag:(long long)arg1;
- (id)mediaOverlayImageForTag:(long long)arg1;
- (int)version;
- (id)initWithData:(id)arg1;
- (id)initWithOverlayFormat:(struct DetachedBuffer *)arg1;

@end

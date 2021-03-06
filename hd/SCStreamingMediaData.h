//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class AVAsset, UIImage;

@interface SCStreamingMediaData : NSObject <NSCopying>
{
    UIImage *_previewImage;
    UIImage *_overlayImage;
    AVAsset *_videoAsset;
}

@property(readonly, copy, nonatomic) AVAsset *videoAsset; // @synthesize videoAsset=_videoAsset;
@property(readonly, copy, nonatomic) UIImage *overlayImage; // @synthesize overlayImage=_overlayImage;
@property(readonly, copy, nonatomic) UIImage *previewImage; // @synthesize previewImage=_previewImage;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPreviewImage:(id)arg1 overlayImage:(id)arg2 videoAsset:(id)arg3;

@end


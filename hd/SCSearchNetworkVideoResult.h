//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class AVURLAsset, UIImage;

@interface SCSearchNetworkVideoResult : NSObject <NSCopying>
{
    AVURLAsset *_video;
    UIImage *_overlay;
}

@property(readonly, copy, nonatomic) UIImage *overlay; // @synthesize overlay=_overlay;
@property(readonly, copy, nonatomic) AVURLAsset *video; // @synthesize video=_video;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithVideo:(id)arg1 overlay:(id)arg2;

@end


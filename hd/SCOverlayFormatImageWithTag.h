//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class UIImage;

@interface SCOverlayFormatImageWithTag : NSObject <NSCopying>
{
    UIImage *_image;
    long long _tag;
}

@property(readonly, nonatomic) long long tag; // @synthesize tag=_tag;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (struct CGSize)scaledSize;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithImage:(id)arg1 tag:(long long)arg2;

@end


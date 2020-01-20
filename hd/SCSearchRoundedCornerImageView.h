//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCRoundedCornerContainerView.h"

@class SCShapeView, UIImage, UIImageView;

@interface SCSearchRoundedCornerImageView : SCRoundedCornerContainerView
{
    double _borderWidth;
    SCShapeView *_imageBorderShapeView;
    struct CGRect _lastLayoutBounds;
    UIImage *_image;
    UIImageView *_imageView;
}

@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)setBorderWidth:(double)arg1 borderColor:(id)arg2;
- (void)layoutSubviews;
- (id)initWithCornerRadius:(double)arg1 rectCorner:(unsigned long long)arg2 cornerColor:(id)arg3;

@end


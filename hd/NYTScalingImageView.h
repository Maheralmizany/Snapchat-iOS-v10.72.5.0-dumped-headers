//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

@class UIImageView;

@interface NYTScalingImageView : UIScrollView
{
    UIImageView *_imageView;
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)centerScrollViewContents;
- (void)updateZoomScale;
- (void)setupImageScrollView;
- (void)updateImage:(id)arg1 imageData:(id)arg2;
- (void)updateImageData:(id)arg1;
- (void)updateImage:(id)arg1;
- (void)setupInternalImageViewWithImage:(id)arg1 imageData:(id)arg2;
- (void)commonInitWithImage:(id)arg1 imageData:(id)arg2;
- (id)initWithImageData:(id)arg1 frame:(struct CGRect)arg2;
- (id)initWithImage:(id)arg1 frame:(struct CGRect)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)didAddSubview:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

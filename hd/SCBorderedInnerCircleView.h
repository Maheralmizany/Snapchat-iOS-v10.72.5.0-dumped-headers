//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SCLoadingIndicatorView, UIImageView;

@interface SCBorderedInnerCircleView : UIView
{
    UIImageView *_imageView;
    SCLoadingIndicatorView *_loadingSpinner;
    UIView *_borderView;
}

@property(retain, nonatomic) UIView *borderView; // @synthesize borderView=_borderView;
@property(retain, nonatomic) SCLoadingIndicatorView *loadingSpinner; // @synthesize loadingSpinner=_loadingSpinner;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)showSpinner;
- (void)hideSpinner;
- (void)layoutSubviews;
- (void)configureBorderedThumbnailWithAlpha:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SIGLoadingIndicatorView, UIImageView, UILabel, UITapGestureRecognizer;

@interface SCGalleryFeaturedStoryCellButton : UIView
{
    UIImageView *_iconView;
    UILabel *_label;
    SIGLoadingIndicatorView *_loadingIndicatorView;
    UITapGestureRecognizer *_tap;
}

- (void).cxx_destruct;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (void)setIcon:(id)arg1 title:(id)arg2;
- (void)stopLoading;
- (void)startLoading;
- (id)initWithFrame:(struct CGRect)arg1;

@end

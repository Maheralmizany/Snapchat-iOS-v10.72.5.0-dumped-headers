//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface SCOperaGestureToolTipView : UIView
{
    UILabel *_caption;
    UIImageView *_imageView;
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *caption; // @synthesize caption=_caption;
- (void).cxx_destruct;
- (void)resizeForContainerWidth:(double)arg1;
- (id)initWithImage:(id)arg1 caption:(id)arg2;

@end


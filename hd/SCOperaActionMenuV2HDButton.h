//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class UIImageView;

@interface SCOperaActionMenuV2HDButton : UIButton
{
    unsigned long long _state;
    UIImageView *_imageView;
}

- (void).cxx_destruct;
- (void)_updateButtonState;
- (void)setVisible:(_Bool)arg1 duration:(double)arg2 delay:(double)arg3;
- (void)setHDButtonState:(unsigned long long)arg1;
- (void)layoutSubviews;
- (unsigned long long)hdState;
- (id)initWithFrame:(struct CGRect)arg1;

@end


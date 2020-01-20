//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIViewPropertyAnimator;

@interface SCLSISoundBarView : UIView
{
    long long _barType;
    UIViewPropertyAnimator *_upscaleAnimator;
    UIViewPropertyAnimator *_downscaleAnimator;
}

@property(readonly, nonatomic) UIViewPropertyAnimator *downscaleAnimator; // @synthesize downscaleAnimator=_downscaleAnimator;
@property(readonly, nonatomic) UIViewPropertyAnimator *upscaleAnimator; // @synthesize upscaleAnimator=_upscaleAnimator;
- (void).cxx_destruct;
- (void)stopAllAnimations;
- (void)configureAnimators;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1 type:(long long)arg2;

@end


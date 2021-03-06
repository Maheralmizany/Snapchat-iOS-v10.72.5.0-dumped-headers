//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAShapeLayer, UIImageView;

@interface SCTypingBubbleView : UIView
{
    UIImageView *_imageView;
    CAShapeLayer *_leftDot;
    CAShapeLayer *_middleDot;
    CAShapeLayer *_rightDot;
    unsigned long long _typingAnimationState;
}

- (void).cxx_destruct;
- (_Bool)_shouldOptimizePulsingAnimation;
- (void)removeAllAnimationsAndHideView;
- (void)pausedPulsingAnimation;
- (void)typingPulsingAnimation;
- (void)cancelAnimationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)resumeAnimation;
- (void)pauseAnimation;
- (void)receiveAnimationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_animateTypingDots;
- (void)_startPulsingAnimation;
- (void)startAnimationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)animateWithTypingAnimationState:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end


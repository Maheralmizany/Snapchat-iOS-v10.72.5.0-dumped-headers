//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIViewPropertyAnimator;

@interface SIGTabBarAnimator : NSObject
{
    UIViewPropertyAnimator *_animator;
}

+ (id)animatorForTransitionToItem:(id)arg1 fromItem:(id)arg2;
- (void).cxx_destruct;
- (void)complete:(_Bool)arg1;
- (void)updateAnimationFractionComplete:(double)arg1;
- (void)dealloc;
- (id)initWithAnimator:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SIGScaleAnimationButton.h"

@class NSLayoutConstraint, SIGLabel;

@interface SIGActionButton : SIGScaleAnimationButton
{
    NSLayoutConstraint *_bottomAnchorConstraint;
    SIGLabel *_titleLabel;
}

+ (id)actionButtonWithTitle:(id)arg1;
- (void).cxx_destruct;
- (void)_updatePositionRelativeToKeyboardWithDuration:(double)arg1 curve:(long long)arg2;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (double)_bottomMargin;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)arg1;
- (void)didMoveToWindow;
- (struct CGSize)intrinsicContentSize;
- (void)setEnabled:(_Bool)arg1;
- (void)setTitle:(id)arg1;
- (id)init;

@end


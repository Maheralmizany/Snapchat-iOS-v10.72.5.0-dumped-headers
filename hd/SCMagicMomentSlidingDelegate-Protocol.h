//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView;

@protocol SCMagicMomentSlidingDelegate <NSObject>
- (void)magicMomentView:(UIView *)arg1 didEndSlidingWithLocationInView:(struct CGPoint)arg2;
- (void)magicMomentView:(UIView *)arg1 didSlideWithLocationInView:(struct CGPoint)arg2;
- (void)magicMomentView:(UIView *)arg1 didBeginSlidingWithLocationInView:(struct CGPoint)arg2;

@optional
- (void)magicMomentView:(UIView *)arg1 didSkipToLocationInView:(struct CGPoint)arg2;
@end


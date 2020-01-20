//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView, UIViewController;

@protocol SIGCardTransitionDelegate <NSObject>
- (void)cardTransitionWillBeginWithView:(UIView *)arg1;
- (UIViewController *)cardToExpandTransition;

@optional
- (void)cardTransitionEndedWithView:(UIView *)arg1 transitionType:(unsigned long long)arg2;
- (void)cardTransitionDidUpdateProgress:(double)arg1;
- (_Bool)cardTransitionShouldBeginWithView:(UIView *)arg1;
@end

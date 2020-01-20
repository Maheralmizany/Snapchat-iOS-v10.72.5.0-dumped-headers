//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCInteractiveSwipeTransitionController, UIGestureRecognizer, UIPanGestureRecognizer;

@protocol SCInteractiveSwipeTransitionControllerDelegate <NSObject>
- (_Bool)transitionController:(SCInteractiveSwipeTransitionController *)arg1 transitionType:(unsigned long long)arg2 shouldAllowGesture:(UIPanGestureRecognizer *)arg3 toRecognizeSimultaneouslyWith:(UIGestureRecognizer *)arg4;
- (void)swipeTransitionController:(SCInteractiveSwipeTransitionController *)arg1 willFailWithTransitionType:(unsigned long long)arg2;
- (void)swipeTransitionController:(SCInteractiveSwipeTransitionController *)arg1 didFinishWithTransitionType:(unsigned long long)arg2;
- (void)swipeTransitionController:(SCInteractiveSwipeTransitionController *)arg1 didBeginWithTransitionType:(unsigned long long)arg2;
- (void)swipeTransitionController:(SCInteractiveSwipeTransitionController *)arg1 willBeginWithTransitionType:(unsigned long long)arg2;
@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCContextV2SwipeUpGestureTracker, UIViewController, UIViewController<SCContextV2SwipeUpPresentable>;

@protocol SCContextV2SwipeUpGestureDelegate <NSObject>
- (void)swipeUpGestureDidDismiss:(SCContextV2SwipeUpGestureTracker *)arg1 triggerInfo:(id <SCContextActionTriggering>)arg2;
- (void)swipeUpGestureDidPresent:(SCContextV2SwipeUpGestureTracker *)arg1 triggerInfo:(id <SCContextActionTriggering>)arg2;
- (UIViewController *)baseViewControllerForSwipeUpPresentation:(SCContextV2SwipeUpGestureTracker *)arg1;
- (UIViewController<SCContextV2SwipeUpPresentable> *)viewControllerToPresentViaSwipeUpGesture:(SCContextV2SwipeUpGestureTracker *)arg1;
@end


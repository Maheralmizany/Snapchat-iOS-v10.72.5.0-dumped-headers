//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCCTXGroupInviteAction, SCContextV2SwipeUpViewController;

@protocol SCContextV2SwipeUpViewControllerDelegate <NSObject>
- (void)contextV2SwipeUpViewControllerDidAppear:(SCContextV2SwipeUpViewController *)arg1;
- (void)contextV2SwipeUpViewController:(SCContextV2SwipeUpViewController *)arg1 didLeaveAppSuccessfully:(_Bool)arg2;
- (void)contextV2SwipeUpViewControllerWillTryToLeaveApp:(SCContextV2SwipeUpViewController *)arg1;
- (void)contextV2SwipeUpViewController:(SCContextV2SwipeUpViewController *)arg1 wantsToOpenGroupInviteFor:(SCCTXGroupInviteAction *)arg2 triggerInfo:(id <SCContextActionTriggering>)arg3;
- (void)contextV2SwipeUpViewControllerDidFinishPresentingMedia:(SCContextV2SwipeUpViewController *)arg1;
- (void)contextV2SwipeUpViewControllerDidBeginPresentingMedia:(SCContextV2SwipeUpViewController *)arg1;
@end


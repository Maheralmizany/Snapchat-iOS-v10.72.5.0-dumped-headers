//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol SCMapTransitionAnimatorDelegate <NSObject>

@optional
- (void)transitionAnimatorDidComplete:(id <SCMapTransitionAnimator>)arg1;
- (void)transitionAnimatorDidCancel:(id <SCMapTransitionAnimator>)arg1;
- (void)transitionAnimatorDidBegin:(id <SCMapTransitionAnimator>)arg1;
- (_Bool)transitionAnimatorShouldShowTabView:(id <SCMapTransitionAnimator>)arg1;
- (_Bool)transitionAnimatorShouldBeInteractive:(id <SCMapTransitionAnimator>)arg1;
@end

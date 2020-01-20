//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIViewController;

@protocol SCFeatureSendToSwipeNavigationDelegate <NSObject>
- (void)showConfidentialFeatureConfirmationWithCompletion:(void (^)(_Bool))arg1;
- (_Bool)swipeNavigationFeatureShouldPresentViewController:(id <SCFeatureSendToSwipeNavigation>)arg1;
- (_Bool)swipeNavigationFeatureCurrentSnapContainsConfidentialFeature:(id <SCFeatureSendToSwipeNavigation>)arg1;
- (void)swipeNavigationFeature:(id <SCFeatureSendToSwipeNavigation>)arg1 didFinishWithTransitionType:(unsigned long long)arg2 success:(_Bool)arg3 isInteractive:(_Bool)arg4 viewController:(UIViewController *)arg5;
- (UIViewController *)viewControllerToPresentFromPresentingViewController:(UIViewController *)arg1;
@end

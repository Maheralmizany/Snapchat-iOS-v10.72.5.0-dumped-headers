//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "SCLensExplorerInteractiveTransitionCoordinator.h"

@class NSData, NSString, SCLens, SCLensChallengesSectionItem, SCLensExplorerLensItem, SCLensExplorerLensItemCreator, SCLensExplorerPresentationConfiguration, UIViewController;

@protocol SCLensExplorerRouting <NSObject, SCLensExplorerInteractiveTransitionCoordinator>
@property(readonly, nonatomic) _Bool isPresentingLensChallenges;
@property(readonly, nonatomic) _Bool isPresenting;
@property(nonatomic) __weak id <SCLensExplorerRouterDelegate> delegate;
- (void)presentLensChallengesDisclaimerAlert;
- (void)presentDebugViewControllerForStoryId:(NSString *)arg1 debugHtml:(NSString *)arg2 lastStreamToken:(NSData *)arg3;
- (void)updateLiveLensPreviewWithLens:(SCLens *)arg1;
- (void)presentLiveLensPreviewCameraWithLensItem:(SCLensExplorerLensItem *)arg1 lens:(SCLens *)arg2;
- (void)presentLensChallengeCameraWithLens:(SCLens *)arg1;
- (void)dismissMusicLensChallengesViewController;
- (void)presentMusicLensChallengesViewControllerWithItem:(SCLensChallengesSectionItem *)arg1;
- (void)refreshSubscriptionSection;
- (void)presentCreatorViewControllerWithCreator:(SCLensExplorerLensItemCreator *)arg1 sourcePageType:(long long)arg2;
- (void)handleApplicationDidEnterBackground;
- (void)removeViewController;
- (void)dismissIfNeededAnimated:(_Bool)arg1 completion:(void (^)(void))arg2;
- (void)presentChallengesViewControllerWithChallengeId:(NSString *)arg1 fromViewController:(UIViewController *)arg2 configuration:(SCLensExplorerPresentationConfiguration *)arg3;
- (void)presentLensExplorerViewControllerFromViewController:(UIViewController *)arg1 configuration:(SCLensExplorerPresentationConfiguration *)arg2;
@end

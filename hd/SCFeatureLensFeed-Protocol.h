//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCARBarCompatibleFeature.h"
#import "SCFeatureCameraBottomUIContender.h"

@class SCLensExplorerLensItemCreator, SCLensExplorerPresentationConfiguration, SCReplyParameters, UIViewController;

@protocol SCFeatureLensFeed <SCARBarCompatibleFeature, SCFeatureCameraBottomUIContender>
+ (id)new;
@property(readonly, nonatomic) _Bool isPresenting;
@property(nonatomic) long long cameraViewType;
@property(readonly, nonatomic) id <SCLensExplorerStudySettingsProviderProtocol> studySettingsProvider;
@property(readonly, nonatomic) __weak id <SCFeatureLensExplorerSwipeUpDelegate> lensExplorerSwipeUpDelegate;
@property(nonatomic) __weak id <SCFeatureLensFeedTooltipDelegate> tooltipDelegate;
@property(nonatomic) __weak id <SCFeatureLensFeedDelegate> delegate;
- (void)setReplyParameters:(SCReplyParameters *)arg1;
- (void)showCreatorPageForLensItemCreator:(SCLensExplorerLensItemCreator *)arg1 fromViewController:(UIViewController *)arg2 sourcePageType:(long long)arg3;
- (void)dismissIfNeeded;
- (void)presentLensFeedFromViewController:(UIViewController *)arg1 configuration:(SCLensExplorerPresentationConfiguration *)arg2;
- (void)presentLensFeedFromViewController:(UIViewController *)arg1;
- (id)init;
@end


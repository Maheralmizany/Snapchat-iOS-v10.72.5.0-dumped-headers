//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMPBusinessProfileAndUserData, NSDictionary, NSString, NSURL, SCAppNotification, SCCapturerToken, SCCommerceSession, SCDeepLinkURL, SCDeepLinkVCInfo, SCLazy, SCLensesUIControllerState, SCOnDemandGeofilterSession, SCStartChatIdentifier, SOJUUnlockablesOndemandLineItem, UIViewController;

@protocol SCActiveUserRouter <NSObject>
@property(nonatomic) __weak id <SCActiveUserRouterInteractionDelegate> interactionDelegate;
- (void)legacy_handleDeepLinkVCInfo:(SCDeepLinkVCInfo *)arg1;
- (_Bool)legacy_isTransitioning;
- (unsigned long long)legacy_visiblePageType;
- (UIViewController *)legacy_visibleViewController;
- (_Bool)legacy_isShowingConversation;
- (_Bool)legacy_canPerformNavigation;
- (void)dismissPresentedSubscreens;
- (void)showSerengetiWithURL:(NSURL *)arg1;
- (void)showOnDemandGeofilterPageForLineItem:(SOJUUnlockablesOndemandLineItem *)arg1 onDemandGeofilterSession:(SCOnDemandGeofilterSession *)arg2;
- (void)showCommerceDeepLinkURL:(SCDeepLinkURL *)arg1 additionalInfo:(NSDictionary *)arg2 commerceSession:(SCCommerceSession *)arg3;
- (void)dismissSearch;
- (void)showSearchWithDelegate:(id <SCSearchV2WorkflowDelegate>)arg1;
- (void)showAddFriendsWithPlacementType:(long long)arg1;
- (void)showQuickAdd;
- (void)showPublicProfileWithBusinessProfileId:(NSString *)arg1 profileType:(long long)arg2 sourcePageType:(long long)arg3;
- (void)showPublicProfileWithBusinessProfileAndUserData:(IMPBusinessProfileAndUserData *)arg1;
- (void)showMyProfileWithSnapchattersDataFetcher:(SCLazy *)arg1;
- (void)showSpectaclesInstantPairingCode;
- (void)showSpectaclesPairingSupportPage;
- (void)showSpectaclesPreviewForSnapId:(NSString *)arg1;
- (void)showSpectaclesSettings;
- (void)showSpectaclesManagement;
- (void)showMemoriesSpectaclesTab;
- (void)showMemoriesFeaturedTab;
- (void)showMemoriesSettings;
- (void)showMemories;
- (void)showConversationWithId:(SCStartChatIdentifier *)arg1 deepLinkURL:(SCDeepLinkURL *)arg2 isFromNotification:(_Bool)arg3 sourceType:(long long)arg4 entryEvent:(long long)arg5 subpageName:(NSString *)arg6;
- (void)showLocationSharingSettings;
- (void)showMapWithSelectedUserId:(NSString *)arg1;
- (void)showMapWithCoordinate:(struct CLLocationCoordinate2D)arg1 zoomLevel:(double)arg2 poiId:(NSString *)arg3;
- (void)showMapWithDefaultViewport;
- (void)showMap;
- (void)showDiscoverDeepLinkURL:(SCDeepLinkURL *)arg1 additionalInfo:(NSDictionary *)arg2;
- (void)showDiscoverFeed;
- (void)showFriendsFeed;
- (void)showCameraAfterUnlockWithLensState:(SCLensesUIControllerState *)arg1;
- (void)showCameraWithLensFromNotification:(SCAppNotification *)arg1;
- (void)showCamera;
- (void)prepareNavigationWithCapturerToken:(SCCapturerToken *)arg1 cameraViewControllerDelegate:(id <SCCameraViewControllerDelegate>)arg2 sendSnapDelegate:(id <SendSnapNavigationControllerDelegate>)arg3;
@end


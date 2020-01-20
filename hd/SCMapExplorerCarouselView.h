//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCTransparentParentView.h"

#import "SCMapCarouselViewDataSource.h"
#import "SCMapCarouselViewDelegate.h"
#import "SCMapExplorerVerticalScrollingViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSMutableDictionary, NSOrderedSet, NSString, SCContextV2Manager, SCExperimentManager, SCLazy, SCMapCarouselView, SCMapExploreItem, SCMapStatusStore, SCMapUserPreferences, UIPanGestureRecognizer, UIViewController<SCPageNameLogging>;

@interface SCMapExplorerCarouselView : SCTransparentParentView <SCMapCarouselViewDelegate, SCMapCarouselViewDataSource, SCMapExplorerVerticalScrollingViewDelegate, UIGestureRecognizerDelegate>
{
    UIViewController<SCPageNameLogging> *_baseViewController;
    id <SCContextV2DependencyProvider> _contextDependencyProvider;
    SCContextV2Manager *_contextV2Manager;
    NSString *_currentUserId;
    id <SCMapExplorerCarouselViewDelegate> _delegate;
    SCExperimentManager *_experimentManager;
    id <SCImageDownloading> _imageDownloader;
    id <SCMapPeopleFriendsProvider> _mapPeopleFriendsProvider;
    id <SCMapPeopleGroupsProvider> _mapPeopleGroupsProvider;
    id <SCMapPersonLocationsProviding> _mapPersonLocationsProvider;
    unsigned long long _mapSessionId;
    SCMapUserPreferences *_mapUserPreferences;
    SCLazy *_sharingPreferencesProvider;
    SCMapStatusStore *_statusStore;
    SCMapCarouselView *_carouselView;
    NSOrderedSet *_items;
    NSMutableDictionary *_indicesToViews;
    UIPanGestureRecognizer *_verticalGestureRecognizer;
    UIPanGestureRecognizer *_horizontalGestureRecognizer;
    SCMapExploreItem *_visibleItem;
}

@property(retain, nonatomic) SCMapExploreItem *visibleItem; // @synthesize visibleItem=_visibleItem;
- (void).cxx_destruct;
- (void)mapCarouselView:(id)arg1 didShowViewAtIndex:(long long)arg2 actionType:(unsigned long long)arg3;
- (void)mapCarouselView:(id)arg1 willShowViewAtIndex:(long long)arg2;
- (void)personCarouselRowDidFocus:(id)arg1;
- (void)personCarouselRowDidTapStory:(id)arg1 sourceView:(id)arg2;
- (void)personCarouselRowDidLongPressProfile:(id)arg1;
- (void)personCarouselRowWantsToOpenChat:(id)arg1;
- (void)explorerVerticalScrollingView:(id)arg1 wantsChatForPeople:(id)arg2;
- (void)explorerVerticalScrollingView:(id)arg1 wantsToNavigateToURL:(id)arg2;
- (void)explorerVerticalScrollingView:(id)arg1 wantsToShowMiniProfileForPerson:(id)arg2;
- (void)explorerVerticalScrollingView:(id)arg1 wantsToPresentStoriesForPerson:(id)arg2 fromSourceView:(id)arg3;
- (void)explorerVerticalScrollingView:(id)arg1 wantsToPresentStoryWithPoiId:(id)arg2 fromSourceView:(id)arg3;
- (void)explorerVerticalScrollingViewDidTapCard:(id)arg1;
- (id)mapCarouselView:(id)arg1 viewForIndex:(long long)arg2;
- (long long)numberOfViewsInMapCarouselView:(id)arg1;
- (void)setItems:(id)arg1;
- (void)_horizontallySpringToHidden:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_verticallySpringToHidden:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)animateOutWithCompletion:(CDUnknownBlockType)arg1;
- (void)animateInWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_handleHorizontalPanGesture:(id)arg1;
- (void)_handleVerticalPanGesture:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 baseViewController:(id)arg2 contextDependencyProvider:(id)arg3 contextV2Manager:(id)arg4 currentUserId:(id)arg5 delegate:(id)arg6 experimentManager:(id)arg7 imageDownloader:(id)arg8 mapPeopleFriendsProvider:(id)arg9 mapPeopleGroupsProvider:(id)arg10 mapPersonLocationsProvider:(id)arg11 mapSessionId:(unsigned long long)arg12 mapUserPreferences:(id)arg13 sharingPreferencesProvider:(id)arg14 statusStore:(id)arg15;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


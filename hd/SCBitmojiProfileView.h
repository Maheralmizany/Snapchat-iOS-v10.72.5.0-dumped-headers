//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCScalingButton.h"

#import "SCDataCoordinatorListener.h"
#import "SCProfileHeaderAvatarViewDelegate.h"
#import "SCStoriesModelUpdateListener.h"
#import "SCTraceEnabled.h"

@class NSString, SCBitmojiAvatarViewModel, SCCircularBadgeView, SCDisposableObserverLifecycle, SCProfileHeaderAvatarView, SCProfileHeaderStoryViewModel, SCScopedAccess, SCShapeView, SCUserSession, UIView;

@interface SCBitmojiProfileView : SCScalingButton <SCTraceEnabled, SCDataCoordinatorListener, SCStoriesModelUpdateListener, SCProfileHeaderAvatarViewDelegate>
{
    SCDisposableObserverLifecycle *_observerLifecycle;
    SCBitmojiAvatarViewModel *_bitmojiAvatarViewModel;
    SCProfileHeaderStoryViewModel *_storyViewModel;
    SCScopedAccess *_scopedStories;
    SCScopedAccess *_scopedLazyMyStoriesDataCoordinator;
    SCScopedAccess *_scopedLazyStoriesDeleteCoordinator;
    SCScopedAccess *_scopedLazyStoriesPostingCoordinator;
    _Bool _badged;
    _Bool _showingBitmoji;
    _Bool _shouldRedisplayBadgeCount;
    _Bool _didRedisplayBadgeCount;
    SCProfileHeaderAvatarView *_profileHeaderAvatarView;
    long long _badgeStyle;
    UIView *_profileContentView;
    SCShapeView *_badgeView;
    SCCircularBadgeView *_circleBadgeIconView;
    CDUnknownBlockType _badgeFlipHandler;
    long long _currentBadgeCount;
    SCUserSession *_userSession;
    NSString *_bitmojiSelfieId;
    NSString *_bitmojiAvatarId;
}

@property(retain, nonatomic) NSString *bitmojiAvatarId; // @synthesize bitmojiAvatarId=_bitmojiAvatarId;
@property(retain, nonatomic) NSString *bitmojiSelfieId; // @synthesize bitmojiSelfieId=_bitmojiSelfieId;
@property(retain, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) _Bool didRedisplayBadgeCount; // @synthesize didRedisplayBadgeCount=_didRedisplayBadgeCount;
@property(nonatomic) _Bool shouldRedisplayBadgeCount; // @synthesize shouldRedisplayBadgeCount=_shouldRedisplayBadgeCount;
@property(nonatomic) long long currentBadgeCount; // @synthesize currentBadgeCount=_currentBadgeCount;
@property(copy, nonatomic) CDUnknownBlockType badgeFlipHandler; // @synthesize badgeFlipHandler=_badgeFlipHandler;
@property(nonatomic, getter=isShowingBitmoji) _Bool showingBitmoji; // @synthesize showingBitmoji=_showingBitmoji;
@property(retain, nonatomic) SCCircularBadgeView *circleBadgeIconView; // @synthesize circleBadgeIconView=_circleBadgeIconView;
@property(retain, nonatomic) SCShapeView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) UIView *profileContentView; // @synthesize profileContentView=_profileContentView;
@property(readonly, nonatomic) long long badgeStyle; // @synthesize badgeStyle=_badgeStyle;
@property(readonly, nonatomic) SCProfileHeaderAvatarView *profileHeaderAvatarView; // @synthesize profileHeaderAvatarView=_profileHeaderAvatarView;
@property(readonly, nonatomic, getter=isBadged) _Bool badged; // @synthesize badged=_badged;
- (void).cxx_destruct;
- (void)_handleStoryOnMainThread:(id)arg1;
- (void)_refreshAvatarViewForStoryUpdatesWithLogIdentifier:(id)arg1;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (void)storiesModelDidUpdateWithParams:(id)arg1;
- (_Bool)willHandleDisplayedStoryUploadSuccess:(id)arg1;
- (_Bool)isAccessibilityElement;
- (void)_animateBadgeOut:(CDUnknownBlockType)arg1;
- (void)_animateBadgeIn;
- (void)removeInFlightAnimation;
- (void)_updateCircleBadgeIconWithCount:(unsigned long long)arg1;
- (id)_badgeColor;
- (id)_badgePathForStyle:(long long)arg1;
- (id)newBadgeView;
- (void)setBadged:(_Bool)arg1 badgeCount:(long long)arg2 animated:(_Bool)arg3;
- (void)applicationWillEnterForeground:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateVisibleBadgeWithCount:(long long)arg1 animated:(_Bool)arg2;
- (void)_updateProfileHeaderView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


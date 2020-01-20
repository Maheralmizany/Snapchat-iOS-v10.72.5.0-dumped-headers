//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCAvatarViewDelegate.h"
#import "SCMapCarouselFocusableRow.h"
#import "SCMapCarouselPoiPlayer.h"
#import "SCMapCarouselRow.h"
#import "SCMapPeopleFriendsListener.h"
#import "SCMapStatusViewedStateListener.h"

@class NSString, SCMapCarouselItemCell, SCMapExploreStatusCarouselItemViewModel, SCMapUserPreferences;

@interface SCMapExploreStatusRow : NSObject <SCMapPeopleFriendsListener, SCAvatarViewDelegate, SCMapCarouselPoiPlayer, SCMapStatusViewedStateListener, SCMapCarouselRow, SCMapCarouselFocusableRow>
{
    id <SCImageDownloading> _imageDownloader;
    id <SCMapPeopleFriendsProvider> _peopleProvider;
    id <SCMapStatusViewedStateProvider> _viewedStateProvider;
    SCMapUserPreferences *_userPreferences;
    unsigned long long _mapSessionId;
    SCMapCarouselItemCell *_cell;
    _Bool _willBeFocused;
    _Bool _isInFocusMode;
    id <SCMapCarouselFocusDelegate> _focusDelegate;
    id <SCMapCarouselRowHeightUpdatesObserver> _heightUpdatesObserver;
    id <SCMapExploreStatusRowDelegate> _delegate;
    SCMapExploreStatusCarouselItemViewModel *_viewModel;
}

+ (Class)cellClass;
@property(retain, nonatomic) SCMapExploreStatusCarouselItemViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <SCMapExploreStatusRowDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SCMapCarouselRowHeightUpdatesObserver> heightUpdatesObserver; // @synthesize heightUpdatesObserver=_heightUpdatesObserver;
@property(nonatomic) __weak id <SCMapCarouselFocusDelegate> focusDelegate; // @synthesize focusDelegate=_focusDelegate;
- (void).cxx_destruct;
- (void)mapStoryIconView:(id)arg1 didAskToPlayMapStorywithPoiId:(id)arg2;
- (void)handleLongPressOnStoryIconFromAvatarView:(id)arg1;
- (void)handleTapOnStoryIconFromAvatarView:(id)arg1;
- (void)handleTapOnBitmojiFromAvatarView:(id)arg1;
- (void)mapStatusViewedStateProvider:(id)arg1 didUpdateStatusIds:(id)arg2;
- (void)peopleFriendsProviderDidUpdateFeedItems:(id)arg1;
- (void)peopleFriendsProvider:(id)arg1 didUpdateStoryForUserIds:(id)arg2;
- (void)peopleFriendsProviderDidUpdate:(id)arg1;
- (void)_getCounterpartRowControllerAfterExitingFocusModeIfNecessary:(CDUnknownBlockType)arg1;
- (void)_didTapRightButton:(id)arg1;
- (void)_updateCell:(id)arg1;
- (void)prepareToLeaveFocusModeState;
- (void)prepareToEnterFocusModeState;
- (id)createCopyForFocusMode;
- (void)setContentHidden:(_Bool)arg1;
- (void)setFocusModeState:(_Bool)arg1;
- (id)uniqueRowIdentifier;
- (double)heightForFocusModeWithMaximumHeight:(double)arg1 width:(double)arg2;
- (double)heightForWidth:(double)arg1;
- (void)didEndDisplayingCell:(id)arg1;
- (void)updateCell:(id)arg1;
- (Class)cellClass;
- (id)reuseIdentifier;
- (id)initWithImageDownloader:(id)arg1 peopleProvider:(id)arg2 viewedStateProvider:(id)arg3 userPreferences:(id)arg4 mapSessionId:(unsigned long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCSearchCollectionViewCell.h"

#import "SCActionable.h"
#import "SCDiscoverFeedCollectionViewCellAnimating.h"
#import "SCDiscoverFeedStoryTileWithCoverImageConfigurable.h"
#import "SCDiscoverFeedTileOperaBaseViewProviding.h"
#import "SCDiscoverFeedWhiteSpaceTileGestureHandling.h"
#import "SCEventAnnouncing.h"
#import "SCEventListener.h"
#import "SCViewModelConfigurable.h"
#import "SCViewportConfigurable.h"
#import "UIGestureRecognizerDelegate.h"

@class NSString, SCDiscoverFeedCollectionViewCellTapHandler, SCDiscoverFeedWhiteSpaceHeadlineView, SCDiscoverFeedWhiteSpaceProfileRowView, SCDiscoverFeedWhiteSpacePublisherThumbnailView, SCEventListenerAnnouncer, SCLazy, UIView;

@interface SCDiscoverFeedWhiteSpacePromotedStoryCell : SCSearchCollectionViewCell <UIGestureRecognizerDelegate, SCEventAnnouncing, SCEventListener, SCViewModelConfigurable, SCActionable, SCViewportConfigurable, SCDiscoverFeedStoryTileWithCoverImageConfigurable, SCDiscoverFeedCollectionViewCellAnimating, SCDiscoverFeedTileOperaBaseViewProviding, SCDiscoverFeedWhiteSpaceTileGestureHandling>
{
    UIView *_thumbnailAndHeadlineViewContainer;
    UIView *_thumbnailRoundedCornerContainer;
    SCDiscoverFeedWhiteSpacePublisherThumbnailView *_publisherThumbnailView;
    SCDiscoverFeedWhiteSpaceHeadlineView *_headlineView;
    SCDiscoverFeedWhiteSpaceProfileRowView *_profileRowView;
    SCLazy *_postViewLayerViewLazy;
    SCLazy *_subscriptionIconViewLazy;
    SCLazy *_debugViewLazy;
    SCDiscoverFeedCollectionViewCellTapHandler *_thumbnailAndHeadlineTapHandler;
    SCDiscoverFeedCollectionViewCellTapHandler *_profileRowViewTapHandler;
    SCEventListenerAnnouncer *_eventAnnouncer;
    id <SCActionHandling> _actionHandler;
    id _viewModel;
    id <SCImageDownloading> _imageDownloader;
    id <SCDiscoverFeedWhiteSpaceGestureCoordinating> _gestureCoordinator;
    struct CGRect _viewportFrame;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
+ (id)announcerIdentifier;
@property(retain, nonatomic) id <SCDiscoverFeedWhiteSpaceGestureCoordinating> gestureCoordinator; // @synthesize gestureCoordinator=_gestureCoordinator;
@property(retain, nonatomic) id <SCImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(nonatomic) struct CGRect viewportFrame; // @synthesize viewportFrame=_viewportFrame;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (void).cxx_destruct;
- (void)_handleDebugGesture:(id)arg1;
- (void)_viewModelDidUpdate;
- (id)operaBaseView;
- (id)viewToAnimateOnTap:(id)arg1;
- (_Bool)shouldShowBackgroundView;
- (void)layoutSubviews;
- (id)storyCoverImage;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)viewportDidUpdateViewportFrame:(struct CGRect)arg1 dragging:(_Bool)arg2 decelerating:(_Bool)arg3;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


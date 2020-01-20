//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCStackedCollectionViewCell.h"

@class SCBaseMediaThumbnailViewModel, SCUserSession, UIView<SCChatSingleMediaThumbnailView>;

@interface SCStackedChatMediaCollectionViewCell : SCStackedCollectionViewCell
{
    UIView<SCChatSingleMediaThumbnailView> *_mediaThumbnailView;
    SCUserSession *_userSession;
    SCBaseMediaThumbnailViewModel *_viewModel;
}

- (void).cxx_destruct;
- (id)mediaThumbnailView;
- (void)setViewModel:(id)arg1 userSession:(id)arg2 parentVC:(id)arg3;
- (void)stopAnimation;
- (void)startAnimation;
- (void)_initMediaViewWithParentVC:(id)arg1;
- (void)_initLagunaViewWithParentVC:(id)arg1;

@end

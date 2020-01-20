//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

#import "SCActionable.h"
#import "SCViewModelConfigurable.h"

@class NSString, SCLazy, SCSearchActionButton;

@interface SCDiscoverFeedSectionHeaderView : UICollectionReusableView <SCViewModelConfigurable, SCActionable>
{
    SCSearchActionButton *_primaryActionButton;
    SCLazy *_secondaryActionButtonLazy;
    SCLazy *_debugButtonLazy;
    SCLazy *_swipeTeachingView;
    id _viewModel;
    id <SCActionHandling> _actionHandler;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)_didTapPrimaryActionButton:(id)arg1;
- (void)_didTapSecondaryActionButton:(id)arg1;
- (void)_didTapDebugButton:(id)arg1;
- (id)_newSwipeTeachingView;
- (id)_newSecondaryActionButton;
- (id)_newDebugButton;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


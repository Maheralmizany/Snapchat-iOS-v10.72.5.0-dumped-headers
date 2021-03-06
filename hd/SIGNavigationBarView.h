//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SIGFooterItemView.h"
#import "SIGNavigationBarButtonDelegate.h"

@class NSArray, NSLayoutConstraint, NSString, UIImageView;

@interface SIGNavigationBarView : UIView <SIGNavigationBarButtonDelegate, SIGFooterItemView>
{
    UIView *_contentView;
    NSArray *_buttons;
    NSArray *_transitionConstraints;
    NSLayoutConstraint *_containerTopAnchorConstraints;
    UIImageView *_caretView;
}

- (void).cxx_destruct;
- (void)performInternalTransitionAnimations:(id)arg1 presentationContext:(id)arg2;
- (void)endInternalTransition:(id)arg1;
- (void)beginInternalTransition:(id)arg1;
- (void)performAnimations:(_Bool)arg1;
- (void)endTransition:(id)arg1 transitionIn:(_Bool)arg2 complete:(_Bool)arg3 context:(id)arg4;
- (void)beginTransition:(id)arg1 transitionIn:(_Bool)arg2;
- (void)SIGNavigationBarButtonDidBecomeSelected:(id)arg1 viaUserInteraction:(_Bool)arg2;
- (void)_updateCaretViewSelectedStateToButton:(id)arg1;
- (void)_updateButtonSelectStateForItem:(id)arg1;
- (void)_setButtonItems:(id)arg1;
- (void)_setupSubviewsAutolayout;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (id)initWithItems:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


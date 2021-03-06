//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SIGPanTransitionCoordinatedView.h"

@class NSLayoutConstraint, NSString;

@interface SCSwipeViewContainerView : UIView <SIGPanTransitionCoordinatedView>
{
    UIView *_clippedCornersContainer;
    NSLayoutConstraint *_leftCornerClippingConstraint;
    NSLayoutConstraint *_rightCornerClippingConstraint;
    NSLayoutConstraint *_topCornerClippingConstraint;
    NSLayoutConstraint *_bottomCornerClippingConstraint;
    UIView *_containedView;
}

@property(retain, nonatomic) UIView *containedView; // @synthesize containedView=_containedView;
- (void).cxx_destruct;
- (void)panTransitionCoordinatedViewWillBeCoveredWithInsets:(struct UIEdgeInsets)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


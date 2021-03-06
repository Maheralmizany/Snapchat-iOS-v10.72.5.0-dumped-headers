//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, SIGPullToRefreshGhostView, UIImageView;

@interface SIGPullToRefreshView : UIView
{
    SIGPullToRefreshGhostView *_ghost;
    UIImageView *_hands;
    NSArray *_normalGhostConstraints;
    NSArray *_flyingGhostConstraints;
    double _lastHeight;
    id <SIGPullToRefreshViewDelegate> _delegate;
    double _height;
}

@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) __weak id <SIGPullToRefreshViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)userDidRelease;
- (void)_resetSmiling;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;

@end


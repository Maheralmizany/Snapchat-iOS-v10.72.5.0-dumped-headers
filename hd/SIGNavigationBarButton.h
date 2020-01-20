//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class SIGLabel, SIGNavigationBarButtonItem, SIGTargetActionDispatcher, UIImageView, UIView;

@interface SIGNavigationBarButton : UIControl
{
    SIGTargetActionDispatcher *_userPressActionDispatcher;
    SIGLabel *_titleLabel;
    UIImageView *_buttonImage;
    UIView *_badgeView;
    SIGNavigationBarButtonItem *_item;
    id <SIGNavigationBarButtonDelegate> _delegate;
}

+ (id)navigationBarButtonWithItem:(id)arg1;
@property(nonatomic) __weak id <SIGNavigationBarButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) SIGNavigationBarButtonItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)_setupBadgeViewIfNeeded;
- (void)_didPressButton;
- (struct CGSize)intrinsicContentSize;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setSelected:(_Bool)arg1;
- (void)dealloc;
- (id)initWithItem:(id)arg1;

@end


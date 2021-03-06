//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface SCOperaToggleView : UIView
{
    _Bool _visible;
    UIView *_contentView;
}

@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
- (void).cxx_destruct;
- (void)setVisible:(_Bool)arg1 animationDuration:(double)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateVisibilityWithProperties:(id)arg1 isVisibleKey:(id)arg2 animationDurationKey:(id)arg3;

@end


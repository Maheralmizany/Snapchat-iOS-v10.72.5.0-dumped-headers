//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, SCShapeView;

@interface SCPreviewToolbarTooltipView : UIView
{
    SCShapeView *_shapeView;
    _Bool _visible;
    _Bool _isNewAnimatedTooltip;
    NSString *_title;
    long long _displayCount;
}

@property(nonatomic) _Bool isNewAnimatedTooltip; // @synthesize isNewAnimatedTooltip=_isNewAnimatedTooltip;
@property(readonly, nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic) long long displayCount; // @synthesize displayCount=_displayCount;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)dismiss:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stopTooltipAnimation;
- (id)presentAnimatedStickerTooltipForItem:(id)arg1;
- (id)presentAnimatedCaptionTooltipForItem:(id)arg1;
- (id)presentAnimatedLensTooltipForItem:(id)arg1;
- (id)presentAnimatedDrawTooltipForItem:(id)arg1;
- (void)presentFromToolbarButtonItem:(id)arg1 inView:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


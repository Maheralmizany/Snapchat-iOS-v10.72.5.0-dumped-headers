//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView;

@interface SCCameraTimerCollapsedView : UIView
{
    _Bool _overDarkContent;
    long long _cameraIconArrowDirection;
    double _percentVisible;
    UIImageView *_shadowView;
    UIView *_borderView;
    UIImageView *_cameraIconMaskView;
    long long _collapseStyle;
    struct CGSize _previousBoundsSize;
}

@property(nonatomic) long long collapseStyle; // @synthesize collapseStyle=_collapseStyle;
@property(nonatomic) struct CGSize previousBoundsSize; // @synthesize previousBoundsSize=_previousBoundsSize;
@property(retain, nonatomic) UIImageView *cameraIconMaskView; // @synthesize cameraIconMaskView=_cameraIconMaskView;
@property(retain, nonatomic) UIView *borderView; // @synthesize borderView=_borderView;
@property(retain, nonatomic) UIImageView *shadowView; // @synthesize shadowView=_shadowView;
@property(nonatomic, getter=isOverDarkContent) _Bool overDarkContent; // @synthesize overDarkContent=_overDarkContent;
@property(nonatomic) double percentVisible; // @synthesize percentVisible=_percentVisible;
@property(nonatomic) long long cameraIconArrowDirection; // @synthesize cameraIconArrowDirection=_cameraIconArrowDirection;
- (void).cxx_destruct;
- (double)_collapsedBorderWidth;
- (double)_borderDiameter;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SCOperaLayerView.h"
#import "UIGestureRecognizerDelegate.h"

@class NSString;

@interface SCContextOperaLayerView : UIView <UIGestureRecognizerDelegate, SCOperaLayerView>
{
    UIView *_customCTAView;
    double _keyboardHeight;
    double _ctaViewOpacity;
}

+ (id)layerViewWithFrame:(struct CGRect)arg1;
@property(nonatomic) double ctaViewOpacity; // @synthesize ctaViewOpacity=_ctaViewOpacity;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (double)_ctaViewFinalOpacity;
- (void)_keyboardFrameWillChange:(id)arg1;
- (double)_distanceFromBottomOfScreen;
- (double)_ctaOffsetFromBottom;
- (void)layoutSubviews;
- (void)setupCustomCTAView:(id)arg1;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


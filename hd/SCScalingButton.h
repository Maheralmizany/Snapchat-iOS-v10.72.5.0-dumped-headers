//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, UIImage, UIImageView, UILongPressGestureRecognizer;

@interface SCScalingButton : UIView <UIGestureRecognizerDelegate>
{
    _Bool _recognizesGesturesSimultaneously;
    _Bool _useConstraintsForImage;
    _Bool _onlyScaleImage;
    _Bool _pressed;
    _Bool _enabled;
    UIImage *_image;
    UIImageView *_imageView;
    double _pressDownScale;
    double _pressDownAdditionalScale;
    double _pressUpScale;
    long long _imageViewContentMode;
    UIView *_extraAnimationView;
    NSString *_imageName;
    SEL _action;
    UILongPressGestureRecognizer *_longPressGesture;
    id _target;
    struct CGSize _imageInset;
    struct UIEdgeInsets _touchTargetInsets;
}

@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGesture; // @synthesize longPressGesture=_longPressGesture;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) struct UIEdgeInsets touchTargetInsets; // @synthesize touchTargetInsets=_touchTargetInsets;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) UIView *extraAnimationView; // @synthesize extraAnimationView=_extraAnimationView;
@property(nonatomic, getter=isPressed) _Bool pressed; // @synthesize pressed=_pressed;
@property(nonatomic) _Bool onlyScaleImage; // @synthesize onlyScaleImage=_onlyScaleImage;
@property(nonatomic) long long imageViewContentMode; // @synthesize imageViewContentMode=_imageViewContentMode;
@property(nonatomic) _Bool useConstraintsForImage; // @synthesize useConstraintsForImage=_useConstraintsForImage;
@property(nonatomic) _Bool recognizesGesturesSimultaneously; // @synthesize recognizesGesturesSimultaneously=_recognizesGesturesSimultaneously;
@property(nonatomic) double pressUpScale; // @synthesize pressUpScale=_pressUpScale;
@property(nonatomic) double pressDownAdditionalScale; // @synthesize pressDownAdditionalScale=_pressDownAdditionalScale;
@property(nonatomic) double pressDownScale; // @synthesize pressDownScale=_pressDownScale;
@property(nonatomic) struct CGSize imageInset; // @synthesize imageInset=_imageInset;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)isAccessibilityElement;
- (void)interruptGestures;
- (void)cancelExistingTransformAnimationsIfNeeded;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (void)animate;
- (void)_pressUpAnimate;
- (void)_pressDownAnimate;
- (void)animateButtonSizeScale:(double)arg1 alpha:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)press:(id)arg1;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


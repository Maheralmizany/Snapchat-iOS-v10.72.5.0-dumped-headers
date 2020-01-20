//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAShapeLayer, NSValue, UIBezierPath, UIColor;

@interface SPFaceMaskView : UIView
{
    _Bool _overlayHidden;
    _Bool _faceFound;
    NSValue *_faceBoundingRect;
    double _faceRectWidthPercent;
    double _faceRectHeightToWidthAspect;
    UIColor *_faceFoundMaskColor;
    UIColor *_faceNotFoundMaskColor;
    CAShapeLayer *_maskLayer;
    CAShapeLayer *_ovalShapeLayer;
    UIView *_overlayView;
    UIBezierPath *_facePath;
    struct CGPoint _maskCenter;
}

@property(retain, nonatomic) UIBezierPath *facePath; // @synthesize facePath=_facePath;
@property(nonatomic) __weak UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(nonatomic) __weak CAShapeLayer *ovalShapeLayer; // @synthesize ovalShapeLayer=_ovalShapeLayer;
@property(nonatomic) __weak CAShapeLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(nonatomic) _Bool faceFound; // @synthesize faceFound=_faceFound;
@property(retain, nonatomic) UIColor *faceNotFoundMaskColor; // @synthesize faceNotFoundMaskColor=_faceNotFoundMaskColor;
@property(retain, nonatomic) UIColor *faceFoundMaskColor; // @synthesize faceFoundMaskColor=_faceFoundMaskColor;
@property(nonatomic) _Bool overlayHidden; // @synthesize overlayHidden=_overlayHidden;
@property(nonatomic) double faceRectHeightToWidthAspect; // @synthesize faceRectHeightToWidthAspect=_faceRectHeightToWidthAspect;
@property(nonatomic) double faceRectWidthPercent; // @synthesize faceRectWidthPercent=_faceRectWidthPercent;
@property(nonatomic) struct CGPoint maskCenter; // @synthesize maskCenter=_maskCenter;
@property(retain, nonatomic) NSValue *faceBoundingRect; // @synthesize faceBoundingRect=_faceBoundingRect;
- (void).cxx_destruct;
- (id)_getLineDashPatternWithPath:(id)arg1;
- (void)updateOvalShapeLayer;
- (void)updateUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


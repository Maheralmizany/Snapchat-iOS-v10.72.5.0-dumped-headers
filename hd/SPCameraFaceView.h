//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AIFKVOUIView.h"

@class SPCameraFaceViewModel, SPFaceMaskView, UIColor;

@interface SPCameraFaceView : AIFKVOUIView
{
    _Bool _overlayHidden;
    double _faceRectWidthPercent;
    double _faceRectHeightToWidthAspect;
    UIColor *_faceFoundMaskColor;
    UIColor *_faceNotFoundMaskColor;
    SPCameraFaceViewModel *_viewModel;
    SPFaceMaskView *_faceMaskView;
    struct CGPoint _maskCenter;
}

@property(retain, nonatomic) SPFaceMaskView *faceMaskView; // @synthesize faceMaskView=_faceMaskView;
@property(retain, nonatomic) SPCameraFaceViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIColor *faceNotFoundMaskColor; // @synthesize faceNotFoundMaskColor=_faceNotFoundMaskColor;
@property(retain, nonatomic) UIColor *faceFoundMaskColor; // @synthesize faceFoundMaskColor=_faceFoundMaskColor;
@property(nonatomic) _Bool overlayHidden; // @synthesize overlayHidden=_overlayHidden;
@property(nonatomic) double faceRectHeightToWidthAspect; // @synthesize faceRectHeightToWidthAspect=_faceRectHeightToWidthAspect;
@property(nonatomic) double faceRectWidthPercent; // @synthesize faceRectWidthPercent=_faceRectWidthPercent;
@property(nonatomic) struct CGPoint maskCenter; // @synthesize maskCenter=_maskCenter;
- (void).cxx_destruct;
- (void)updateUI;
@property(readonly, nonatomic) struct CGRect faceBoundingRect;
- (id)initWithFrame:(struct CGRect)arg1;

@end


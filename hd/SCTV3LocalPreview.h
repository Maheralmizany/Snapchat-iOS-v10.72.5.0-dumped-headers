//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SCLoadingIndicatorView, SCTLabelOverlayView;

@interface SCTV3LocalPreview : UIView
{
    id <SCTCameraServices> _cameraServices;
    SCLoadingIndicatorView *_loadingIndicator;
    UIView *_cameraPreview;
    _Bool _cameraPreviewRequested;
    SCTLabelOverlayView *_mutedOverlayView;
    _Bool _muted;
    _Bool _mutedLabelSuppressed;
    _Bool _active;
}

@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(nonatomic, getter=isMutedLabelSuppressed) _Bool mutedLabelSuppressed; // @synthesize mutedLabelSuppressed=_mutedLabelSuppressed;
@property(nonatomic, getter=isMuted) _Bool muted; // @synthesize muted=_muted;
- (void).cxx_destruct;
- (void)_updateMutedLabelVisiblity;
- (void)_relinquishCamera;
- (void)_attachCameraPreview:(id)arg1;
- (void)_stopCameraPreview;
- (void)_startCameraPreview;
- (void)_startOrStopCameraPreviewIfNeeded;
- (void)_addLoadingSpinner;
- (void)layoutSubviews;
- (void)dealloc;
- (void)removeFromSuperview;
- (void)didMoveToSuperview;
- (id)initWithCameraServices:(id)arg1;

@end

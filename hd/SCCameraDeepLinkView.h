//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCTransparentParentView.h"

@class SCCameraDeepLinkMetadata, SCCameraDeepLinkStickerPreviewView, SCCameraToolBarView, SCCreativeKitOnboardingTooltip;

@interface SCCameraDeepLinkView : SCTransparentParentView
{
    id <SCUserTooltipProviding> _userTooltipProvider;
    unsigned long long _tooltipPosition;
    unsigned long long _buttonPosition;
    id <SCCameraDeepLinkViewDelegate> _delegate;
    SCCameraDeepLinkMetadata *_metadata;
    SCCameraToolBarView *_toolbarView;
    SCCameraDeepLinkStickerPreviewView *_stickerPreviewView;
    SCCreativeKitOnboardingTooltip *_tooltip;
}

@property(retain, nonatomic) SCCreativeKitOnboardingTooltip *tooltip; // @synthesize tooltip=_tooltip;
@property(retain, nonatomic) SCCameraDeepLinkStickerPreviewView *stickerPreviewView; // @synthesize stickerPreviewView=_stickerPreviewView;
@property(retain, nonatomic) SCCameraToolBarView *toolbarView; // @synthesize toolbarView=_toolbarView;
@property(retain, nonatomic) SCCameraDeepLinkMetadata *metadata; // @synthesize metadata=_metadata;
- (void).cxx_destruct;
- (void)_clearButtonTapped;
- (void)_resetStickerPreviewFrame;
- (void)_resetToolbarFrame;
- (void)_resetToolbarView;
- (_Bool)shouldBlockTouchAtPoint:(struct CGPoint)arg1;
- (void)hideTooltip;
- (void)showTooltip;
- (void)setUserTooltipProvider:(id)arg1;
- (void)setMetadata:(id)arg1 buttonPosition:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1 controller:(id)arg2 metadata:(id)arg3 userTooltipProvider:(id)arg4 delegate:(id)arg5;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SCTraceEnabled.h"
#import "SCUcoInfoView.h"
#import "SCUcoStateListener.h"

@class NSString, UIImageView, UILabel;

@interface SCUcoInfoView : UIView <SCUcoStateListener, SCTraceEnabled, SCUcoInfoView>
{
    UIView *_overlayView;
    UIView *_slugContainerView;
    UIImageView *_iconImageView;
    UILabel *_nameLabel;
    UILabel *_authorLabel;
    CDUnknownBlockType _startLoadingBlock;
    CDUnknownBlockType _attributionAnimationBlock;
    id <SCUcoInfoViewModel> _ucoInfoViewModel;
    _Bool _isAttributionHidden;
    _Bool _isOverlayHidden;
}

@property(nonatomic) _Bool isOverlayHidden; // @synthesize isOverlayHidden=_isOverlayHidden;
@property(nonatomic) _Bool isAttributionHidden; // @synthesize isAttributionHidden=_isAttributionHidden;
- (void).cxx_destruct;
- (void)ucoStateProvider:(id)arg1 didFinishProcessingFrameWithFilterId:(id)arg2;
- (void)startLoadingWithUcoStateProvider:(id)arg1;
- (void)cancelAttributionAnimation;
- (void)setIsAttributionHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setIsOverlayHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)hide:(_Bool)arg1;
- (void)show;
- (id)initWithUcoInfoViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


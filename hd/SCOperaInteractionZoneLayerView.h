//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SCOperaInteractionZoneViewDelegate.h"
#import "SCOperaLayerView.h"

@class NSString, SCOperaInteractionZoneView;

@interface SCOperaInteractionZoneLayerView : UIView <SCOperaInteractionZoneViewDelegate, SCOperaLayerView>
{
    SCOperaInteractionZoneView *_interactionZoneView;
    double _interactionZoneViewTopOffset;
    id <SCOperaInteractionZoneLayerViewDelegate> _delegate;
    id <SCOperaImageProvider> _imageProvider;
}

+ (id)layerViewWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) id <SCOperaImageProvider> imageProvider; // @synthesize imageProvider=_imageProvider;
@property(nonatomic) __weak id <SCOperaInteractionZoneLayerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGSize)_interactionZoneViewSize;
- (void)didTapInteractionZoneViewTitle:(id)arg1;
- (void)interactionZoneView:(id)arg1 scrolledItemIndexPath:(id)arg2 endItemActionModel:(id)arg3;
- (void)interactionZoneViewDidStartScrolling:(id)arg1;
- (void)interactionZoneView:(id)arg1 didTriggerActionWithActionModel:(id)arg2 tapRelativeLocation:(struct CGPoint)arg3 itemIndex:(long long)arg4;
- (_Bool)shouldHandleGestureRecognizer:(id)arg1;
- (void)layoutSubviews;
- (void)hideLayerView;
- (void)showLayerViewWithAnimation;
- (void)setupViewForLayer:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


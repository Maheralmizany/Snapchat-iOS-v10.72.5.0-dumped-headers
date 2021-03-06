//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCMapTouchResponder.h"

@class NSString, SCXRenderLayer, UIView<SCMapInstance>;

@interface SCMapLongPressShareController : NSObject <SCMapTouchResponder>
{
    id <SCMapScreenshotPresenter> _screenshotPresenter;
    UIView<SCMapInstance> *_mapInstanceView;
    id <SCMapScreenshotOverlayViewsProvider> _overlaysProvider;
    id <SCMapTouchResponderPresentationDelegate> _presentationDelegate;
    SCXRenderLayer *_renderLayer;
    _Bool _shouldHandleLongPress;
}

- (void).cxx_destruct;
- (void)_presentScreenshotShareViewController;
- (void)priorResponderDidHandleTouch:(id)arg1;
- (void)didCancelTouchOnMapWithReason:(id)arg1;
- (struct SCMapTouchResponderResult)didLongPressOnMapAtPoint:(struct CGPoint)arg1;
- (struct SCMapTouchResponderResult)didTouchUpOnMapAtPoint:(struct CGPoint)arg1;
- (struct SCMapTouchResponderResult)didTouchDownOnMapAtPoint:(struct CGPoint)arg1;
- (id)initWithMapInstanceView:(id)arg1 mapScreenshotPresenter:(id)arg2 overlaysProvider:(id)arg3 presentationDelegate:(id)arg4 renderLayer:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


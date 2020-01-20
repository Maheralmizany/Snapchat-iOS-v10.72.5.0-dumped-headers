//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCCameraTimerTooltipManaging.h"

@class NSString, SCPreviewTooltipBalloon, UIView;

@interface SCCameraTimerTooltipManager : NSObject <SCCameraTimerTooltipManaging>
{
    UIView *_cameraTimerView;
    UIView *_takeASnapTooltipView;
    SCPreviewTooltipBalloon *_multiSnapTooltip;
    _Bool _suppressTooltips;
}

@property(nonatomic) _Bool suppressTooltips; // @synthesize suppressTooltips=_suppressTooltips;
@property(readonly, nonatomic) UIView *takeASnapTooltipView; // @synthesize takeASnapTooltipView=_takeASnapTooltipView;
- (void).cxx_destruct;
- (void)hideMultiSnapTooltip;
- (void)showMultiSnapTooltip;
- (_Bool)isTakeASnapTooltipVisible;
- (void)hideTakeASnapTooltipAnimated:(_Bool)arg1;
- (void)showTakeASnapTooltipView:(id)arg1 animated:(_Bool)arg2;
- (id)initWithCameraTimerView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

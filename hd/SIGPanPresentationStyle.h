//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SIGPresentationStyle.h"

@class NSString;

@interface SIGPanPresentationStyle : NSObject <SIGPresentationStyle>
{
    unsigned long long _originEdge;
    unsigned long long _options;
    long long _footerAnimationStyle;
    long long _headerAnimationStyle;
}

@property(readonly, nonatomic) long long headerAnimationStyle; // @synthesize headerAnimationStyle=_headerAnimationStyle;
- (id)timingCurveForVelocity:(struct CGVector)arg1;
- (void)completeInContext:(id)arg1;
- (void)performAnimationsInContext:(id)arg1;
- (void)setupInContext:(id)arg1;
@property(readonly, nonatomic) long long completionCurve;
@property(readonly, nonatomic) long long footerAnimationStyle; // @synthesize footerAnimationStyle=_footerAnimationStyle;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) _Bool modal;
- (struct UIEdgeInsets)_outgoingViewFinalCoveringInsetsWithContext:(id)arg1;
- (struct UIEdgeInsets)_incomingViewInitialCoveringInsetsWithContext:(id)arg1;
- (_Bool)_incomingViewShouldBeBelowOutgoingView;
- (_Bool)_outgoingViewShouldSlide;
- (_Bool)_incomingViewShouldSlide;
- (struct CGPoint)_offsetsForContext:(id)arg1;
- (long long)_setHeaderAnimationStyle:(unsigned long long)arg1;
- (id)initWithOriginEdge:(unsigned long long)arg1 options:(unsigned long long)arg2 footerAnimationStyle:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

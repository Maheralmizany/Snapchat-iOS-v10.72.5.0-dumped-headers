//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SIGCardGestureHandler.h"

@class NSString, UIPercentDrivenInteractiveTransition;

@interface SIGFullscreenCardGestureHandler : NSObject <SIGCardGestureHandler>
{
    UIPercentDrivenInteractiveTransition *_dismissalTransition;
    double _initialOffset;
    id <SIGCardTransitionDelegate> _delegate;
}

@property(readonly, nonatomic) UIPercentDrivenInteractiveTransition *dismissalTransition; // @synthesize dismissalTransition=_dismissalTransition;
@property(nonatomic) __weak id <SIGCardTransitionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)endInteractingWithView:(id)arg1 atOffset:(double)arg2 velocity:(double)arg3 cancel:(_Bool)arg4;
- (void)updateInteractingWithView:(id)arg1 atOffset:(double)arg2 velocity:(double)arg3;
- (void)startInteractingWithView:(id)arg1 atOffset:(double)arg2 velocity:(double)arg3;
- (_Bool)shouldAllowInteractionWithView:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

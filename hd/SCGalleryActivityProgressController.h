//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCProgressOverlayViewDelegate.h"

@class NSArray, NSString, NSTimer, SCProgressOverlayView;

@interface SCGalleryActivityProgressController : NSObject <SCProgressOverlayViewDelegate>
{
    float _totalProgressWeight;
    NSTimer *_progressSimulationTimer;
    SCProgressOverlayView *_progressOverlayView;
    NSArray *_activityItemProviders;
    CDUnknownBlockType _cancelHandler;
}

@property(copy, nonatomic) CDUnknownBlockType cancelHandler; // @synthesize cancelHandler=_cancelHandler;
@property(readonly, copy, nonatomic) NSArray *activityItemProviders; // @synthesize activityItemProviders=_activityItemProviders;
- (void).cxx_destruct;
- (void)_progressSimulatorTimerDidFire:(id)arg1;
- (void)_stopProgressSimulatorTimer;
- (void)_startProgressSimulationTimerForActivityItemProvider:(id)arg1;
- (void)markCompleteForActivityItemProvider:(id)arg1;
- (void)setProgress:(float)arg1 animated:(_Bool)arg2 forActivityItemProvider:(id)arg3;
- (void)startSimulatedProgressForActivityItemProvider:(id)arg1;
- (void)setProgress:(float)arg1 animated:(_Bool)arg2;
- (void)hideProgressOverlay;
- (void)showProgressOverlay;
- (void)invalidate;
- (void)progressOverlayViewDidCancel:(id)arg1;
- (void)dealloc;
- (id)initWithActivityItemProviders:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


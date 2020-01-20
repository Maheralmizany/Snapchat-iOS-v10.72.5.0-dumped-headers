//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCBlackCameraDetector.h"
#import "SCTraceEnabled.h"

@class NSString, SCBlackCameraNoOutputDetector, SCBlackCameraPreviewDetector, SCBlackCameraRunningDetector, SCBlackCameraSessionBlockDetector, SCBlackCameraViewDetector, SCQueuePerformer;

@interface SCBlackCameraDetector : NSObject <SCTraceEnabled, SCBlackCameraDetector>
{
    _Bool _sessionIsRunning;
    _Bool _cameraIsVisible;
    _Bool _previewIsVisible;
    _Bool _startRunningCallScheduled;
    SCBlackCameraNoOutputDetector *_blackCameraNoOutputDetector;
    SCQueuePerformer *_queuePerformer;
    SCBlackCameraViewDetector *_cameraViewDetector;
    SCBlackCameraRunningDetector *_sessionRunningDetector;
    SCBlackCameraPreviewDetector *_previewDetector;
    SCBlackCameraSessionBlockDetector *_sessionBlockDetector;
}

@property(retain, nonatomic) SCBlackCameraSessionBlockDetector *sessionBlockDetector; // @synthesize sessionBlockDetector=_sessionBlockDetector;
@property(retain, nonatomic) SCBlackCameraPreviewDetector *previewDetector; // @synthesize previewDetector=_previewDetector;
@property(retain, nonatomic) SCBlackCameraRunningDetector *sessionRunningDetector; // @synthesize sessionRunningDetector=_sessionRunningDetector;
@property(retain, nonatomic) SCBlackCameraViewDetector *cameraViewDetector; // @synthesize cameraViewDetector=_cameraViewDetector;
@property(retain, nonatomic) SCQueuePerformer *queuePerformer; // @synthesize queuePerformer=_queuePerformer;
@property(retain, nonatomic) SCBlackCameraNoOutputDetector *blackCameraNoOutputDetector; // @synthesize blackCameraNoOutputDetector=_blackCameraNoOutputDetector;
- (void).cxx_destruct;
- (void)sessionRuntimeError;
- (void)sessionDidRecreate;
- (void)sessionWillRecreate;
- (void)sessionDidCommitConfiguration;
- (void)sessionWillCommitConfiguration;
- (void)capturePreviewDidBecomeVisible:(_Bool)arg1;
- (void)sessionDidChangeIsRunning:(_Bool)arg1;
- (void)sessionDidCallStopRunning;
- (void)sessionWillCallStopRunning;
- (void)sessionDidCallStartRunning;
- (void)sessionWillCallStartRunning;
- (void)onCameraViewVisibleWithTouch:(id)arg1;
- (void)onCameraViewVisible:(_Bool)arg1;
- (id)initWithTicketCreator:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


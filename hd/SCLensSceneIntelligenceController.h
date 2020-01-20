//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCLSIServiceListener.h"
#import "SCScanCapturerDelegate.h"

@class NSMutableDictionary, NSString, NSUUID, SCLSIServiceListenerAnnouncer, SCScopedAccess;

@interface SCLensSceneIntelligenceController : NSObject <SCScanCapturerDelegate, SCLSIServiceListener>
{
    id <SCPerforming> _performer;
    id <SCSIGTQProvider> _gtqProvider;
    id <SCLocationProvider> _locationProvider;
    id <SCScanCapturer> _scanCapturer;
    id <SCScanFrameSelector> _frameSelector;
    SCScopedAccess *_lensSceneIntService;
    _Bool _pendingSingleFrameAnalysis;
    NSMutableDictionary *_activeTokens;
    NSUUID *_singleFrameToken;
    SCLSIServiceListenerAnnouncer *_announcer;
    struct CGPoint _startingTouchPoint;
    int _scanSource;
}

- (void).cxx_destruct;
- (id)_activeContexts;
- (void)lensSceneIntelligenceService:(id)arg1 receivedScanAnimationResponse:(id)arg2;
- (void)lensSceneIntelligenceService:(id)arg1 request:(id)arg2 failedWithError:(id)arg3;
- (void)lensSceneIntelligenceService:(id)arg1 request:(id)arg2 receivedResponse:(id)arg3;
- (void)lensSceneIntelligenceService:(id)arg1 willProccessRequest:(id)arg2;
- (void)scanCapturer:(id)arg1 didCaptureFrame:(id)arg2 cameraPosition:(long long)arg3;
- (void)analyzeImage:(id)arg1 sessionID:(id)arg2 contexts:(id)arg3 touchPoint:(struct CGPoint)arg4 cameraPosition:(long long)arg5 scanSource:(int)arg6;
- (void)analyzeSingleFrameWithContexts:(id)arg1 touchPoint:(struct CGPoint)arg2 frameModifier:(id)arg3 scanSource:(int)arg4;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)endAnalysisWithToken:(id)arg1;
- (id)beginAnalysisWithContexts:(id)arg1 touchPoint:(struct CGPoint)arg2 frameModifier:(id)arg3 scanSource:(int)arg4;
- (id)initWithCapturer:(id)arg1 lensSceneIntService:(id)arg2 gtqProvider:(id)arg3 locationProvider:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


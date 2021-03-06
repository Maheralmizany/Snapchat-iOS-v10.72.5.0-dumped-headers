//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCSpectaclesBoomboxPlaybackSession.h"

@class CADisplayLink, NSArray, NSData, NSObject<OS_dispatch_semaphore>, NSString, SCImageProcessPlaybackRenderer, SCImageProcessQueue, SCQueuePerformer, UIImage;

@interface SCSpectaclesBoomboxPhotoPlaybackSession : NSObject <SCSpectaclesBoomboxPlaybackSession>
{
    SCImageProcessQueue *_queue;
    SCQueuePerformer *_performer;
    CADisplayLink *_displayLink;
    NSData *_data;
    long long _pixelWidth;
    long long _pixelHeight;
    NSObject<OS_dispatch_semaphore> *_frameRenderSemaphore;
    UIImage *_image;
    NSString *_leftSessionId;
    NSString *_rightSessionId;
    SCImageProcessPlaybackRenderer *_leftRenderer;
    SCImageProcessPlaybackRenderer *_rightRenderer;
    NSArray *_leftCommands;
    NSArray *_rightCommands;
    _Bool _shouldSubmitNewRequest;
    float _duration;
    CDUnknownBlockType _autoAdvanceBlock;
    id <SCSpectaclesBoomboxPlaybackSessionDelegate> _delegate;
}

@property(nonatomic) __weak id <SCSpectaclesBoomboxPlaybackSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (id)_generateSessionId;
- (id)_requestForCommands:(id)arg1 renderer:(id)arg2 colorFilterSessionId:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_handlePlaybackSectionDidLoadFirstFrame;
- (void)_displayLinkCallback:(id)arg1;
- (void)_prepareToRun;
- (void)startRunning;
- (void)_cancelAutoAdvanceBlock;
- (void)stopRunning;
- (void)dealloc;
- (id)initWithImage:(id)arg1 leftLayer:(id)arg2 rightLayer:(id)arg3 leftCommands:(id)arg4 rightCommands:(id)arg5 duration:(float)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCAudioSessionListener.h"
#import "SCCameraVolumeButtonHandlerDelegate.h"
#import "SCFeatureVolumeButtonCapture.h"

@class NSString, SCCameraVolumeButtonHandler;

@interface SCFeatureVolumeButtonCaptureImpl : SCFeature <SCCameraVolumeButtonHandlerDelegate, SCAudioSessionListener, SCFeatureVolumeButtonCapture>
{
    _Bool _pressingVolumeButton;
    _Bool _shouldAutomaticallyStartHandlingEvents;
    id <SCFeatureVolumeButtonCaptureDelegate> _delegate;
    id <SCAudioSession> _audioSession;
}

@property(nonatomic) _Bool shouldAutomaticallyStartHandlingEvents; // @synthesize shouldAutomaticallyStartHandlingEvents=_shouldAutomaticallyStartHandlingEvents;
@property(readonly, nonatomic) id <SCAudioSession> audioSession; // @synthesize audioSession=_audioSession;
@property(nonatomic) __weak id <SCFeatureVolumeButtonCaptureDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool pressingVolumeButton; // @synthesize pressingVolumeButton=_pressingVolumeButton;
- (void).cxx_destruct;
- (void)audioSessionSilenceSecondaryAudioHintTypeDidChangeToEnd:(id)arg1;
- (void)volumeButtonHandlerDidEndPressingVolumeButton:(id)arg1;
- (void)volumeButtonHandlerDidBeginPressingVolumeButton:(id)arg1;
- (void)reset;
- (void)stopHandlingVolumeButtonEvents;
- (void)startHandlingVolumeButtonEvents;
- (void)activate;
@property(readonly, nonatomic) SCCameraVolumeButtonHandler *handler;
- (void)dealloc;
- (id)initWithAudioSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


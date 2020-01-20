//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCCameraLensesInteractorProtocol.h"
#import "SCLensDataProviderRegistryUpdatable.h"
#import "SCLensUIUpdateListener.h"
#import "SCManagedCapturerListener.h"
#import "SCTraceEnabled.h"

@class NSString, SCCameraLensesEventListenerAnnouncer, SCLensDataProviderRegistry;

@interface SCCameraLensesInteractor : NSObject <SCTraceEnabled, SCLensDataProviderRegistryUpdatable, SCCameraLensesInteractorProtocol, SCLensUIUpdateListener, SCManagedCapturerListener>
{
    SCLensDataProviderRegistry *_lensDataProviderRegistry;
    SCCameraLensesEventListenerAnnouncer *_announcer;
    id <SCCameraLensesControllerProtocol> cameraLensesController;
}

@property(nonatomic) __weak id <SCCameraLensesControllerProtocol> cameraLensesController; // @synthesize cameraLensesController;
- (void).cxx_destruct;
- (void)managedCapturer:(id)arg1 didCancelRecording:(id)arg2 session:(CDStruct_4565c1ff)arg3;
- (void)managedCapturer:(id)arg1 didFailRecording:(id)arg2 session:(CDStruct_4565c1ff)arg3 error:(id)arg4;
- (void)managedCapturer:(id)arg1 didFinishRecording:(id)arg2 session:(CDStruct_4565c1ff)arg3 recordedVideo:(id)arg4;
- (void)managedCapturer:(id)arg1 didBeginVideoRecording:(id)arg2 session:(CDStruct_4565c1ff)arg3;
- (void)didEndDisplayingLens:(id)arg1;
- (void)willDisplayLens:(id)arg1;
- (void)didUpdateActiveLensOrder:(id)arg1;
- (void)didHideLenses;
- (void)willShowLenses;
- (void)didSelectLens:(id)arg1;
- (void)removeCameraLensesEventListener:(id)arg1;
- (void)addCameraLensesEventListener:(id)arg1;
- (void)removeUpdateListener:(id)arg1;
- (_Bool)addUpdateListener:(id)arg1;
@property(readonly, nonatomic) long long cameraViewType;
- (void)setCategoryIds:(id)arg1 devicePosition:(long long)arg2;
- (void)setDevicePosition:(long long)arg1;
- (void)updateLensDataProviderWithCameraType:(long long)arg1 bitmojiLinked:(_Bool)arg2 friendBitmojiLinked:(_Bool)arg3 ownerContextDescription:(id)arg4;
- (void)updateLensDataProvider:(id)arg1;
@property(readonly, nonatomic) id <SCLensCameraScreenDataProviderProtocol> currentLensDataProvider;
- (id)initWithLensDataProviderRegistry:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


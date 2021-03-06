//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCOperaLayerViewController.h"

#import "SCOperaLayerViewControllerMediaContainer.h"
#import "SCOperaLayerViewControllerShareableMediaSource.h"
#import "SCOperaPageableViewControllerDelegate.h"
#import "SCOperaRemoteVideoControllerDelegate.h"

@class NSString, SCCustomVolumeController, SCOperaRemoteVideoLayerView, SCOperaRemoteVideoViewProvider;

@interface SCOperaRemoteVideoLayerViewController : SCOperaLayerViewController <SCOperaPageableViewControllerDelegate, SCOperaRemoteVideoControllerDelegate, SCOperaLayerViewControllerMediaContainer, SCOperaLayerViewControllerShareableMediaSource>
{
    SCOperaRemoteVideoLayerView *_layerView;
    SCOperaRemoteVideoViewProvider *_remoteVideoViewController;
    SCCustomVolumeController *_customVolumeController;
    _Bool _silentlyPresentingViewController;
    _Bool _showActionMenuButtonEnabled;
}

- (void).cxx_destruct;
- (_Bool)isOverlay;
- (double)mediaHeightToWidthAspectRatio;
- (struct CGRect)mediaViewFrame;
- (void)remoteVideoViewControllerDidFinishPlaying;
- (void)remoteVideoViewControllerWasPresented;
- (void)remoteVideoViewControllerDidDisappear:(_Bool)arg1;
- (void)remoteVideoViewControllerDidPressShowActionMenuButton;
- (void)remoteVideoViewControllerDidPressExitButton;
- (void)remoteVideoViewControllerDidRotateToLandscape:(_Bool)arg1;
- (void)setImageForBackdrop:(id)arg1;
- (unsigned long long)relativePositionForPageId:(id)arg1;
- (_Bool)pageIsPartiallyVisible:(id)arg1;
- (_Bool)pageIsFullyVisible:(id)arg1;
- (void)rotateBasedOnOrientation;
- (void)updateViewWithPreviousLayer:(id)arg1 currentLayer:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (long long)pageabilityForRelativePosition:(unsigned long long)arg1 gestureRecognizer:(id)arg2;
- (id)currentViewParameters;
- (void)teardown;
- (id)shareableMedia;
- (void)setVolume:(double)arg1;
- (void)resume;
- (void)pause;
- (void)loadVideo;
- (void)viewDidFullyDisappear;
- (void)neighborViewDidFullyAppearWithCurrentViewRelativePosition:(unsigned long long)arg1;
- (void)viewDidFullyAppear;
- (id)initWithConfiguration:(id)arg1 eventAnnouncer:(id)arg2 sharedResourceManager:(id)arg3 customVolumeController:(id)arg4;
- (id)initWithConfiguration:(id)arg1 eventAnnouncer:(id)arg2 sharedResourceManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


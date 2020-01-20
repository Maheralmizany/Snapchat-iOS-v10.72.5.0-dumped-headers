//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPCameraInteractorOutput.h"
#import "SPCameraModuleInput.h"
#import "SPCameraViewOutput.h"

@class NSString, SPCameraModuleInitialState, SPCameraModuleState, UIViewController;

@interface SPCameraPresenter : NSObject <SPCameraModuleInput, SPCameraViewOutput, SPCameraInteractorOutput>
{
    id <SPCameraViewInput> _view;
    id <SPCameraInteractorInput> _interactor;
    id <SPCameraRouterInput> _router;
    SPCameraModuleInitialState *_initialState;
    SPCameraModuleState *_state;
    id <SPCameraModuleOutput> _output;
}

@property(nonatomic) __weak id <SPCameraModuleOutput> output; // @synthesize output=_output;
@property(retain, nonatomic) SPCameraModuleState *state; // @synthesize state=_state;
@property(retain, nonatomic) SPCameraModuleInitialState *initialState; // @synthesize initialState=_initialState;
@property(retain, nonatomic) id <SPCameraRouterInput> router; // @synthesize router=_router;
@property(retain, nonatomic) id <SPCameraInteractorInput> interactor; // @synthesize interactor=_interactor;
@property(nonatomic) __weak id <SPCameraViewInput> view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)encounteredError:(id)arg1;
- (void)cameraViewDidChangeAllowTakePhoto:(_Bool)arg1;
- (void)cameraViewDidProcessCurrentImage:(id)arg1 fromBackCamera:(_Bool)arg2;
- (id)faceNotFoundMaskColor;
- (id)faceFoundMaskColor;
- (double)maskCenterYInset;
- (double)maskHeightToWidthAspect;
- (double)maskScaleWidthFactor;
- (void)viewDidLoad;
@property(nonatomic) long long flashMode;
@property(readonly, nonatomic) _Bool hasFlash;
- (void)switchCamera;
- (void)takePhoto;
@property(readonly, nonatomic) UIViewController *viewController;
- (void)setModuleInitialState:(id)arg1;
- (void)setModuleOutput:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCBloopsChangeTargetController.h"
#import "SCBloopsSetTargetControllerOutput.h"
#import "SCBloopsSwipeTransitionPresenterDelegate.h"

@class NSString, NSTimer, SCBloopsChangeTargetLogger, SCBloopsSetTargetController, SCBloopsSwipeTransitionPresenter, SCExperimentManager, SCLazy;

@interface SCBloopsChangeTargetControllerImpl : NSObject <SCBloopsSetTargetControllerOutput, SCBloopsSwipeTransitionPresenterDelegate, SCBloopsChangeTargetController>
{
    _Bool _statusBarWasHidden;
    CDUnknownBlockType _completion;
    SCBloopsSwipeTransitionPresenter *_cameraControllerPresenter;
    SCBloopsSetTargetController *_bloopsSetTargetController;
    SCLazy *_bloopsAPI;
    SCLazy *_remoteSettingsProvider;
    SCLazy *_targetsService;
    SCLazy *_previewsResourcesService;
    SCLazy *_categoriesProvider;
    SCExperimentManager *_experimentManager;
    NSTimer *_changeTargetWaitingTimer;
    SCBloopsChangeTargetLogger *_logger;
}

@property(retain, nonatomic) SCBloopsChangeTargetLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) NSTimer *changeTargetWaitingTimer; // @synthesize changeTargetWaitingTimer=_changeTargetWaitingTimer;
@property(retain, nonatomic) SCExperimentManager *experimentManager; // @synthesize experimentManager=_experimentManager;
@property(retain, nonatomic) SCLazy *categoriesProvider; // @synthesize categoriesProvider=_categoriesProvider;
@property(retain, nonatomic) SCLazy *previewsResourcesService; // @synthesize previewsResourcesService=_previewsResourcesService;
@property(retain, nonatomic) SCLazy *targetsService; // @synthesize targetsService=_targetsService;
@property(retain, nonatomic) SCLazy *remoteSettingsProvider; // @synthesize remoteSettingsProvider=_remoteSettingsProvider;
@property(retain, nonatomic) SCLazy *bloopsAPI; // @synthesize bloopsAPI=_bloopsAPI;
@property(nonatomic) _Bool statusBarWasHidden; // @synthesize statusBarWasHidden=_statusBarWasHidden;
@property(retain, nonatomic) SCBloopsSetTargetController *bloopsSetTargetController; // @synthesize bloopsSetTargetController=_bloopsSetTargetController;
@property(retain, nonatomic) SCBloopsSwipeTransitionPresenter *cameraControllerPresenter; // @synthesize cameraControllerPresenter=_cameraControllerPresenter;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (void)_stopChangeTargetWaitingTimer;
- (void)_startChangeTargetWaitingTimer;
- (void)_appDidEnterBackground;
- (void)_returnToCameraWithErrorText:(id)arg1;
- (void)_showErrorWithText:(id)arg1;
- (void)_resetAndBackToCamera;
- (void)_reset;
- (void)_completeTargetChanged:(_Bool)arg1;
- (void)bloopsSwipeTransitionPresenterDidDismiss:(id)arg1;
- (void)setTargetControllerDidFinishAnimation:(id)arg1;
- (void)setTargetControllerDidClose:(id)arg1;
- (void)setTargetControllerDidFailSetTarget:(id)arg1 withError:(id)arg2 analyticsErrorType:(unsigned long long)arg3;
- (void)setTargetControllerDidFinishHairSelection:(id)arg1 hairStyleId:(id)arg2 hairStyleFeatures:(id)arg3 hairStyleTechnicalMetadata:(id)arg4;
- (void)setTargetControllerDidSuccessSetTarget:(id)arg1;
- (void)setTargetControllerDidStartValidation:(id)arg1;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startOnViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithBloopsAPI:(id)arg1 remoteSettingsProvider:(id)arg2 targetsService:(id)arg3 previewsResourcesService:(id)arg4 categoriesProvider:(id)arg5 experimentManager:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

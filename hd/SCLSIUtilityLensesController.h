//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCLSIScanDataStateDelegate.h"
#import "SCLSIServiceListener.h"

@class NSArray, NSDictionary, NSString, SCLazy;

@interface SCLSIUtilityLensesController : NSObject <SCLSIScanDataStateDelegate, SCLSIServiceListener>
{
    SCLazy *_experimentManager;
    id <SCLSIUtilityLensStatePresenter> _utilityLensPresenter;
    id <SCLSIUtilityLensStatePresenterV2> _utilityLensPresenterV2;
    long long _currentDevicePosition;
    NSDictionary *_state;
    id <SCSIBackendRequest> _backendRequest;
    struct NSString *_currentContext;
}

@property(copy, nonatomic) NSString *currentContext; // @synthesize currentContext=_currentContext;
- (void).cxx_destruct;
- (id)getFrameModifierForCurrentContext;
- (void)lensSceneIntelligenceService:(id)arg1 willProccessRequest:(id)arg2;
@property(readonly, copy, nonatomic) NSArray *enabledUpfrontUtilityContext;
@property(readonly, copy, nonatomic) NSArray *enabledUtilityContexts;
- (void)scanDataState:(id)arg1 didChangeToState:(unsigned long long)arg2;
- (void)startShazamAnimation;
- (void)resetAllResults;
- (void)resetCurrentResults;
- (void)didBeginGesture:(id)arg1;
- (_Bool)isPointInsideScanStateUI:(struct CGPoint)arg1;
- (void)hideScanStateUI;
- (void)showCurrentScanStateButtonForContext:(struct NSString *)arg1;
- (id)resultForContext:(struct NSString *)arg1;
- (void)setDevicePosition:(long long)arg1;
- (id)utilityLensMetadataStore;
- (void)configureWithPresenterV2:(id)arg1;
- (void)configureWithPresenter:(id)arg1;
- (id)dataStateForContext:(struct NSString *)arg1;
- (id)initWithExperimentManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


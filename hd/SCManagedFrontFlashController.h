//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView;

@interface SCManagedFrontFlashController : NSObject
{
    _Bool _active;
    UIView *_brightView;
    double _brightnessWhenFlashAndTorchOff;
    _Bool _flashActive;
    _Bool _torchActive;
}

@property(nonatomic) _Bool torchActive; // @synthesize torchActive=_torchActive;
@property(nonatomic) _Bool flashActive; // @synthesize flashActive=_flashActive;
- (void).cxx_destruct;
- (void)_brightenLoop;
- (void)_deactivateFlash;
- (void)_activateFlash:(_Bool)arg1;
- (void)_setScreenWithFrontViewFlashActive:(_Bool)arg1 torchActive:(_Bool)arg2;

@end


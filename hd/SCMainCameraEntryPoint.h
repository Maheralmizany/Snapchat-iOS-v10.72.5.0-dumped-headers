//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCCameraCircumstanceEngineServices, SCMainCameraScope, SCMainHeaderButtonServices, SCNavigationServices, SCUserSessionScope;

@interface SCMainCameraEntryPoint : SCEntryPoint
{
    _Bool _headlessWithoutWarmup;
    SCMainCameraScope *_cameraScope;
    SCUserSessionScope *_userSessionScope;
    SCNavigationServices *_navigationServices;
    SCMainHeaderButtonServices *_mainHeaderButtonServices;
    SCCameraCircumstanceEngineServices *_cameraCircumstanceEngineServices;
}

@property(nonatomic) __weak SCCameraCircumstanceEngineServices *cameraCircumstanceEngineServices; // @synthesize cameraCircumstanceEngineServices=_cameraCircumstanceEngineServices;
@property(nonatomic) __weak SCMainHeaderButtonServices *mainHeaderButtonServices; // @synthesize mainHeaderButtonServices=_mainHeaderButtonServices;
@property(nonatomic) __weak SCNavigationServices *navigationServices; // @synthesize navigationServices=_navigationServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
@property(nonatomic) __weak SCMainCameraScope *cameraScope; // @synthesize cameraScope=_cameraScope;
- (void).cxx_destruct;
- (id)end;
- (void)_beginImmediately;
- (void)begin;

@end


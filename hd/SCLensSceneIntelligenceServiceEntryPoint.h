//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCServicesExposer, SCSnapTokenServices, SCStartupCompleteScope, SCUserSessionScope;

@interface SCLensSceneIntelligenceServiceEntryPoint : SCEntryPoint
{
    SCStartupCompleteScope *_startupCompleteScope;
    SCUserSessionScope *_userSessionScope;
    SCSnapTokenServices *_snapTokenServices;
    SCServicesExposer *_lensSceneIntelligenceServicesExposer;
}

@property(retain, nonatomic) SCServicesExposer *lensSceneIntelligenceServicesExposer; // @synthesize lensSceneIntelligenceServicesExposer=_lensSceneIntelligenceServicesExposer;
@property(nonatomic) __weak SCSnapTokenServices *snapTokenServices; // @synthesize snapTokenServices=_snapTokenServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
@property(nonatomic) __weak SCStartupCompleteScope *startupCompleteScope; // @synthesize startupCompleteScope=_startupCompleteScope;
- (void).cxx_destruct;
- (id)_lsiService;
- (void)begin;

@end

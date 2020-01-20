//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCBitmojiFetchServices, SCLazy, SCServicesExposer, SCSnapTokenServices, SCUserSessionScope;

@interface SCLocationSharingServicesEntryPoint : SCEntryPoint
{
    SCLazy *_v1Preferences;
    SCBitmojiFetchServices *_bitmojiFetchServices;
    SCSnapTokenServices *_snapTokenServices;
    SCUserSessionScope *_userSessionScope;
    SCServicesExposer *_locationSharingServicesExposer;
}

@property(retain, nonatomic) SCServicesExposer *locationSharingServicesExposer; // @synthesize locationSharingServicesExposer=_locationSharingServicesExposer;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
@property(nonatomic) __weak SCSnapTokenServices *snapTokenServices; // @synthesize snapTokenServices=_snapTokenServices;
@property(nonatomic) __weak SCBitmojiFetchServices *bitmojiFetchServices; // @synthesize bitmojiFetchServices=_bitmojiFetchServices;
- (void).cxx_destruct;
- (id)_sharingService;
- (id)_preferencesProvider;
- (id)_preferencesMutator;
- (id)_v1Preferences;
- (void)begin;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCBitmojiSelfieServices, SCServicesExposer, SCStartupCompleteScope, SCUserSessionScope;

@interface SCSnapcodeServicesEntryPoint : SCEntryPoint
{
    SCStartupCompleteScope *_startupCompleteScope;
    SCUserSessionScope *_userSessionScope;
    SCBitmojiSelfieServices *_bitmojiSelfieServices;
    SCServicesExposer *_snapcodeServicesExposer;
}

@property(retain, nonatomic) SCServicesExposer *snapcodeServicesExposer; // @synthesize snapcodeServicesExposer=_snapcodeServicesExposer;
@property(nonatomic) __weak SCBitmojiSelfieServices *bitmojiSelfieServices; // @synthesize bitmojiSelfieServices=_bitmojiSelfieServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
@property(nonatomic) __weak SCStartupCompleteScope *startupCompleteScope; // @synthesize startupCompleteScope=_startupCompleteScope;
- (void).cxx_destruct;
- (id)_snapcodeImageProvider;
- (void)begin;

@end


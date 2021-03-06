//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCLegacyFeedHeaderPromptStateMigrator, SCLegacyFeedHeaderPromptStateServices, SCServicesExposer, SCUserSessionScope;

@interface SCFeedHeaderPromptEntryPoint : SCEntryPoint
{
    id <SCPerforming> _performer;
    SCLegacyFeedHeaderPromptStateMigrator *_legacyStateMigrator;
    SCUserSessionScope *_userSessionScope;
    SCLegacyFeedHeaderPromptStateServices *_legacyFeedHeaderPromptStateServices;
    SCServicesExposer *_feedHeaderPromptServicesExposer;
}

@property(retain, nonatomic) SCServicesExposer *feedHeaderPromptServicesExposer; // @synthesize feedHeaderPromptServicesExposer=_feedHeaderPromptServicesExposer;
@property(nonatomic) __weak SCLegacyFeedHeaderPromptStateServices *legacyFeedHeaderPromptStateServices; // @synthesize legacyFeedHeaderPromptStateServices=_legacyFeedHeaderPromptStateServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
- (void).cxx_destruct;
- (void)_migrateLegacyStates;
- (void)_migrateLegacyStatesIfNecessary;
- (void)begin;

@end


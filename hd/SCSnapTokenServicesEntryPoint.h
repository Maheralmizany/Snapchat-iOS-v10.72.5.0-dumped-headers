//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCLazy, SCServicesExposer, SCUserSessionScope;

@interface SCSnapTokenServicesEntryPoint : SCEntryPoint
{
    SCLazy *_snapTokenManager;
    SCUserSessionScope *_userSessionScope;
    SCServicesExposer *_snapTokenServicesExposer;
}

@property(retain, nonatomic) SCServicesExposer *snapTokenServicesExposer; // @synthesize snapTokenServicesExposer=_snapTokenServicesExposer;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
- (void).cxx_destruct;
- (id)_snapTokenManager;
- (id)end;
- (void)begin;

@end


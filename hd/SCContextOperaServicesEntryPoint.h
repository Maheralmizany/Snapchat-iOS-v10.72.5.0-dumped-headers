//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCServicesExposer, SCSnapActionsOperaServices, SCSystemScope;

@interface SCContextOperaServicesEntryPoint : SCEntryPoint
{
    SCSystemScope *_systemScope;
    SCSnapActionsOperaServices *_snapActionsOperaServices;
    SCServicesExposer *_contextOperaServicesExposer;
}

@property(retain, nonatomic) SCServicesExposer *contextOperaServicesExposer; // @synthesize contextOperaServicesExposer=_contextOperaServicesExposer;
@property(nonatomic) __weak SCSnapActionsOperaServices *snapActionsOperaServices; // @synthesize snapActionsOperaServices=_snapActionsOperaServices;
@property(nonatomic) __weak SCSystemScope *systemScope; // @synthesize systemScope=_systemScope;
- (void).cxx_destruct;
- (void)begin;

@end


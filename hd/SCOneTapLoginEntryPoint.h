//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCApplicationStorageServices, SCIdentityLoggerServices, SCOneTapLoginScope, SCOneTapLoginServices, SCOneTapLoginWorkflow, SCScopeExposer;

@interface SCOneTapLoginEntryPoint : SCEntryPoint
{
    SCOneTapLoginWorkflow *_oneTapLoginWorkflow;
    SCOneTapLoginScope *_oneTapLoginScope;
    SCApplicationStorageServices *_applicationStorageServices;
    SCIdentityLoggerServices *_loggerServices;
    SCOneTapLoginServices *_oneTapLoginServices;
    SCScopeExposer *_twoFAScopeExposer;
    SCScopeExposer *_abuseWarningScopeExposer;
}

@property(retain, nonatomic) SCScopeExposer *abuseWarningScopeExposer; // @synthesize abuseWarningScopeExposer=_abuseWarningScopeExposer;
@property(retain, nonatomic) SCScopeExposer *twoFAScopeExposer; // @synthesize twoFAScopeExposer=_twoFAScopeExposer;
@property(nonatomic) __weak SCOneTapLoginServices *oneTapLoginServices; // @synthesize oneTapLoginServices=_oneTapLoginServices;
@property(nonatomic) __weak SCIdentityLoggerServices *loggerServices; // @synthesize loggerServices=_loggerServices;
@property(nonatomic) __weak SCApplicationStorageServices *applicationStorageServices; // @synthesize applicationStorageServices=_applicationStorageServices;
@property(nonatomic) __weak SCOneTapLoginScope *oneTapLoginScope; // @synthesize oneTapLoginScope=_oneTapLoginScope;
- (void).cxx_destruct;
- (void)begin;

@end


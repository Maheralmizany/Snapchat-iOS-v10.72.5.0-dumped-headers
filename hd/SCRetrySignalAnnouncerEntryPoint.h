//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCServicesExposer, SCSystemScope;

@interface SCRetrySignalAnnouncerEntryPoint : SCEntryPoint
{
    SCSystemScope *_systemScope;
    SCServicesExposer *_retrySignalAnnouncerServicesExposer;
}

@property(retain, nonatomic) SCServicesExposer *retrySignalAnnouncerServicesExposer; // @synthesize retrySignalAnnouncerServicesExposer=_retrySignalAnnouncerServicesExposer;
@property(nonatomic) __weak SCSystemScope *systemScope; // @synthesize systemScope=_systemScope;
- (void).cxx_destruct;
- (id)end;
- (void)begin;

@end

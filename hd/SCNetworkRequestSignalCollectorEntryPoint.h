//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCEntryPointCleanup, SCNetworkRequestSignalCollector, SCRetrySignalAnnouncerServices, SCSystemScope;

@interface SCNetworkRequestSignalCollectorEntryPoint : SCEntryPoint
{
    SCEntryPointCleanup *_cleanup;
    SCNetworkRequestSignalCollector *_networkRequestSignalCollector;
    SCSystemScope *_systemScope;
    SCRetrySignalAnnouncerServices *_retrySignalAnnouncerServices;
}

@property(nonatomic) __weak SCRetrySignalAnnouncerServices *retrySignalAnnouncerServices; // @synthesize retrySignalAnnouncerServices=_retrySignalAnnouncerServices;
@property(nonatomic) __weak SCSystemScope *systemScope; // @synthesize systemScope=_systemScope;
- (void).cxx_destruct;
- (id)end;
- (void)begin;

@end


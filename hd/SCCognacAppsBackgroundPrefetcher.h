//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCBackgroundPrefetchProtocol.h"
#import "SCJobProcessor.h"

@class NSString, SCCognacWebProxyPreloader, SCExperimentManager, SCUserSession;

@interface SCCognacAppsBackgroundPrefetcher : NSObject <SCBackgroundPrefetchProtocol, SCJobProcessor>
{
    SCUserSession *_userSession;
    SCCognacWebProxyPreloader *_preloader;
    SCExperimentManager *_experimentManager;
}

- (void).cxx_destruct;
- (void)processJobWithInput:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (unsigned long long)prefetchIntervalInSeconds;
- (id)name;
- (void)backgroundPrefetchMediaWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithUserSession:(id)arg1 preloader:(id)arg2 experimentManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


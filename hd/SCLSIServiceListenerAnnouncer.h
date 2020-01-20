//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCLSIServiceListener.h"

@class NSString;

@interface SCLSIServiceListenerAnnouncer : NSObject <SCLSIServiceListener>
{
    struct mutex _mutex;
    struct shared_ptr<std::__1::vector<__weak id<SCLSIServiceListener>, std::__1::allocator<__weak id<SCLSIServiceListener>>>> _listeners;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)lensSceneIntelligenceService:(id)arg1 didReceiveLensRecommendationResponseForRequest:(id)arg2;
- (void)lensSceneIntelligenceService:(id)arg1 receivedScanAnimationResponse:(id)arg2;
- (void)lensSceneIntelligenceService:(id)arg1 request:(id)arg2 failedWithError:(id)arg3;
- (void)lensSceneIntelligenceService:(id)arg1 request:(id)arg2 receivedResponse:(id)arg3;
- (void)lensSceneIntelligenceService:(id)arg1 willProccessRequest:(id)arg2;
- (void)removeListener:(id)arg1;
- (_Bool)addListener:(id)arg1;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


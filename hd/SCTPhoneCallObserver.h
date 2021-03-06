//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CXCallObserverDelegate.h"
#import "SCTPhoneCallServices.h"
#import "SCTraceEnabled.h"

@class CXCallObserver, NSString, SCTPhoneCallListenerAnnouncer;

@interface SCTPhoneCallObserver : NSObject <CXCallObserverDelegate, SCTraceEnabled, SCTPhoneCallServices>
{
    SCTPhoneCallListenerAnnouncer *_announcer;
    CXCallObserver *_cxCallObserver;
    _Bool _isPhoneCallActive;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_announceCurrentState;
- (void)_prepareCallObserver;
- (void)callObserver:(id)arg1 callChanged:(id)arg2;
- (_Bool)isPhoneCallActive;
- (void)removePhoneCallListener:(id)arg1;
- (void)addPhoneCallListener:(id)arg1 requiresCurrentState:(_Bool)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


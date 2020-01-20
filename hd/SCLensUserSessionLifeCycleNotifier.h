//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCLensUserSessionLifeCycleNotifier.h"
#import "SCUserSessionScoped.h"

@class NSString, SCLensUserSessionLifeCycleListenerAnnouncer, SCUserSession;

@interface SCLensUserSessionLifeCycleNotifier : NSObject <SCLensUserSessionLifeCycleNotifier, SCUserSessionScoped>
{
    SCLensUserSessionLifeCycleListenerAnnouncer *_announcer;
    SCUserSession *_userSession;
    _Bool _isUserSessionValid;
}

@property(readonly, nonatomic) _Bool isUserSessionValid; // @synthesize isUserSessionValid=_isUserSessionValid;
- (void).cxx_destruct;
- (void)invalidate;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCUnlockableLensTracker, SCUserSession;

@interface SCLensSession : NSObject
{
    NSString *_sessionId;
    unsigned long long _innerSessionCounter;
    SCUserSession *_userSession;
    long long _sourceType;
    SCUnlockableLensTracker *_unlockableLensTracker;
}

@property(retain, nonatomic) SCUnlockableLensTracker *unlockableLensTracker; // @synthesize unlockableLensTracker=_unlockableLensTracker;
@property(readonly, nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
- (void).cxx_destruct;
- (void)trackLensInteraction:(id)arg1 appliedLensId:(id)arg2 beforeSnap:(_Bool)arg3;
- (void)incrementSessionCount;
@property(readonly, nonatomic) NSString *sessionId;
- (id)initWithSessionId:(id)arg1 lensSourceType:(long long)arg2 userSession:(id)arg3;

@end


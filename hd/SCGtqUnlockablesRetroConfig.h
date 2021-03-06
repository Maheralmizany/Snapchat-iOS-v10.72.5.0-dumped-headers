//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCRetriableRequestManagerRetroConfigProtocol.h"

@class NSString;

@interface SCGtqUnlockablesRetroConfig : NSObject <SCRetriableRequestManagerRetroConfigProtocol>
{
}

- (_Bool)isBackgroundRetryEnabled;
- (unsigned long long)maxPersistedRequests;
- (unsigned long long)maxFileSizeBytes;
- (unsigned long long)maxFileAgeMillis;
- (_Bool)isRetryEnabled:(id)arg1;
- (_Bool)isPersistenceEnabled:(id)arg1;
- (void)timeEvent:(long long)arg1 duration:(unsigned long long)arg2 params:(id)arg3;
- (void)countEvent:(long long)arg1 params:(id)arg2 amount:(unsigned long long)arg3;
- (void)countEvent:(long long)arg1 params:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCSpectaclesNumericComparison : NSObject
{
    struct EyewearPairing *_eyewearPairing;
}

@property(nonatomic) struct EyewearPairing *eyewearPairing; // @synthesize eyewearPairing=_eyewearPairing;
- (_Bool)checkEyewearVerificationMessage:(id)arg1;
- (id)getAppVerificationMessage:(id)arg1 appNonce:(id)arg2 eyewearUUID:(id)arg3 eyewearNonce:(id)arg4;
- (_Bool)setSharedSecret:(id)arg1;
- (_Bool)setVerificationCode:(id)arg1;
- (void)dealloc;
- (id)init;

@end


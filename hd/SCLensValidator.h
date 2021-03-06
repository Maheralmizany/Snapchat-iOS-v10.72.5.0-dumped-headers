//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCTraceEnabled.h"

@class NSString, SCLensSecurity;

@interface SCLensValidator : NSObject <SCTraceEnabled>
{
    SCLensSecurity *_signatureValidator;
}

- (void).cxx_destruct;
- (id)_getLensContentFileAttributesListRecursively:(id)arg1;
- (void)logLensWithUnknownResource:(id)arg1;
- (void)processContentVerificationResponseWithLens:(id)arg1 result:(_Bool)arg2 checksum:(id)arg3 error:(id)arg4 storedResource:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)validateLens:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_canValidateLens:(id)arg1 withError:(id *)arg2;
- (id)initWithLensSecurity:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


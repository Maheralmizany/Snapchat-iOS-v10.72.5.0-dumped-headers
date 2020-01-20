//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCLensSynchronousSecurity.h"
#import "SCTraceEnabled.h"

@class NSDictionary, NSString, SCPreferences;

@interface SCLensSynchronousSecurity : NSObject <SCTraceEnabled, SCLensSynchronousSecurity>
{
    SCPreferences *_userPreferences;
}

- (void).cxx_destruct;
- (id)_signatureValidationFailureKeyWithUrlString:(id)arg1 signature:(id)arg2;
- (id)_publicKey;
- (id)_appVersion;
- (void)_setContentValid:(_Bool)arg1 atPath:(id)arg2;
- (_Bool)_verifyBase64Signature:(id)arg1 contentId:(id)arg2 contentHash:(id)arg3 contentUrlString:(id)arg4 error:(id *)arg5;
@property(retain, nonatomic) NSDictionary *signatureValidationFailures;
- (_Bool)isAllowedToRequestContentWithUrlString:(id)arg1 signature:(id)arg2;
- (_Bool)verifyContentAtPathValid:(id)arg1 error:(id *)arg2;
- (_Bool)verifyResource:(id)arg1 withData:(id)arg2 checksum:(id *)arg3 error:(id *)arg4;
- (_Bool)verifyResource:(id)arg1 withContentPath:(id)arg2 checksum:(id *)arg3 error:(id *)arg4;
- (id)init;
- (id)initWithUserPreferences:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


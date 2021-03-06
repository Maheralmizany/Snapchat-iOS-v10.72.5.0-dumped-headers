//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSData, NSMutableData, NSString;

@interface SCEllipticCurveCrypto : NSObject <NSCoding>
{
    _Bool _isCompressedPublicKey;
    struct ec_key_st *_keyPair;
    int _curve;
    NSData *_publicKey;
    NSMutableData *_privateKey;
    NSString *_publicKeyDERBase64;
}

+ (id)generateKeyPair;
@property(readonly, nonatomic) NSString *publicKeyDERBase64; // @synthesize publicKeyDERBase64=_publicKeyDERBase64;
@property(readonly, nonatomic) NSMutableData *privateKey; // @synthesize privateKey=_privateKey;
@property(readonly, nonatomic) NSData *publicKey; // @synthesize publicKey=_publicKey;
- (void).cxx_destruct;
- (void)updateRawKeyPair:(int)arg1;
- (void)updateECKey:(int)arg1;
- (void)exportPublicKeyToDERBase64;
- (id)sharedSecretForPublicKey:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCurveAndGenerateKeyPair:(int)arg1;
- (id)initForCurve:(int)arg1 publicKey:(id)arg2 privateKey:(id)arg3;
- (void)dealloc;

@end


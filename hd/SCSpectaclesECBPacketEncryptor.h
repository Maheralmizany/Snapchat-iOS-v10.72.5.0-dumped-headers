//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCSpectaclesECBPacketEncryptor : NSObject
{
    void *_encryptorContext;
}

@property(nonatomic) void *encryptorContext; // @synthesize encryptorContext=_encryptorContext;
- (id)encryptMessage:(id)arg1;
- (id)decryptMessage:(id)arg1;
- (_Bool)connectionReady;
- (_Bool)setRxSalt:(id)arg1;
- (_Bool)setTxSalt:(id)arg1;
- (_Bool)setRxNonce:(id)arg1;
- (_Bool)setTxNonce:(id)arg1;
- (_Bool)setEncryptionKey:(id)arg1;
- (void)dealloc;
- (id)init;

@end


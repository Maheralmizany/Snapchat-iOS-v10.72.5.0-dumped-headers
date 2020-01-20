//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSData, NSString;

@interface SCFideliusEncryptedBackupRecord : NSObject <NSCopying, NSCoding>
{
    NSString *_hashedBeta;
    NSData *_encryptedIdentity;
}

@property(readonly, copy, nonatomic) NSData *encryptedIdentity; // @synthesize encryptedIdentity=_encryptedIdentity;
@property(readonly, copy, nonatomic) NSString *hashedBeta; // @synthesize hashedBeta=_hashedBeta;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithHashedBeta:(id)arg1 encryptedIdentity:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

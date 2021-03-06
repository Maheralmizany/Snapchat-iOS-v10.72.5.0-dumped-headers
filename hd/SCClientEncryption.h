//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface SCClientEncryption : NSObject <NSCoding>
{
    NSString *_identifier;
    NSString *_encryptionKey;
    NSString *_initializationVector;
}

@property(readonly, nonatomic) NSString *initializationVector; // @synthesize initializationVector=_initializationVector;
@property(readonly, nonatomic) NSString *encryptionKey; // @synthesize encryptionKey=_encryptionKey;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithEncryptionKey:(id)arg1 initializationVector:(id)arg2;
- (id)init;

@end


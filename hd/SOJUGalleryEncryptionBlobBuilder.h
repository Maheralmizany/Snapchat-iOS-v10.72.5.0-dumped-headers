//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface SOJUGalleryEncryptionBlobBuilder : NSObject
{
    NSString *_encryptionKey;
    NSString *_encryptionIv;
    NSNumber *_encrypted;
}

+ (id)withJUGalleryEncryptionBlob:(id)arg1;
- (void).cxx_destruct;
- (id)setEncrypted:(id)arg1;
- (id)setEncryptionIv:(id)arg1;
- (id)setEncryptionKey:(id)arg1;
- (id)build;
- (id)setEncryptedValue:(_Bool)arg1;

@end


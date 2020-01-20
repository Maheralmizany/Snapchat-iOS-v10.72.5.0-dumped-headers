//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSData, NSString;

@protocol SCKeyServicePersistedKey <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSData *passphrase;
@property(readonly, copy, nonatomic) NSData *initializationVector;
@property(readonly, copy, nonatomic) NSData *masterKey;
@property(readonly, copy, nonatomic) NSString *keyTag;
@property(readonly, copy, nonatomic) NSString *userId;
@end

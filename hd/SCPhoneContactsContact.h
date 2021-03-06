//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCDocObject.h"

#import "NSCopying.h"

@class NSString;

@interface SCPhoneContactsContact : SCDocObject <NSCopying>
{
    NSString *_phoneNumberHash;
    NSString *_displayName;
    double _modificationTimestamp;
    double _addressBookEditionTimestamp;
}

+ (struct SCDocObjectClassFunctionPointer)objectClassFunctionPointer;
+ (id)immutableObjectParse:(const void *)arg1 bufferSize:(unsigned long long)arg2;
+ (const char *)table;
@property(readonly, nonatomic) double addressBookEditionTimestamp; // @synthesize addressBookEditionTimestamp=_addressBookEditionTimestamp;
@property(readonly, nonatomic) double modificationTimestamp; // @synthesize modificationTimestamp=_modificationTimestamp;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSString *phoneNumberHash; // @synthesize phoneNumberHash=_phoneNumberHash;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPhoneNumberHash:(id)arg1 displayName:(id)arg2 modificationTimestamp:(double)arg3 addressBookEditionTimestamp:(double)arg4;

@end


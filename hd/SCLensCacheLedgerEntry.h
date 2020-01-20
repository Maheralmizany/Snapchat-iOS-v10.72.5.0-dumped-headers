//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCLensCacheLedgerEntry.h"

@class NSDate, NSString, SCLensCacheMetadata;

@interface SCLensCacheLedgerEntry : NSObject <SCLensCacheLedgerEntry>
{
    SCLensCacheMetadata *_metadata;
    NSDate *_contentModificationDate;
    NSDate *_contentLastAccessDate;
    NSDate *_contentLastUseDate;
    long long _accessCount;
    NSString *_ledgerKey;
    NSString *_storageMethod;
    unsigned long long _sizeInBytes;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
@property(readonly, nonatomic) unsigned long long sizeInBytes; // @synthesize sizeInBytes=_sizeInBytes;
@property(readonly, copy, nonatomic) NSString *storageMethod; // @synthesize storageMethod=_storageMethod;
@property(readonly, copy, nonatomic) NSString *ledgerKey; // @synthesize ledgerKey=_ledgerKey;
@property(readonly, nonatomic) long long accessCount; // @synthesize accessCount=_accessCount;
@property(readonly, copy, nonatomic) NSDate *contentLastUseDate; // @synthesize contentLastUseDate=_contentLastUseDate;
@property(readonly, copy, nonatomic) NSDate *contentLastAccessDate; // @synthesize contentLastAccessDate=_contentLastAccessDate;
@property(readonly, copy, nonatomic) NSDate *contentModificationDate; // @synthesize contentModificationDate=_contentModificationDate;
@property(readonly, copy, nonatomic) SCLensCacheMetadata *metadata; // @synthesize metadata=_metadata;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setUInt64:(unsigned long long)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setSInt64:(long long)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMetadata:(id)arg1 contentModificationDate:(id)arg2 contentLastAccessDate:(id)arg3 contentLastUseDate:(id)arg4 accessCount:(long long)arg5 ledgerKey:(id)arg6 storageMethod:(id)arg7 sizeInBytes:(unsigned long long)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


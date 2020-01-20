//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSDictionary;

@interface SCChecksums : NSObject <NSCoding>
{
    NSDictionary *_checksums;
    long long _missingReason;
    long long _storiesSyncMetadataVersion;
}

@property(readonly, nonatomic) long long storiesSyncMetadataVersion; // @synthesize storiesSyncMetadataVersion=_storiesSyncMetadataVersion;
@property(readonly, nonatomic) long long missingReason; // @synthesize missingReason=_missingReason;
@property(readonly, copy, nonatomic) NSDictionary *checksums; // @synthesize checksums=_checksums;
- (void).cxx_destruct;
- (id)toStoriesSyncMetadata;
- (_Bool)isStoriesChecksumsMissing;
- (id)allUpdatesChecksumsString;
- (id)checksumForKey:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithChecksums:(id)arg1 missingReason:(long long)arg2 storiesSyncMetadataVersion:(long long)arg3;

@end


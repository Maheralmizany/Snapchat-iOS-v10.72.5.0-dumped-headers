//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCArcadiaCategory.h"
#import "SCLensDiscoveryCategory.h"

@class NSString;

@interface SCArcadiaCategory : NSObject <SCLensDiscoveryCategory, SCArcadiaCategory>
{
    _Bool _hasMore;
    NSString *_title;
    NSString *_tag;
    unsigned long long _count;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
@property(readonly, nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
@property(readonly, copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setUInt64:(unsigned long long)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setBool:(_Bool)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTitle:(id)arg1 tag:(id)arg2 count:(unsigned long long)arg3 hasMore:(_Bool)arg4;
@property(readonly, copy, nonatomic) NSString *categoryId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


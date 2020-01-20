//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCBitmojiFetchSelfieRequest.h"

@class NSNumber, NSString;

@interface SCBitmojiFetchSelfieRequest : NSObject <SCBitmojiFetchSelfieRequest>
{
    _Bool _willAcceptPriorAvatarVersion;
    NSString *_userId;
    NSString *_avatarId;
    NSString *_dratiniId;
    NSNumber *_scale;
    unsigned long long _modifier;
    unsigned long long _type;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
@property(readonly, nonatomic) _Bool willAcceptPriorAvatarVersion; // @synthesize willAcceptPriorAvatarVersion=_willAcceptPriorAvatarVersion;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) unsigned long long modifier; // @synthesize modifier=_modifier;
@property(readonly, copy, nonatomic) NSNumber *scale; // @synthesize scale=_scale;
@property(readonly, copy, nonatomic) NSString *dratiniId; // @synthesize dratiniId=_dratiniId;
@property(readonly, copy, nonatomic) NSString *avatarId; // @synthesize avatarId=_avatarId;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setSInt32:(int)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setBool:(_Bool)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUserId:(id)arg1 avatarId:(id)arg2 dratiniId:(id)arg3 scale:(id)arg4 modifier:(unsigned long long)arg5 type:(unsigned long long)arg6 willAcceptPriorAvatarVersion:(_Bool)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDate, NSDictionary, NSString, SCMediaEncryptionInfo, SCStoriesBoltContentInfo;

@interface SCStoriesMediaInfo : NSObject <NSCopying>
{
    _Bool _isZipped;
    _Bool _needsAuth;
    _Bool _isEligibleForStreaming;
    NSString *_cacheKey;
    NSString *_mediaId;
    SCMediaEncryptionInfo *_encryptionInfo;
    long long _type;
    NSString *_appUrl;
    NSString *_directToStorageUrl;
    NSDate *_expirationDate;
    NSDictionary *_rulefileParams;
    SCStoriesBoltContentInfo *_boltContentInfo;
    unsigned long long _storyType;
}

@property(readonly, nonatomic) unsigned long long storyType; // @synthesize storyType=_storyType;
@property(readonly, nonatomic) _Bool isEligibleForStreaming; // @synthesize isEligibleForStreaming=_isEligibleForStreaming;
@property(readonly, copy, nonatomic) SCStoriesBoltContentInfo *boltContentInfo; // @synthesize boltContentInfo=_boltContentInfo;
@property(readonly, copy, nonatomic) NSDictionary *rulefileParams; // @synthesize rulefileParams=_rulefileParams;
@property(readonly, copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, copy, nonatomic) NSString *directToStorageUrl; // @synthesize directToStorageUrl=_directToStorageUrl;
@property(readonly, copy, nonatomic) NSString *appUrl; // @synthesize appUrl=_appUrl;
@property(readonly, nonatomic) _Bool needsAuth; // @synthesize needsAuth=_needsAuth;
@property(readonly, nonatomic) _Bool isZipped; // @synthesize isZipped=_isZipped;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) SCMediaEncryptionInfo *encryptionInfo; // @synthesize encryptionInfo=_encryptionInfo;
@property(readonly, copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(readonly, copy, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCacheKey:(id)arg1 mediaId:(id)arg2 encryptionInfo:(id)arg3 type:(long long)arg4 isZipped:(_Bool)arg5 needsAuth:(_Bool)arg6 appUrl:(id)arg7 directToStorageUrl:(id)arg8 expirationDate:(id)arg9 rulefileParams:(id)arg10 boltContentInfo:(id)arg11 isEligibleForStreaming:(_Bool)arg12 storyType:(unsigned long long)arg13;

@end


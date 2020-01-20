//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SCStoriesThumbnailMedia : NSObject <NSCopying>
{
    _Bool _needsAuth;
    NSString *_key;
    NSString *_iv;
    NSString *_url;
    NSString *_originalMediaId;
    NSString *_largeThumbnailUrl;
    NSString *_clientId;
}

@property(readonly, copy, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(readonly, copy, nonatomic) NSString *largeThumbnailUrl; // @synthesize largeThumbnailUrl=_largeThumbnailUrl;
@property(readonly, copy, nonatomic) NSString *originalMediaId; // @synthesize originalMediaId=_originalMediaId;
@property(readonly, nonatomic) _Bool needsAuth; // @synthesize needsAuth=_needsAuth;
@property(readonly, copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) NSString *iv; // @synthesize iv=_iv;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithKey:(id)arg1 iv:(id)arg2 url:(id)arg3 needsAuth:(_Bool)arg4 originalMediaId:(id)arg5 largeThumbnailUrl:(id)arg6 clientId:(id)arg7;

@end


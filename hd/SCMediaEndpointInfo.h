//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface SCMediaEndpointInfo : NSObject <NSCopying, NSCoding>
{
    _Bool _shouldAuthenticate;
    _Bool _shouldDecrypt;
    NSString *_requestMethod;
    NSString *_mediaIV;
    NSString *_mediaKey;
}

@property(readonly, copy, nonatomic) NSString *mediaKey; // @synthesize mediaKey=_mediaKey;
@property(readonly, copy, nonatomic) NSString *mediaIV; // @synthesize mediaIV=_mediaIV;
@property(readonly, nonatomic) _Bool shouldDecrypt; // @synthesize shouldDecrypt=_shouldDecrypt;
@property(readonly, nonatomic) _Bool shouldAuthenticate; // @synthesize shouldAuthenticate=_shouldAuthenticate;
@property(readonly, copy, nonatomic) NSString *requestMethod; // @synthesize requestMethod=_requestMethod;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequestMethod:(id)arg1 shouldAuthenticate:(_Bool)arg2 shouldDecrypt:(_Bool)arg3 mediaIV:(id)arg4 mediaKey:(id)arg5;
- (id)initWithCoder:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SPCacheSettings : NSObject
{
    unsigned long long _cacheLimit;
    unsigned long long _ttl;
    NSString *_cachePath;
}

@property(readonly, nonatomic) NSString *cachePath; // @synthesize cachePath=_cachePath;
@property(readonly, nonatomic) unsigned long long ttl; // @synthesize ttl=_ttl;
@property(readonly, nonatomic) unsigned long long cacheLimit; // @synthesize cacheLimit=_cacheLimit;
- (void).cxx_destruct;
- (id)description;
- (id)initCacheLimit:(unsigned long long)arg1 ttl:(unsigned long long)arg2 cachePath:(id)arg3;

@end


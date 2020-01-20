//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SCCacheSizePolicy : NSObject
{
    NSString *_cacheName;
    unsigned long long _defaultSizeMB;
    _Bool _inLowDiskMode;
    CDUnknownBlockType _evictPolicyBlock;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType evictPolicyBlock; // @synthesize evictPolicyBlock=_evictPolicyBlock;
- (void).cxx_destruct;
- (unsigned long long)hardSizeLimit;
- (unsigned long long)sizeLimit;
- (id)initWithName:(id)arg1 defaultSizeMB:(unsigned long long)arg2 evictPolicyBlock:(CDUnknownBlockType)arg3 diskAvailabilityMode:(unsigned long long)arg4;
- (id)initWithName:(id)arg1 defaultSizeMB:(unsigned long long)arg2 evictionPolicyBlock:(CDUnknownBlockType)arg3;
- (id)initWithName:(id)arg1 defaultSizeMB:(unsigned long long)arg2;

@end

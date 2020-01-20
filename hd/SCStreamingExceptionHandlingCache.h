//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCStreamingCaching.h"

@class NSString;

@interface SCStreamingExceptionHandlingCache : NSObject <SCStreamingCaching>
{
    id <SCStreamingCaching> _cache;
}

- (void).cxx_destruct;
- (void)removeAllObjects;
- (void)setObject:(id)arg1 dataEncoding:(CDUnknownBlockType)arg2 forKey:(id)arg3 expiration:(id)arg4 block:(CDUnknownBlockType)arg5;
- (void)objectForKey:(id)arg1 dataDecoding:(CDUnknownBlockType)arg2 block:(CDUnknownBlockType)arg3;
- (id)initWithCache:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCCacheKeyGenerator.h"

@class NSString;

@interface SCMemoryCacheKeyGenerator : NSObject <SCCacheKeyGenerator>
{
    NSString *_combinedKeyPrefix;
}

@property(readonly, copy, nonatomic) NSString *combinedKeyPrefix; // @synthesize combinedKeyPrefix=_combinedKeyPrefix;
- (void).cxx_destruct;
- (id)keySet:(id)arg1;
- (id)key:(id)arg1;
- (id)initWithName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


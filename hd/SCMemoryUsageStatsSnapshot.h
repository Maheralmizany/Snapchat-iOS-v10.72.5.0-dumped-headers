//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface SCMemoryUsageStatsSnapshot : NSObject <NSCopying>
{
    long long _memoryUsageXcodeInBytes;
    long long _memoryUsageInstrumentsInBytes;
    long long _memoryUsageMallocatedInBytes;
    long long _memoryUsageLegacyUsedInBytes;
    long long _memoryUsageFreeInBytes;
}

@property(readonly, nonatomic) long long memoryUsageFreeInBytes; // @synthesize memoryUsageFreeInBytes=_memoryUsageFreeInBytes;
@property(readonly, nonatomic) long long memoryUsageLegacyUsedInBytes; // @synthesize memoryUsageLegacyUsedInBytes=_memoryUsageLegacyUsedInBytes;
@property(readonly, nonatomic) long long memoryUsageMallocatedInBytes; // @synthesize memoryUsageMallocatedInBytes=_memoryUsageMallocatedInBytes;
@property(readonly, nonatomic) long long memoryUsageInstrumentsInBytes; // @synthesize memoryUsageInstrumentsInBytes=_memoryUsageInstrumentsInBytes;
@property(readonly, nonatomic) long long memoryUsageXcodeInBytes; // @synthesize memoryUsageXcodeInBytes=_memoryUsageXcodeInBytes;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMemoryUsageXcodeInBytes:(long long)arg1 memoryUsageInstrumentsInBytes:(long long)arg2 memoryUsageMallocatedInBytes:(long long)arg3 memoryUsageLegacyUsedInBytes:(long long)arg4 memoryUsageFreeInBytes:(long long)arg5;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCAstLowIRVariableAllocator : NSObject
{
    long long _counter;
    struct unordered_map<long, NSString *, std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<std::__1::pair<const long, NSString *>>> _variableDescriptions;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)allocatedCount;
- (id)descriptionForVariable:(long long)arg1;
- (void)setDescription:(id)arg1 forVariable:(long long)arg2;
- (long long)acquire;

@end

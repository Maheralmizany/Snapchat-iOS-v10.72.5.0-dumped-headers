//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSObject<OS_dispatch_group>, NSString, SCCacheManager;

@protocol SCManagedDatastore <NSObject>
- (NSDictionary *)reportMetrics;
- (void)removeAllUserSessionDataAsync:(SCCacheManager *)arg1;
- (void)removeExpiredContentAsync:(SCCacheManager *)arg1 reason:(unsigned long long)arg2 dispatchGroup:(NSObject<OS_dispatch_group> *)arg3;
- (void)handleEmergencyDiskConditionWithDispatchGroup:(NSObject<OS_dispatch_group> *)arg1;
- (NSString *)kindName;
@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSObject<OS_dispatch_queue>;

@protocol SCSnapchatterPublicInfoFetcher
- (void)snapchattersWithUserIds:(NSArray *)arg1 requestSource:(long long)arg2 completionQueue:(NSObject<OS_dispatch_queue> *)arg3 completionHandler:(void (^)(NSArray *, NSError *))arg4;
@end


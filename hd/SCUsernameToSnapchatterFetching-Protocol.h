//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSObject<OS_dispatch_queue>, NSString;

@protocol SCUsernameToSnapchatterFetching
- (void)snapchattersWithUsernames:(NSArray *)arg1 completionQueue:(NSObject<OS_dispatch_queue> *)arg2 completionHandler:(void (^)(NSDictionary *, NSError *))arg3;
- (void)snapchatterWithUsername:(NSString *)arg1 completionQueue:(NSObject<OS_dispatch_queue> *)arg2 completionHandler:(void (^)(SCSnapchatter *, NSError *))arg3;
@end


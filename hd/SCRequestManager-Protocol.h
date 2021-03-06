//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString, SCRequest;

@protocol SCRequestManager <NSObject>
- (void)boostRequestWithKey:(NSString *)arg1 toHigherPriority:(long long)arg2;
- (void)boostRequestWithKey:(NSString *)arg1 toHigherConnectivity:(long long)arg2;
- (void)cancelRequestWithKey:(NSString *)arg1;
- (void)submitRequest:(SCRequest *)arg1 progressiveUpdateQueue:(NSObject<OS_dispatch_queue> *)arg2 progressiveUpdateBlock:(void (^)(NSError *, NSDictionary *, long long, NSData *))arg3;
- (void)submitRequest:(SCRequest *)arg1 completionQueue:(NSObject<OS_dispatch_queue> *)arg2 completionBlock:(void (^)(SCRequest *, NSHTTPURLResponse *, id, NSError *))arg3;
- (void)submitRequest:(SCRequest *)arg1 successQueue:(NSObject<OS_dispatch_queue> *)arg2 failureQueue:(NSObject<OS_dispatch_queue> *)arg3 successBlock:(void (^)(SCRequest *, NSHTTPURLResponse *, id))arg4 failureBlock:(void (^)(SCRequest *, NSHTTPURLResponse *, NSError *))arg5;
@end


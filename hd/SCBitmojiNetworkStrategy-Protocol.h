//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSObject<OS_dispatch_queue>, NSString, SCBitmojiMutableMetricsTracker, SCBitmojiNetworkPolicy, SOJUBitmojiImageRequest;

@protocol SCBitmojiNetworkStrategy <NSObject>
- (_Bool)issueMultiFetch:(NSObject<OS_dispatch_queue> *)arg1 completionBlock:(void (^)(_Bool, unsigned long long))arg2;
- (_Bool)startMultiFetch;
- (_Bool)issueImageFetch:(SOJUBitmojiImageRequest *)arg1 requestKey:(NSString *)arg2 contexts:(NSArray *)arg3 tracker:(SCBitmojiMutableMetricsTracker *)arg4 completionQueue:(NSObject<OS_dispatch_queue> *)arg5 completionBlock:(void (^)(NSData *, NSURLResponse *, NSError *))arg6;
- (unsigned long long)endpoint;
- (unsigned long long)fetchType;
- (SCBitmojiNetworkPolicy *)policyWithMultiOverride:(unsigned long long)arg1 andMaxInflightOverride:(unsigned long long)arg2;
@end


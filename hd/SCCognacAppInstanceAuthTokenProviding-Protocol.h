//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString;

@protocol SCCognacAppInstanceAuthTokenProviding <NSObject>
- (void)getAppInstanceAuthTokenWithAppInstanceId:(NSString *)arg1 completionQueue:(NSObject<OS_dispatch_queue> *)arg2 completionBlock:(void (^)(NSError *, NSString *))arg3;
@end


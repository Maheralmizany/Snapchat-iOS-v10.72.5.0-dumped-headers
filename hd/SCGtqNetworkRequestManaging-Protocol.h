//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCGtqNetworkRequest;

@protocol SCGtqNetworkRequestManaging <NSObject>
- (void)submitServeNetworkRequest:(SCGtqNetworkRequest *)arg1 completionPerformer:(id <SCPerforming>)arg2 success:(void (^)(id, NSDictionary *))arg3 failure:(void (^)(NSError *, long long, NSDictionary *))arg4;
@end


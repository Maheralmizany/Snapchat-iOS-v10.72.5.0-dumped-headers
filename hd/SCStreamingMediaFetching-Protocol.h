//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSValue, SCStreamingRequestInfo;

@protocol SCStreamingMediaFetching <NSObject>
- (id <SCCanceling>)fetchMediaDataForRequestInfo:(SCStreamingRequestInfo *)arg1 byteRangeValue:(NSValue *)arg2 completionQueue:(NSObject<OS_dispatch_queue> *)arg3 completion:(void (^)(NSError *, NSData *))arg4;
@end


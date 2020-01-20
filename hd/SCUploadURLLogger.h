//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCUploadURLLogger : NSObject
{
}

+ (id)shared;
- (void)logFetchedUploadURLsFromNetwork:(long long)arg1 count:(long long)arg2;
- (void)logRestoredUploadURLsFromDisk:(long long)arg1 count:(long long)arg2;
- (void)logFetchUploadLocationBatchEndWithUniqueId:(id)arg1 didSucceed:(_Bool)arg2;
- (void)logFetchUploadLocationBatchStartWithFetchType:(long long)arg1 uniqueId:(id)arg2;
- (void)logGetUploadLocationWithFetchType:(long long)arg1 didSucceed:(_Bool)arg2;
- (void)uploadDidFailWithMediaId:(id)arg1 response:(id)arg2 clientError:(id)arg3;
- (void)uploadDidSucceedWithMediaId:(id)arg1;
- (void)uploadDidStart:(unsigned long long)arg1 mediaId:(id)arg2 numBytes:(long long)arg3;

@end

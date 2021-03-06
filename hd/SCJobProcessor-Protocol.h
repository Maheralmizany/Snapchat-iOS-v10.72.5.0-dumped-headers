//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JobConfig, NSData;

@protocol SCJobProcessor <NSObject>
- (void)processJobWithInput:(NSData *)arg1 onComplete:(void (^)(long long, NSError *))arg2;

@optional
- (void)deleteJobWithJobConfig:(JobConfig *)arg1 jobData:(NSData *)arg2 jobDeletionReason:(long long)arg3;
@end


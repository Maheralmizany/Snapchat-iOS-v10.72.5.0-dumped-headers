//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCStoriesPlaybackDataProviding.h"

@class NSObject<OS_dispatch_queue>, NSString;

@protocol SCStoriesDataProviding <SCStoriesPlaybackDataProviding>
- (void)fetchStoryRemotelyWithUsername:(NSString *)arg1 userId:(NSString *)arg2 completionQueue:(NSObject<OS_dispatch_queue> *)arg3 completion:(void (^)(SCStoriesSummaryInfo *, NSError *))arg4;
- (void)fetchStorySummaryInfoWithUsername:(NSString *)arg1 userId:(NSString *)arg2 completionQueue:(NSObject<OS_dispatch_queue> *)arg3 completion:(void (^)(SCStoriesSummaryInfo *, NSError *))arg4;
@end


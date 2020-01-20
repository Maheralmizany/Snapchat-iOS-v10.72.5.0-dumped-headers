//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSObject<OS_dispatch_queue>, NSString;

@protocol SCStoriesFSNNetworkRequesting <NSObject>
- (void)fetchPublicStoriesWithSharedId:(NSString *)arg1 successQueue:(NSObject<OS_dispatch_queue> *)arg2 successBlock:(void (^)(SCRequest *, NSHTTPURLResponse *, id))arg3 failureQueue:(NSObject<OS_dispatch_queue> *)arg4 failureBlock:(void (^)(SCRequest *, NSHTTPURLResponse *, NSError *))arg5;
- (void)fetchStoryWithStoryId:(NSString *)arg1 completionQueue:(NSObject<OS_dispatch_queue> *)arg2 completion:(void (^)(SOJUBroadcastPreviewStoryResponse *, NSError *))arg3;
- (void)deleteStoryWithSharedStoryGroupId:(NSString *)arg1 storyID:(NSString *)arg2 successQueue:(NSObject<OS_dispatch_queue> *)arg3 successBlock:(void (^)(SCRequest *, NSHTTPURLResponse *, id))arg4 failureQueue:(NSObject<OS_dispatch_queue> *)arg5 failureBlock:(void (^)(SCRequest *, NSHTTPURLResponse *, NSError *))arg6;
- (void)deleteStoryWithStoryId:(NSString *)arg1 archiveOnly:(_Bool)arg2 additionalHttpHeaders:(NSDictionary *)arg3 successQueue:(NSObject<OS_dispatch_queue> *)arg4 successBlock:(void (^)(SCRequest *, NSHTTPURLResponse *, id))arg5 failureQueue:(NSObject<OS_dispatch_queue> *)arg6 failureBlock:(void (^)(SCRequest *, NSHTTPURLResponse *, NSError *))arg7;
@end


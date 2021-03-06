//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSSet, SCCancelableRequest, SCCompositeNetworkImageModel;

@protocol SCCompositeNetworkImageDownloading <NSObject>
@property(readonly) _Bool isRequestCancelingEnabled;
- (void)removeObjectsFromCacheWithKeys:(NSSet *)arg1;
- (void)resetCache;
- (SCCancelableRequest *)loadCompositeNetworkImage:(SCCompositeNetworkImageModel *)arg1 completion:(void (^)(NSObject<NSCopying> *, UIImage *, _Bool))arg2 failure:(void (^)(NSObject<NSCopying> *, NSError *))arg3 callbackQueue:(NSObject<OS_dispatch_queue> *)arg4;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSObject<OS_dispatch_queue>, NSString, SCCustomStoryCreationMetadata, SCCustomStoryUpdateMetadata;

@protocol SCCustomStoriesDataMutating <NSObject>
@property(retain, nonatomic) id <SCLegacyCustomStoriesDataMutating> legacyDataMutator;
- (void)updateLocalMyMostRecentPostTimestampWithCustomStoriesMetadata:(NSArray *)arg1;
- (void)createCustomStoryWithMetadata:(SCCustomStoryCreationMetadata *)arg1 creationSource:(long long)arg2 completionQueue:(NSObject<OS_dispatch_queue> *)arg3 successBlock:(void (^)(NSString *))arg4 failureBlock:(void (^)(NSString *, long long))arg5;
- (void)updateCustomStoryWithMetadata:(SCCustomStoryUpdateMetadata *)arg1 completionQueue:(NSObject<OS_dispatch_queue> *)arg2 successBlock:(void (^)(void))arg3 failureBlock:(void (^)(NSString *, long long))arg4;
- (void)leaveCustomStoryWithPublicationId:(NSString *)arg1 leaveByBlocking:(_Bool)arg2 completionQueue:(NSObject<OS_dispatch_queue> *)arg3 completionBlock:(void (^)(_Bool))arg4;
- (void)removeCustomStoryWithPublicationId:(NSString *)arg1 completionQueue:(NSObject<OS_dispatch_queue> *)arg2 completionBlock:(void (^)(_Bool))arg3;
@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCQueuePerformer;

@protocol SCManagedDataSource <NSObject>
@property(readonly, nonatomic) SCQueuePerformer *performer;
@property(readonly, nonatomic) _Bool isStreaming;
- (void)stopStreaming;
- (void)startStreaming;
@end

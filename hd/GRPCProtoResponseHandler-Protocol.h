//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GPBMessage, NSDictionary, NSError, NSObject<OS_dispatch_queue>;

@protocol GRPCProtoResponseHandler <NSObject>
@property(readonly) NSObject<OS_dispatch_queue> *dispatchQueue;

@optional
- (void)didCloseWithTrailingMetadata:(NSDictionary *)arg1 error:(NSError *)arg2;
- (void)didReceiveProtoMessage:(GPBMessage *)arg1;
- (void)didReceiveInitialMetadata:(NSDictionary *)arg1;
@end


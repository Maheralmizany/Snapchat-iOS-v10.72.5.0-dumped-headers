//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCFuture;

@protocol SCManagedURLProtocol <NSObject>
- (SCFuture *)metadataForKey:(NSString *)arg1;
- (void)adjustReferenceCount:(NSString *)arg1 delta:(long long)arg2;
- (void)flushMetadata:(NSString *)arg1;
@end

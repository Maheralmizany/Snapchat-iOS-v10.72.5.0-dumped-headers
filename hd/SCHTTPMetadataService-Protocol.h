//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, SCHTTPRequest, SCHTTPRequestContext;

@protocol SCHTTPMetadataService <NSObject>
- (id <SCHTTPRequestToken>)submitRequest:(SCHTTPRequest *)arg1 context:(SCHTTPRequestContext *)arg2 queue:(NSObject<OS_dispatch_queue> *)arg3 onComplete:(void (^)(SCHTTPRequest *, unsigned long long, NSHTTPURLResponse *, NSData *, NSError *))arg4;
@end


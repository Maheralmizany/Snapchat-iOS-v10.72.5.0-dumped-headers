//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCopying.h"
#import "NSObject.h"

@class NSError, NSHTTPURLResponse, SCRequest;

@protocol SCNetworkInterceptor <NSObject, NSCopying>
- (void)interceptWithRequest:(SCRequest *)arg1 response:(NSHTTPURLResponse *)arg2 data:(id)arg3 error:(NSError *)arg4;
@end


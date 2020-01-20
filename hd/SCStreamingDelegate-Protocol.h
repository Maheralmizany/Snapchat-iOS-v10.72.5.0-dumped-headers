//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSString, SCStreamingRequestInfo, SCWebProxyRequest;

@protocol SCStreamingDelegate <NSObject>

@optional
- (NSString *)cacheKeyForRequestInfo:(SCStreamingRequestInfo *)arg1 request:(SCWebProxyRequest *)arg2;
- (_Bool)shouldUseStreamingRequestManagerAPIForRequestInfo:(SCStreamingRequestInfo *)arg1 request:(SCWebProxyRequest *)arg2;
- (void)didFullyCacheResourceData:(NSData *)arg1 forStreamingRequestInfo:(SCStreamingRequestInfo *)arg2 request:(SCWebProxyRequest *)arg3;
- (NSDictionary *)transformResponseHeaders:(NSDictionary *)arg1 forStreamingRequestInfo:(SCStreamingRequestInfo *)arg2;
- (_Bool)shouldTransformResponseHeadersForStreamingRequestInfo:(SCStreamingRequestInfo *)arg1;
@end

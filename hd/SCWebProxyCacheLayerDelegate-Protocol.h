//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSString, SCWebProxyCacheLayer, SCWebProxyRequest;

@protocol SCWebProxyCacheLayerDelegate <NSObject>
- (_Bool)proxyCacheLayer:(SCWebProxyCacheLayer *)arg1 shouldDisableCacheWritesForProxyRequest:(SCWebProxyRequest *)arg2 responseHeaders:(NSDictionary *)arg3;
- (void)proxyCacheLayer:(SCWebProxyCacheLayer *)arg1 didFullyCacheResourceForProxyRequest:(SCWebProxyRequest *)arg2 resourceData:(NSData *)arg3;
- (NSString *)proxyCacheLeyer:(SCWebProxyCacheLayer *)arg1 cacheKeyForProxyRequest:(SCWebProxyRequest *)arg2;
@end

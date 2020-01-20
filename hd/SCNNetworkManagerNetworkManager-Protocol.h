//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSDictionary, NSString, SCNMdpCommonRequestContext;

@protocol SCNNetworkManagerNetworkManager
- (void)updateRankingInfo:(NSString *)arg1 priority:(long long)arg2 connectivity:(long long)arg3 contexts:(NSArray *)arg4;
- (void)cancelRequest:(NSString *)arg1;
- (void)submitProgressiveDownloadRequest:(id <SCNNetworkManagerUrlRequest>)arg1 requestKey:(NSString *)arg2 requestContext:(SCNMdpCommonRequestContext *)arg3 priority:(long long)arg4 connectivity:(long long)arg5 httpHeaders:(NSDictionary *)arg6 isStreaming:(_Bool)arg7 callback:(id <SCNNetworkManagerProgressiveDownloadCallback>)arg8;
- (void)submit:(id <SCNNetworkManagerUrlRequest>)arg1 callback:(id <SCNNetworkManagerUrlRequestCallback>)arg2 requestContext:(SCNMdpCommonRequestContext *)arg3 priority:(long long)arg4 connectivity:(long long)arg5 httpHeaders:(NSDictionary *)arg6 requestMediaType:(long long)arg7;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAssetResourceLoadingRequest;

@protocol SCStreamingResourceLoaderRequestHandler <NSObject>
- (void)stop;
- (void)boostPriority:(long long)arg1;
- (void)cancelLoadingRequest:(AVAssetResourceLoadingRequest *)arg1;
- (_Bool)handleDataLoadingRequest:(AVAssetResourceLoadingRequest *)arg1;
- (_Bool)handleContentInfoLoadingRequest:(AVAssetResourceLoadingRequest *)arg1;
@end


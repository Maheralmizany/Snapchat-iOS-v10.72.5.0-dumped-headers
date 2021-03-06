//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCStreamingMediaManager : NSObject
{
    id <SCStreamingResponseCaching> _responseCache;
    id <SCStreamingRequestExtraInfoProviding> _extraInfoProvider;
    id <SCWebProxyRequestHandling> _requestHandler;
    id <SCStreamingZipDataCaching> _zipDataCache;
    id <SCStreamingDelegate> _longformStreamingDelegate;
}

@property(readonly, nonatomic) id <SCStreamingDelegate> longformStreamingDelegate; // @synthesize longformStreamingDelegate=_longformStreamingDelegate;
@property(readonly, nonatomic) id <SCStreamingZipDataCaching> zipDataCache; // @synthesize zipDataCache=_zipDataCache;
- (void).cxx_destruct;
- (void)clearCache;
- (id)newMediaFetcherWithStreamingDelegate:(id)arg1;
- (id)newResourceLoaderDelegateWithStreamingDelegate:(id)arg1;
- (id)newURLProviderWithStreamingDelegate:(id)arg1;
- (id)newURLProvider;
- (id)initWithCache:(id)arg1 cacheTTL:(double)arg2 requestManager:(id)arg3 snapTokenProvider:(id)arg4;

@end


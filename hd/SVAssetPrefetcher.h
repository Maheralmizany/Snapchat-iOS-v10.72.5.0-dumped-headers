//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SVAssetFetcher, SVAssetFetcherCommand;

@interface SVAssetPrefetcher : NSObject
{
    _Bool _prefetching;
    long long _direction;
    SVAssetFetcherCommand *_prefetchingCommand;
    SVAssetFetcher *_assetFetcher;
    long long _currentIndex;
    id <SVAssetPrefetcherDataSource> _dataSource;
}

@property(nonatomic) __weak id <SVAssetPrefetcherDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) SVAssetFetcher *assetFetcher; // @synthesize assetFetcher=_assetFetcher;
- (void).cxx_destruct;
- (void)prefetch;
- (void)stopPrefetching;
- (void)startPrefetching:(id)arg1;
- (id)init;

@end

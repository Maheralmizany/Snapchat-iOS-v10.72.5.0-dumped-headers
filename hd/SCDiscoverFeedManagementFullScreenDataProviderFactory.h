//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCDiscoverFeedManagementFullScreenViewDataCoordinator, SCUserSession;

@interface SCDiscoverFeedManagementFullScreenDataProviderFactory : NSObject
{
    SCDiscoverFeedManagementFullScreenViewDataCoordinator *_discoverFeedManagementFullScreenDataCoordinator;
    id <SCSnapchattersDataFetching> _snapchattersDataFetching;
    id <SCSnapchatterPublicInfoFetcher> _snapchatterPublicInfoFetcher;
    SCUserSession *_userSession;
    id <SCImageDownloading> _imageDownloader;
}

- (void).cxx_destruct;
- (id)sectionDataProviderForEnum:(unsigned long long)arg1;
- (id)initWithDiscoverFeedManagementFullScreenDataCoordinator:(id)arg1 snapchattersDataFetcher:(id)arg2 snapchatterPublicInfoFetcher:(id)arg3 userSession:(id)arg4 imageDownloader:(id)arg5;

@end

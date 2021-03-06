//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCOperaPlaylistItemPrefetching.h"

@class NSDictionary, NSMutableArray, NSString;

@interface SCOperaPlaylistItemPrefetcher : NSObject <SCOperaPlaylistItemPrefetching>
{
    NSMutableArray *_currentRequests;
    NSDictionary *_prefetchRequestHandlerMap;
    id <SCOperaPrefetcherSettingsProvider> _settingsProvider;
}

- (void).cxx_destruct;
- (void)prefetch:(id)arg1;
- (id)prefetchSizes;
- (id)initWithPrefetchRequestHandlers:(id)arg1 settingsProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


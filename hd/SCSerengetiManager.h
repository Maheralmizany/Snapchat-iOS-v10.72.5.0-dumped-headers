//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCSerengetiRegistry, SCSerengetiWebViewCacheUpdater;

@interface SCSerengetiManager : NSObject
{
    SCSerengetiWebViewCacheUpdater *_webViewCacheUpdater;
    SCSerengetiRegistry *_registry;
    id <SCCache> _cache;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SCSerengetiWebViewCacheUpdater *webViewCacheUpdater;
@property(readonly, nonatomic) SCSerengetiRegistry *registry;
- (id)cache;

@end


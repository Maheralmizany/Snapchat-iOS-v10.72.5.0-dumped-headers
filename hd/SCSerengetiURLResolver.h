//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCSerengetiRegistry, SCUserSession, SGTILink;

@interface SCSerengetiURLResolver : NSObject
{
    SGTILink *_link;
    NSString *_registryId;
    SCSerengetiRegistry *_registry;
    SCUserSession *_userSession;
    _Bool _cancelled;
    id <SCSerengetiURLResolverDelegate> _delegate;
}

@property(nonatomic) __weak id <SCSerengetiURLResolverDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cancel;
- (void)start;
- (void)_didLoadResolvedService:(id)arg1 shouldRevalidate:(_Bool)arg2 didReloadRegistry:(_Bool)arg3;
- (void)_reloadRegistryWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithLink:(id)arg1 registryId:(id)arg2 registry:(id)arg3 userSession:(id)arg4;

@end


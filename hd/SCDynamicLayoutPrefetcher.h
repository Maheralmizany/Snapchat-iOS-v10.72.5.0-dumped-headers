//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCDiscoverFeedPrefetching.h"

@class NSDate, NSString, SCDynamicLayoutMediaPrefetcher, SCLazy, SCSearchQuery;

@interface SCDynamicLayoutPrefetcher : NSObject <SCDiscoverFeedPrefetching>
{
    SCLazy *_dynamicLayoutQueryCoordinator;
    SCSearchQuery *_previousQuery;
    NSDate *_lastQueryDate;
    SCDynamicLayoutMediaPrefetcher *_dynamicLayoutMediaPrefetcher;
}

- (void).cxx_destruct;
- (void)prefetchWithData:(id)arg1;
- (id)prefetchableDataFromViewModel:(id)arg1;
- (void)handlePrefetchWithContext:(id)arg1 sectionType:(id)arg2;
- (id)initWithDynamicLayoutQueryCoordinator:(id)arg1 dynamicLayoutMediaPrefetcher:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


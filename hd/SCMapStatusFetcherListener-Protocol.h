//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol SCMapStatusFetcherListener <NSObject>

@optional
- (void)mapStatusFetcherDidFailToLoadMyStatus:(id <SCMapStatusFetcher>)arg1;
- (void)mapStatusFetcherDidLoadMyStatus:(id <SCMapStatusFetcher>)arg1;
- (void)mapStatusFetcherDidFailToLoadStatuses:(id <SCMapStatusFetcher>)arg1;
- (void)mapStatusFetcherDidLoadStatuses:(id <SCMapStatusFetcher>)arg1;
@end


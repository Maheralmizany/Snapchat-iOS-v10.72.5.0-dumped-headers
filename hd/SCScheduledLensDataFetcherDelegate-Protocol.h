//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCLensMetadataFetcherDelegate.h"

@class NSError, SCScheduledLensDataFetcher, SOJULoadScheduledLensesResponseV2;

@protocol SCScheduledLensDataFetcherDelegate <SCLensMetadataFetcherDelegate>
- (void)scheduledLensDataFetcher:(SCScheduledLensDataFetcher *)arg1 didFailWithError:(NSError *)arg2;
- (void)scheduledLensDataFetcher:(SCScheduledLensDataFetcher *)arg1 didFetchData:(SOJULoadScheduledLensesResponseV2 *)arg2;
@end

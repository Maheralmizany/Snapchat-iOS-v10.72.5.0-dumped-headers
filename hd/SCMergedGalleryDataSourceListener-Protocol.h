//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSError, SCMergedGalleryDataSource;

@protocol SCMergedGalleryDataSourceListener <NSObject>
- (void)dataSource:(SCMergedGalleryDataSource *)arg1 didChangeEntries:(NSArray *)arg2 failedEntries:(NSArray *)arg3 fetchEntryError:(NSError *)arg4;
@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSNumber, SCSearchQuery;

@protocol SCDiscoverFeedQueryCoordinatingDelegate <NSObject>
- (void)discoverQueryCoordinator:(id <SCDiscoverFeedQueryCoordinating>)arg1 didFailForQuery:(SCSearchQuery *)arg2 error:(NSError *)arg3 statusCodeToDisplay:(NSNumber *)arg4;
- (void)discoverQueryCoordinator:(id <SCDiscoverFeedQueryCoordinating>)arg1 didReceiveServerResponseForQuery:(SCSearchQuery *)arg2;
@end


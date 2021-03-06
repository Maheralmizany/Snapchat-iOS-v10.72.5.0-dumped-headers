//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCDataCoordinating.h"
#import "SCDataCoordinatorListener.h"

@class NSString;

@protocol SCPinnedConversationsDataCoordinating <SCDataCoordinating, SCDataCoordinatorListener>
- (_Bool)hasPinnedConversationWithId:(NSString *)arg1;
- (void)fetchPinnedTimestampsByFeedIdWithCompletion:(void (^)(NSDictionary *))arg1;
- (void)removePinnedConversationWithId:(NSString *)arg1 completion:(void (^)(_Bool))arg2;
- (void)addPinnedConversationWithId:(NSString *)arg1 completion:(void (^)(_Bool))arg2;
@end


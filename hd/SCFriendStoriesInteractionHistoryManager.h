//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCDocObjectContext;

@interface SCFriendStoriesInteractionHistoryManager : NSObject
{
    SCDocObjectContext *_docObjectContext;
}

- (void).cxx_destruct;
- (void)updateImpressionId:(id)arg1 impressionTime:(double)arg2 timestamp:(double)arg3;
- (void)updateWatchId:(id)arg1 watchTime:(double)arg2 timestamp:(double)arg3;
- (id)initWithDocObjectContext:(id)arg1;

@end

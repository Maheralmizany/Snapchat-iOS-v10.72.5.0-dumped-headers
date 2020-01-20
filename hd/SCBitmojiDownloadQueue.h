//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface SCBitmojiDownloadQueue : NSObject
{
    NSMutableArray *_stack;
}

- (void).cxx_destruct;
- (unsigned long long)_scoreJob:(id)arg1 contexts:(id)arg2;
- (id)_stableSortStackByScore:(id)arg1;
- (void)_seekAndDestroy:(id)arg1;
- (id)retrieveJobsWithContexts:(id)arg1 maxSize:(unsigned long long)arg2;
- (void)removeJob:(id)arg1;
- (void)queueJob:(id)arg1;
- (unsigned long long)length;
- (_Bool)allowPrefetching;
- (id)init;

@end


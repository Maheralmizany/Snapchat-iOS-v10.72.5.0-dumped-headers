//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface SCDiscoverFeedScrollTracker : NSObject
{
    NSMutableDictionary *_trackingDict;
    id <SCDiscoverFeedScrollTrackerDelegate> _delegate;
}

@property(nonatomic) __weak id <SCDiscoverFeedScrollTrackerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)_gestForScrollAxis:(long long)arg1 startingContentOffset:(double)arg2 endingContentOffset:(double)arg3;
- (void)scrollDidEndWithIdentifier:(id)arg1 feedType:(id)arg2 endingContentOffset:(double)arg3 endScrollingTimestamp:(id)arg4;
- (void)scrollStartedWithIdentifier:(id)arg1 scrollAxis:(long long)arg2 startingContentOffset:(double)arg3 startScrollingTimestamp:(id)arg4 pageType:(long long)arg5 pageTypeSpecific:(id)arg6;
- (id)init;

@end


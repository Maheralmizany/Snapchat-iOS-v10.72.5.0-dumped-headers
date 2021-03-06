//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCDiscoverFeedStoryPositionProviding.h"

@class NSArray, NSString;

@interface SCDynamicLayoutStoryPositionProvider : NSObject <SCDiscoverFeedStoryPositionProviding>
{
    NSArray *_feedTypes;
    id <SCDiscoverFeedDataFetching> _discoverFeedDataFetching;
}

- (void).cxx_destruct;
- (unsigned long long)itemIndexForStory:(id)arg1 inFeedType:(unsigned long long)arg2;
- (unsigned long long)sectionIndexForSectionKey:(id)arg1;
- (id)initWithFeedTypes:(id)arg1 discoverFeedDataFetcher:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


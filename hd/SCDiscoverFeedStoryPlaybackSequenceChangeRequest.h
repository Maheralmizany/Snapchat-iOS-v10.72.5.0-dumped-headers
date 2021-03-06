//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCDocObjectChangeRequest.h"

@class NSArray, NSString;

@interface SCDiscoverFeedStoryPlaybackSequenceChangeRequest : NSObject <SCDocObjectChangeRequest>
{
    long long _rowid;
    int _requestType;
    NSString *_compositeStoryId;
    NSArray *_storySnaps;
    NSArray *_publisherSnaps;
}

+ (id)deletionRequestForDiscoverFeedStoryPlaybackSequence:(id)arg1;
+ (id)changeRequestForDiscoverFeedStoryPlaybackSequence:(id)arg1;
+ (id)creationRequestWithDiscoverFeedStoryPlaybackSequence:(id)arg1;
@property(copy, nonatomic) NSArray *publisherSnaps; // @synthesize publisherSnaps=_publisherSnaps;
@property(copy, nonatomic) NSArray *storySnaps; // @synthesize storySnaps=_storySnaps;
@property(copy, nonatomic) NSString *compositeStoryId; // @synthesize compositeStoryId=_compositeStoryId;
- (void).cxx_destruct;
- (id)transactWithSQLite:(struct SQLiteConnection *)arg1 flatbuffers:(struct FlatBufferBuilder *)arg2;
- (id)_discoverFeedStoryPlaybackSequence;
- (id)initWithRowid:(long long)arg1 compositeStoryId:(id)arg2 storySnaps:(id)arg3 publisherSnaps:(id)arg4;
- (void)createTableWithSQLite:(struct sqlite3 *)arg1;
- (const char *)table;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


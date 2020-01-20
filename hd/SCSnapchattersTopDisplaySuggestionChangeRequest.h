//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCDocObjectChangeRequest.h"

@class NSArray, NSString;

@interface SCSnapchattersTopDisplaySuggestionChangeRequest : NSObject <SCDocObjectChangeRequest>
{
    long long _rowid;
    int _requestType;
    unsigned int _page;
    NSArray *_userIds;
    double _topSuggestionsExpirationTimestamp;
}

+ (id)deletionRequestForSnapchattersTopDisplaySuggestion:(id)arg1;
+ (id)changeRequestForSnapchattersTopDisplaySuggestion:(id)arg1;
+ (id)creationRequestWithSnapchattersTopDisplaySuggestion:(id)arg1;
@property(nonatomic) double topSuggestionsExpirationTimestamp; // @synthesize topSuggestionsExpirationTimestamp=_topSuggestionsExpirationTimestamp;
@property(copy, nonatomic) NSArray *userIds; // @synthesize userIds=_userIds;
@property(nonatomic) unsigned int page; // @synthesize page=_page;
- (void).cxx_destruct;
- (id)transactWithSQLite:(struct SQLiteConnection *)arg1 flatbuffers:(struct FlatBufferBuilder *)arg2;
- (id)_snapchattersTopDisplaySuggestion;
- (id)initWithRowid:(long long)arg1 page:(unsigned int)arg2 userIds:(id)arg3 topSuggestionsExpirationTimestamp:(double)arg4;
- (void)createTableWithSQLite:(struct sqlite3 *)arg1;
- (const char *)table;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCDocObjectChangeRequest.h"

@class NSString;

@interface SCCognacAdItemChangeRequest : NSObject <SCDocObjectChangeRequest>
{
    long long _rowid;
    int _requestType;
    NSString *_requestId;
    NSString *_slotId;
    NSString *_appId;
    double _timestampInSec;
    NSString *_payload;
}

+ (id)deletionRequestForCognacAdItem:(id)arg1;
+ (id)changeRequestForCognacAdItem:(id)arg1;
+ (id)creationRequestWithCognacAdItem:(id)arg1;
@property(copy, nonatomic) NSString *payload; // @synthesize payload=_payload;
@property(nonatomic) double timestampInSec; // @synthesize timestampInSec=_timestampInSec;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *slotId; // @synthesize slotId=_slotId;
@property(copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
- (void).cxx_destruct;
- (id)transactWithSQLite:(struct SQLiteConnection *)arg1 flatbuffers:(struct FlatBufferBuilder *)arg2;
- (id)_cognacAdItem;
- (id)initWithRowid:(long long)arg1 requestId:(id)arg2 slotId:(id)arg3 appId:(id)arg4 timestampInSec:(double)arg5 payload:(id)arg6;
- (void)createTableWithSQLite:(struct sqlite3 *)arg1;
- (const char *)table;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


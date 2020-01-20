//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCDocObjectChangeRequest.h"

@class NSArray, NSString;

@interface SCPhoneContactsTimerChangeRequest : NSObject <SCDocObjectChangeRequest>
{
    long long _rowid;
    int _requestType;
    long long _type;
    NSArray *_timestamps;
}

+ (id)deletionRequestForPhoneContactsTimer:(id)arg1;
+ (id)changeRequestForPhoneContactsTimer:(id)arg1;
+ (id)creationRequestWithPhoneContactsTimer:(id)arg1;
@property(copy, nonatomic) NSArray *timestamps; // @synthesize timestamps=_timestamps;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)transactWithSQLite:(struct SQLiteConnection *)arg1 flatbuffers:(struct FlatBufferBuilder *)arg2;
- (id)_phoneContactsTimer;
- (id)initWithRowid:(long long)arg1 type:(long long)arg2 timestamps:(id)arg3;
- (void)createTableWithSQLite:(struct sqlite3 *)arg1;
- (const char *)table;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


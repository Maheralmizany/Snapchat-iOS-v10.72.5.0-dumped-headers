//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCDocObjectChangeRequest.h"

@class NSString;

@interface SCCharmsHiddenCharmChangeRequest : NSObject <SCDocObjectChangeRequest>
{
    long long _rowid;
    int _requestType;
    int _charmIdentifier;
    NSString *_ownerIdentifier;
    long long _ownerType;
    NSString *_displayName;
    long long _hiddenAtTsMs;
}

+ (id)deletionRequestForCharmsHiddenCharm:(id)arg1;
+ (id)changeRequestForCharmsHiddenCharm:(id)arg1;
+ (id)creationRequestWithCharmsHiddenCharm:(id)arg1;
@property(nonatomic) long long hiddenAtTsMs; // @synthesize hiddenAtTsMs=_hiddenAtTsMs;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(nonatomic) long long ownerType; // @synthesize ownerType=_ownerType;
@property(nonatomic) int charmIdentifier; // @synthesize charmIdentifier=_charmIdentifier;
@property(copy, nonatomic) NSString *ownerIdentifier; // @synthesize ownerIdentifier=_ownerIdentifier;
- (void).cxx_destruct;
- (id)transactWithSQLite:(struct SQLiteConnection *)arg1 flatbuffers:(struct FlatBufferBuilder *)arg2;
- (id)_charmsHiddenCharm;
- (id)initWithRowid:(long long)arg1 ownerIdentifier:(id)arg2 charmIdentifier:(int)arg3 ownerType:(long long)arg4 displayName:(id)arg5 hiddenAtTsMs:(long long)arg6;
- (void)createTableWithSQLite:(struct sqlite3 *)arg1;
- (const char *)table;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


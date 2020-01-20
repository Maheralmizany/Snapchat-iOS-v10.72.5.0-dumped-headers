//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCDocObjectChangeRequest.h"

@class NSArray, NSString;

@interface SCSnapKitScopeChangeRequest : NSObject <SCDocObjectChangeRequest>
{
    long long _rowid;
    int _requestType;
    _Bool _toggleable;
    NSString *_name;
    NSArray *_descriptions;
    NSString *_iconURL;
}

+ (id)deletionRequestForSnapKitScope:(id)arg1;
+ (id)changeRequestForSnapKitScope:(id)arg1;
+ (id)creationRequestWithSnapKitScope:(id)arg1;
@property(copy, nonatomic) NSString *iconURL; // @synthesize iconURL=_iconURL;
@property(copy, nonatomic) NSArray *descriptions; // @synthesize descriptions=_descriptions;
@property(nonatomic) _Bool toggleable; // @synthesize toggleable=_toggleable;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)transactWithSQLite:(struct SQLiteConnection *)arg1 flatbuffers:(struct FlatBufferBuilder *)arg2;
- (id)_snapKitScope;
- (id)initWithRowid:(long long)arg1 name:(id)arg2 toggleable:(_Bool)arg3 descriptions:(id)arg4 iconURL:(id)arg5;
- (void)createTableWithSQLite:(struct sqlite3 *)arg1;
- (const char *)table;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


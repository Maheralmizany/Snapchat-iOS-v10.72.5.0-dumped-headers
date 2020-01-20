//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCDocObjectChangeRequest.h"

@class NSArray, NSString;

@interface SCProfileChatAttachmentFetchMetadataChangeRequest : NSObject <SCDocObjectChangeRequest>
{
    long long _rowid;
    int _requestType;
    NSString *_ownerIdentifier;
    NSString *_checksum;
    NSArray *_paginationSequenceNumber;
    unsigned long long _expirationTimestamp;
}

+ (id)deletionRequestForProfileChatAttachmentFetchMetadata:(id)arg1;
+ (id)changeRequestForProfileChatAttachmentFetchMetadata:(id)arg1;
+ (id)creationRequestWithProfileChatAttachmentFetchMetadata:(id)arg1;
@property(nonatomic) unsigned long long expirationTimestamp; // @synthesize expirationTimestamp=_expirationTimestamp;
@property(copy, nonatomic) NSArray *paginationSequenceNumber; // @synthesize paginationSequenceNumber=_paginationSequenceNumber;
@property(copy, nonatomic) NSString *checksum; // @synthesize checksum=_checksum;
@property(copy, nonatomic) NSString *ownerIdentifier; // @synthesize ownerIdentifier=_ownerIdentifier;
- (void).cxx_destruct;
- (id)transactWithSQLite:(struct SQLiteConnection *)arg1 flatbuffers:(struct FlatBufferBuilder *)arg2;
- (id)_profileChatAttachmentFetchMetadata;
- (id)initWithRowid:(long long)arg1 ownerIdentifier:(id)arg2 checksum:(id)arg3 paginationSequenceNumber:(id)arg4 expirationTimestamp:(unsigned long long)arg5;
- (void)createTableWithSQLite:(struct sqlite3 *)arg1;
- (const char *)table;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


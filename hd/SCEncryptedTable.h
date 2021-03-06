//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCFideliusEncryptedDatabase, SCQueuePerformer;

@interface SCEncryptedTable : NSObject
{
    SCFideliusEncryptedDatabase *_database;
    SCQueuePerformer *_performer;
}

@property(readonly, nonatomic) SCQueuePerformer *performer; // @synthesize performer=_performer;
@property(readonly, nonatomic) SCFideliusEncryptedDatabase *database; // @synthesize database=_database;
- (void).cxx_destruct;
- (id)batchUpdateParametersForObjects:(id)arg1;
- (id)updateParametersForObject:(id)arg1;
- (id)objectFromRow:(id)arg1;
- (_Bool)deleteObjectsWithIds:(id)arg1;
- (_Bool)deleteObjectWithId:(id)arg1;
- (_Bool)replaceObjects:(id)arg1;
- (_Bool)replaceObject:(id)arg1;
- (_Bool)insertObjects:(id)arg1;
- (_Bool)insertObject:(id)arg1;
- (id)objectWithId:(id)arg1;
- (unsigned long long)rowCount;
- (id)selectAll;
- (_Bool)dropIfExists;
- (_Bool)createIfNotExists;
- (id)tableName;
- (id)indexes;
- (id)tableSchema;
- (id)initWithDatabase:(id)arg1 performer:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EGODatabase, EGODatabaseStatement, NSString;

@interface SCShakeTicketTable : NSObject
{
    EGODatabase *_database;
    EGODatabaseStatement *_insertShakeTicket;
    EGODatabaseStatement *_updateShakeTicketStatus;
    EGODatabaseStatement *_getNextPendingTicket;
    EGODatabaseStatement *_removeAllTickets;
    NSString *_workDir;
}

+ (id)sharedInPath:(id)arg1;
@property(readonly, copy, nonatomic) NSString *workDir; // @synthesize workDir=_workDir;
- (void).cxx_destruct;
- (id)_databaseURL;
- (void)setupDatabase;
- (id)getNextPendingTicket;
- (_Bool)updateTicketStatusWithID:(id)arg1 uploadStatus:(long long)arg2;
- (_Bool)saveShakeTicket:(id)arg1;
- (void)deleteAllPendingTickets;
- (void)deleteDatabase;
- (id)initWithPath:(id)arg1;

@end


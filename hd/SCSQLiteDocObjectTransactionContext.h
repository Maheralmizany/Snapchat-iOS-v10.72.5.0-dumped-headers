//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCDocObjectFetching.h"
#import "SCDocObjectTransactionContext.h"

@class NSString, SCSQLiteDocObjectContext;

@interface SCSQLiteDocObjectTransactionContext : NSObject <SCDocObjectTransactionContext, SCDocObjectFetching>
{
    unordered_set_30ae6e39 *_tableCreated;
    unordered_set_30ae6e39 _tableInserted;
    id <SCDocObjectActivityMonitor> _activityMonitor;
    SCSQLiteDocObjectContext *_docObjectContext;
    Error_0f254fb3 _error;
    struct FlatBufferBuilder _fbb;
    _Bool _abortedTransaction;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)submit:(id)arg1;
- (id)fetchWithBlock:(CDUnknownBlockType)arg1;
- (struct Builder)fetchForClass:(Class)arg1;
- (void)abort;
- (id)error;
- (void)abortTableCreated;
- (id)initWithDocObjectContext:(id)arg1 tableCreated:(unordered_set_30ae6e39 *)arg2 monitor:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


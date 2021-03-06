//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCStickerSearchDatabase.h"

@class EGODatabase, EGODatabaseStatement, NSObject<OS_dispatch_queue>, NSString, SCLazy, SCQueuePerformer;

@interface SCStickerSearchDatabase : NSObject <SCStickerSearchDatabase>
{
    NSString *_stickerTypeString;
    NSString *_directoryFolderName;
    SCQueuePerformer *_queryPerformer;
    NSObject<OS_dispatch_queue> *_updateQueue;
    EGODatabase *_database;
    EGODatabaseStatement *_stickerTagSearchByStringMatching;
    EGODatabaseStatement *_stickerSynonymSearchByStringMatching;
    EGODatabaseStatement *_stickerTagSearchByStickerIdMatching;
    EGODatabaseStatement *_beginTransaction;
    EGODatabaseStatement *_commitTransaction;
    SCLazy *_autoShakeToReporter;
}

- (void).cxx_destruct;
- (_Bool)_tagsTableIsEmptyShouldDispatch:(_Bool)arg1;
- (void)_showSynoymTableContent;
- (void)_showTagTableContentWithLimit:(int)arg1;
- (id)_generateWordWithSynonym:(id)arg1;
- (id)_replaceSynonymsWithText:(id)arg1;
- (id)_removeTrailingSpaces:(id)arg1;
- (_Bool)_textHasPunctuationsOnly:(id)arg1;
- (id)processedTextWithText:(id)arg1;
- (void)fetchTagsWithPrefix:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)collectUniqueTagsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)getStickerTags:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)performSearch:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_fileAutoS2R;
- (void)_updateDatabaseWithData:(id)arg1 newVersion:(int)arg2 isRetry:(_Bool)arg3;
- (void)_updateWithSearchData:(id)arg1 version:(int)arg2 isRetry:(_Bool)arg3;
- (void)updateWithSearchData:(id)arg1 version:(int)arg2;
- (_Bool)hasVersionChanged:(int)arg1;
- (void)_storeStickerSearchPackVersion:(int)arg1;
- (int)_localStickerSearchPackVersion;
- (void)_insertSynonyms:(id)arg1 database:(id)arg2;
- (void)_insertTags:(id)arg1 database:(id)arg2;
- (void)_setupSearchStatementsForDatabase:(id)arg1;
- (void)_setupDatabase:(id)arg1;
- (id)initType:(long long)arg1 autoShakeToReporter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


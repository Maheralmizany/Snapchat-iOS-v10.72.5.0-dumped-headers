//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCBitmojiStickerPackSerializer.h"

@interface SCBitmojiStickerPackKeyedArchiverSerializer : NSObject <SCBitmojiStickerPackSerializer>
{
}

- (void)__deleteActivePacks;
- (void)__deleteMegapackMetadata:(id)arg1;
- (id)_restoreListOfPacks;
- (id)_restoreStickerPacks:(id)arg1;
- (id)_archiveFileUrl:(id)arg1;
- (CDStruct_a70f6672)_tryReadPackMetadataFromDisk;
- (void)archivePackMetadatas:(id)arg1 sourceId:(id)arg2 version:(id)arg3;
- (void)archiveListOfPacks:(id)arg1;
- (CDStruct_a70f6672)restoreMegapackMetadata:(id)arg1;
- (CDStruct_a70f6672)restoreAllPackMetadata;

@end


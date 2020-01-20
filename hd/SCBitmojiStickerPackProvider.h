//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCBitmojiStickerPackProvider.h"

@class NSArray, NSMutableDictionary, NSString, SCBitmojiStickerLibrary;

@interface SCBitmojiStickerPackProvider : NSObject <SCBitmojiStickerPackProvider>
{
    NSArray *_bitmojiStickerPacks;
    NSArray *_bitmojiGeostickerPackMetadatas;
    id <SCPerforming> _performer;
    id <SCBitmojiStickerPackSerializer> _serializer;
    NSMutableDictionary *_packIdToIconId;
    id <NSObject> _memoryWarningObservedToken;
    SCBitmojiStickerLibrary *_library;
}

@property(retain) SCBitmojiStickerLibrary *library; // @synthesize library=_library;
- (void).cxx_destruct;
- (void)_resetBitmojiStickerPacks;
- (void)_processBitmojiStickerPacks:(id)arg1;
- (void)_updateBitmojiPackMetadatas:(id)arg1 iconMapping:(id)arg2;
- (id)iconUrlForPackId:(id)arg1;
- (void)updateBitmojiPackMetadatas:(id)arg1 packType:(unsigned long long)arg2 iconMapping:(id)arg3;
- (id)_loadAllBitmojiPackMetadatas;
- (id)bitmojiGeostickerPackMetadatas;
- (id)allBitmojiPackMetadatas;
- (id)libraryFuture;
- (void)dealloc;
- (id)initWithSerializer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCBitmojiStickerSearchFetcher.h"

@class NSString;

@interface SCBitmojiStickerSearchFetcher : NSObject <SCBitmojiStickerSearchFetcher>
{
    id <SCPerforming> _performer;
    id <SCStickerSearchDatabase> _searchDatabase;
    id <SCRequestManager> _requestManager;
}

- (void).cxx_destruct;
- (void)_fetchStickerSearchMetadataWithSearchPack:(id)arg1;
- (void)updateSearchPacks:(id)arg1;
- (id)initWithDatabase:(id)arg1 requestManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
